
#include <stdio.h>
#include "myFunction.h"


int main()
{

int array[N];
int i,x;
for(i=0;i<N;i++){
scanf("%d",&x);
array[i]=x;
}

insertion_sort(array,N);
printArray(array,N);

/*
int a[7]={1,2,3,4,5,6,7};
int* p=a+2;
shift_element(p,3);
printArray(a,7);
/////
int b[]={1,5,6,7,4,2,1};
insertion_sort(b,7);
printArray(b,7);
//////////
int array2[N]={6,7,5,9,8,2};
insertion_sort(array2,N);
printArray(array2,N);
*/







return 0;



}
