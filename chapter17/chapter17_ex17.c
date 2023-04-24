/*
Let a be an array of 100 integers. Write a call of qsort that sorts only the last 50 elements in a.
*/

qsort(&a[50], 50, sizeof(a[0]), comparison_func);
