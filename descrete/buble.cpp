#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90,100,34, 67,8999,4,6,788,12,345,643,2234,344,44,32,4556,77,8,6,4,2,23,4,5,56,6,77,7,8,8,9,};
    int n = sizeof(arr)/sizeof(arr[0]);
    clock_t  t1;
    t1=clock();
    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    t1 = clock() - t1;
    double time_taken =  (((double)t1)/CLOCKS_PER_SEC)*1000;
    cout<<"\ntime complexity:"<<time_taken<<endl;
    return 0;
}
