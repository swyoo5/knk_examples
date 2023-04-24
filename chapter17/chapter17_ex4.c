/*
Suppose that the following declarations are in effect :
struct point {int x, y;};
struct rectangle {struct point upper_left, lower_right;};
struct rectangle *p;
Assume that we want p to point to a rectangle structure whose upper left corner is at (10,25) and whose lower right corner is at (20,15). Write a series of statements that allocate such a structure and initialize it as indicated.
*/

p = (struct rectangle *) malloc(sizeof(struct rectangle)); // malloc 함수가 반환하는 값이 void *형식이므로 모든 포인터 타입으로 변환될 수 없지만, 형변환 해주는게 좋음.

p->upper_left = {10,25};
p->lower_right = {20,15};
