#include <stdio.h>

int main() {
    int a = 2;
    //adress= 0000009ef1fffda4; size= 4 ; value= 1

    printf("The value of a is  %d\n", a);
    printf("The size of a = %zu bytes\n", sizeof(a));
    printf("The adress of &a is now %p\n", &a);
    //
    int * pointer_to_a = &a;
    printf("The address of pointer_to_a is %p\n", pointer_to_a);
    printf("The value of a is also  %d\n",  *pointer_to_a);
    printf("The value of a is also  %p\n",  *pointer_to_a);//???
    printf("\n");
    // value of a// address chứa value, khi lấy * address thì = value;
    printf("The value of a is now %d\n", *&a);
    printf("The value of a is also  %d\n",  * pointer_to_a);
    printf("The value of a is  %d\n", a);
    //
    printf("neww----------\n");
    printf("\n");
    *pointer_to_a = 1212;
    printf("The value of a is  %d\n", a);
    printf("The address of a is now %p\n", &a);
    printf("The address of pointer_to_a is %p\n", pointer_to_a);
    printf("The value of a is also  %d\n",  * pointer_to_a);


    printf("------------\n");
    /// pointer_String
    char * myname = "Hoang Vu_Snape"; // sự khác biệt giữ khi con làm * với []
    printf("the value of name = %s\n", myname);
    printf("the address of name = %p\n", &myname);//
    char * pointer_myname = &myname;
    printf("the address of name (pointer_myname) = %p\n", pointer_myname);
    
    printf("\n");
    // print ra giá trị sao khác nhau ta
    printf("the value of name = %p\n", * pointer_myname);// tại sao con để %s lại k đc mà %p mới chạy 
    printf("the value of name_1 = %p\n", *&myname);// con tách ra thì bình thường
    // difference  :)))// it's a address of myname
    
    printf("the value of address not address of myname_2  = %p\n", *&pointer_myname);
}
   

