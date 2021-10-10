#include <stdio.h>
int main()
{
    int address[4] = {22, 16, 10, 28};
    int * num = &address[0];
    printf("address of me: %p\n", num); // lấy giá trị 
    printf("the value of address: %d\n", *num);
    //
    int * ad = NULL;
    for (ad = address; ad < address + 4; ad++ ) 
    {
        printf("Print all of value: %d\n", * ad);
    }
}





