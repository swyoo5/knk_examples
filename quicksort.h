#ifndef QUICKSORT_H
#define QUICKSORT_H

//quicksort algorithm

/*****************************************************************
* split : Return the index of the partition element of arr arr[] *
******************************************************************/
int split(int arr[], int low, int high);

/***********************************************************
* quick_sort : Sort the array arr[] by quicksort algorithm *
***********************************************************/
void quick_sort(int arr[], int low, int high); 

#endif
