#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

typedef struct tnode *Treeptr;
typedef struct tnode {  // the tree node
  char *word;  // points to the text
  int count;  // number of occurrences
  struct tnode *left;  // left child
  struct tnode *right;  // right child
} Treenode;

Treeptr addtree(Treeptr, char *);
void treeprint(Treeptr);
int getword(char *, int);

// word frequency count
int main() {
  Treeptr root;
  char word[MAXWORD];

  root = NULL;
  while (getword(word, MAXWORD) != EOF)
    if (isalpha(word[0]))
      root = addtree(root, word);
  treeprint(root);
  return 0;
}

struct tnode *talloc(void);

// addtree: add a note with w, at or below p
Treeptr addtree(Treeptr p, char *w) {
  int cond;

  if (p == NULL) {  // a new word has arrived
    p = talloc();
    p->word = strdup(w);
    p->count = 1;
    p->left = p->right = NULL;
  } else if ((cond = strcmp(w, p->word)) == 0)
    p->count++;  // repeated word
  else if (cond < 0)  // leff than into leeft subtree
    p->left = addtree(p->left, w);
  else
    p->right = addtree(p->right, w);
  return p;
}

// treeprint: in-order print of tree p
void treeprint(Treeptr p) {
  if (p != NULL) {
    treeprint(p->left);
    printf("%4d %s\n", p->count, p->word);
    treeprint(p->right);
  }
}

#include <stdlib.h>

// talloc: make a tnode
Treeptr talloc(void) {
  return (Treeptr) malloc(sizeof(Treenode));
}

// getword: get next word or character from input; same as 60300
int getword(char *word, int lim) {
  int c, getch(void);
  void ungetch(int);
  char *w = word;

  while (isspace(c = getch()))
    ;
  if (c != EOF)
    *w++ = c;
  if (!isalpha(c)) {
    *w = '\0';
    return c;
  }
  for ( ; --lim > 0; w++)
    if (!isalnum(*w = getch())) {
      ungetch(*w);
      break;
    }
  *w = '\0';
  return word[0];
}
