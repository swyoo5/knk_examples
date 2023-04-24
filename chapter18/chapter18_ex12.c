(a) Write a complete description of the type of the function f, assuming that it's declared as follows :
int (*f(float (*)(long), char *)) (double);
(b) Give an example showing how f would be called.

(a) int (*f(float (*)(long), char *)) (double);
f는 두개의 argument를 가지고 있는 함수의 포인터이고,  argument의 타입은 long argument를 가지는 float를 리턴하는 함수의 포인터, 그리고 하나는 char의 포인터이다. 그리고 f는 double argument를 가지고 int를 리턴하는 함수의 포인터를 반환한다.

(b) 
int a = *f(g, &h)(1.12);
