#include <math.h>

struct _point {
  float x;
  float y;
};

float distance(struct _point p1, struct _point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
  struct _point p1 = {1, 2};
  struct _point p2 = {4, 6};
  printf("The distance between the points is: %f", distance(p1, p2));
  return 0;
}
