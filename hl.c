#include <stdio.h>
int main()
{
    int num = 12; 
    int *ptr = &num;
    int numCopy = *ptr;
    *ptr = 10;
    printf("%d\n",num );
    ptr = &numCopy;
    num = *ptr; 
    int *ptrCopy = &num;
    int **ptr2 = &ptr;  
    int *num2 = *ptr2;
    int num3 = **ptr2;
     printf("num =%d\n",num );
     printf("num3 =%d\n",num3 );
    return 0;
}