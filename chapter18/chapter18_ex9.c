Use a series of type definitions to simplify each of the declarations in Ex8
(a) char (*x[10])(int);
 : x는 함수의 포인터를 원소로 가지는 배열이고, 각 함수는 int argument를 가지고 char를 리턴
(b) int (*x(int))[5];
 : x는 int argument를 가지는 함수이며, 다섯개의 원소를 가지는 배열의 포인터를 반환한다.
(c) float *(*x(void))(int);
 : x는 argument를 가지지 않는 함수이며, 함수의 포인터를 리턴하고, 그 함수는 int argument를 가지고 float 포인터를 리턴한다.
(d) void (*x(int, void (*y)(int)))(int);
 : x는 int, void (*y)(int)를 argument로 가지며 함수의 포인터를 리턴하며, 그 함수는 int argument를 가지고 아무것도 리턴하지 않는다.
그리고 y는 int argument를 가지고, int argument를 가지고 아무것도 리턴하지 않는 함수의 포인터이다.

(a) char (*x[10])(int);
typedef char Fcn(int);
typedef Fcn  *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];
Fcn_ptr_array x;

(b) int (*x(int))[5];
typedef int array[5];
typedef array *array_ptr;
typedef array_ptr array_ptr_fcn(int);
array_ptr_fcn x; 

(c) float *(*x(void))(int);
typedef float *Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_fcn(void);
Fcn_ptr_fcn x;

(d) void (*x(int, void (*y)(int)))(int);
typedef void Fcn(int);
typedef Fcn *Fcn_ptr;
Fcn_ptr y;
typedef Fcn_ptr Fcn_ptr_fcn(int, y);
Fcn_ptr_fcn x;
