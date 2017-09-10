#include<stdio.h>
#define HASHSIZE 101

struct nlist {  // table entry:
  struct nlist *next;  // next entry in chain
  char *name;  // defined name
  char *defn;  // replacement text
};

static struct nlist *hashtab[HASHSIZE];  // pointer table

struct nlist *lookup(char *);
struct nlist *install(char *, char *);

int main() {
  char *keys[] = {"hello", "let", "us", "insert", "something", "in", "the", "hashtab"};
  char *values[] = {"here", "comes", "the", "vales", "from", "the", "awesome", "universe"};
  register int i;
  struct nlist *np;

  for (i = 0; i < 8; i++) {
    if ((np = lookup(keys[i])) == NULL)
      printf("\"%s\" not found in the hashtab, ", keys[i]);
    else
      printf("\"%s\" found in the hashtab, ", keys[i]);
    printf("let's insert the value \"%s\" to it.\n", values[i]);
    np = install(keys[i], values[i]);
  }

  printf("\n===\nNow let's check my hashtab.\n");
  for (i = 0; i < HASHSIZE; i++) {
    np = hashtab[i];
    if (np != NULL)
      printf("%s: %s\n", np->name, np->defn);
  }
}

// hash: form hash value for string s
unsigned hash(char *s) {
  unsigned hashval;

  for (hashval = 0; *s != '\0'; s++)
    hashval = *s + 31*hashval;
  return hashval%HASHSIZE;
}

#include <string.h>
#include <stdlib.h>

// lookup: look for a s in hashtab
struct nlist *lookup(char *s) {
  struct nlist *np;

  for (np = hashtab[hash(s)]; np != NULL; np = np->next)
    if (strcmp(s, np->name) == 0)
      return np;  // found
    return NULL;  // not found
}

// install: put (name, defn) in hashtab
struct nlist *install(char *name, char *defn) {
  struct nlist *np;
  unsigned hashval;

  if ((np = lookup(name)) == NULL) {  // not found
    np = (struct nlist *) malloc(sizeof(*np));
    if (np == NULL || (np->name = strdup(name)) == NULL)
      return NULL;
    hashval = hash(name);
    np->next = hashtab[hashval];
    hashtab[hashval]= np;
  } else  // already there
    free((void *) np->defn);  // free previous defn
  if ((np->defn = strdup(defn)) == NULL)
    return NULL;
  return np;
}
