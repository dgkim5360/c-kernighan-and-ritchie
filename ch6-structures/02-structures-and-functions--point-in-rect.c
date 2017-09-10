#include<stdio.h>
#include<stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

struct point {
  int x;
  int y;
};

struct rect {
  struct point pt1;
  struct point pt2;
};

struct point makepoint(int, int);
struct point addpoint(struct point, struct point);
int ptinrect(struct point, struct rect);
struct rect canonrect(struct rect);

int main(int argc, char *argv[]) {
  struct rect r = {{0,0}, {100,100}};
  struct point p;
  int x, y;
  if (argc == 3) {
    r = canonrect(r);
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    p = makepoint(x, y);
    printf("(%d,%d) is ", x, y);
    printf((ptinrect(p, r) > 0) ? "inside" : "outside");
    printf(" my rectangle\n");
  }
  else
    printf("Please insert two integers for x, y.\n");
  return 0;
}
// make point: make a point from x and y components
 struct point makepoint(int x, int y) {
   struct point temp;

   temp.x = x;
   temp.y = y;
   return temp;
 }

// addpoint: add two points
struct point addpoint(struct point p1, struct point p2) {
  p1.x += p2.x;
  p1.y += p2.y;
  return p1;
}

// ptinrect: return 1 if p in r, 0 otherwise
int ptinrect(struct point p, struct rect r) {
  return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}

// canonrect: canonicalize coordinates of rectangle
struct rect canonrect(struct rect r) {
  struct rect temp;

  temp.pt1.x = min(r.pt1.x, r.pt2.x);
  temp.pt1.y = min(r.pt1.y, r.pt2.y);
  temp.pt2.x = max(r.pt1.x, r.pt2.x);
  temp.pt2.y = max(r.pt1.y, r.pt2.y);
  return temp;
}

// pointer to structure
/*
struct point origin, *pp

pp = &origin;
printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);
printf("origin is (%d, %d)\n", pp->x, pp->y);
*/

// the following are equivalent
/*
struct rect r, *rp = &r;

r.pt1.x
rp->pt1.x
(r.pt1).x
(rp->pt1).x
*/
