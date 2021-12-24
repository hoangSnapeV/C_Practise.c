
#include <stdio.h>

int main() {
    int a = 1;
    //adress= 0000009ef1fffda4; size= 4 ; value= 1

    printf("The value of a is  %d\n", a);
    printf("The size of a = %zu bytes\n ", sizeof(a));
    printf("The value of &a is now %p\n", &a);
    //
    int * pointer_to_a = &a;
    printf("The value of pointer_to_a is %p\n", pointer_to_a);
    printf("The value of a is also  %d\n",  *pointer_to_a);


    printf("\n");
    *pointer_to_a = 1212;
    printf("The value of a is  %d\n", a);
    printf("The value of &a is now %p\n", &a);
    printf("The value of pointer_to_a is %p\n", pointer_to_a);
    printf("The value of a is also  %d\n",  *pointer_to_a);
}
