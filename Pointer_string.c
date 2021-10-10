#include <stdio.h>
int main() {
    char * myname = "Hoang Vu_Snape"; // sự khác biệt giữ khi con làm * với []
    printf("the value of name = %s\n", myname);
    printf("the address of name = %p\n", myname);//
    char * pointer_myname = myname;
    printf("\n");
    printf("the address of name (pointer_myname) = %p\n", pointer_myname);
    
    printf("\n");
    // print ra giá trị sao khác nhau ta
    printf("1 the value of name = %s\n", pointer_myname);// why cai nay lại thành null.
    printf("2 the value of name_1 = %s\n", *&myname);
    // difference  :)))// it's a address of myname
    
    printf("the value of address not address of myname_2  = %p\n", *&pointer_myname);
}

