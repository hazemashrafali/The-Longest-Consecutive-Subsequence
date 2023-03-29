#include <stdio.h>
#include <stdlib.h>
#include "InsertionSort.h"

int main()
{
    //test case#1 {9, 0, 7, 5, 3, 8, -10, 4, 2, 1}
    //test case#3 {9, 0, 7, 5, 3, 8, -10, 4, 2, 1, 6, 12}
    //test case#4 {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    //test case#5 {2, 8, 4, 10, 6, 20, 16, 12, 14, 16}
    int32_t array[10]= {2, 8, 4, 10, 6, 20, 16, 12, 14, 16};
    int8_t flag;
    uint8_t LCS=0;
    printf("array before sorting\n");
    printArray(array,10);
    flag=lcsGetSize(array,10,&LCS);
    if(flag==-1)
        printf("the array is empty");
    if(flag==-2)
        printf("the array is out of range\n");
    printf("array after sorting\n");
    printArray(array,10);
    printf("LCS=%d",LCS);

}
