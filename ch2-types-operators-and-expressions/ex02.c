// Exercise 2-02: A loop equivalent to this for loop below
// for (i=0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++)
//   s[i] = c;

int i = 0;
while ((c = getchar()) != '\n') {
  if (c != EOF)
    s[i++] = c;
  else
    break;
  if (i < lim - 1)
    break;
}
