#include <stdio.h>
#include "myFunction.h"


void shift_element(int* arr, int i)               //move arr to right i cells
{

if(i<0 )
{
  printf("\nwrong number\n");
}


else{

for(;i>0;i--)
       {
  swap(  (arr+i),(arr+i-1)  );

       }

    }
}

void swap(int *pa, int *pb)                       //swap pointer 
{     
*pa = *pb;
} 


void printArray(int *arr, int n)        //print array ,n -size
{ 

    int i; 
    for (i = 0; i < n-1; i++) {
        printf("%d,", *(arr+i));}
       if(i<n){ printf("%d", *(arr+i));}
    printf("\n"); 
} 


///b


void insertion_sort(int* arr , int len)            

{ 

int i,j;
 for (i=1 ; i < len ; i++)  {
  for (j=i ; j > 0 &&  ( *(arr+j-1) >*(arr+j)  ) ; j--)  
     {
      int temp=*(arr+j);
    shift_element(arr+j-1,1);
        *(arr+j-1)=temp;
     } 
       } 
}















