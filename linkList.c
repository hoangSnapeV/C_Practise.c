#include <stdio.h>
#include <stdlib.h>
typedef struct
{ 
    float grade;
    struct node * next;
    
}node;

int main()
{   
    printf("start");
    node * head = NULL;
    node * first = NULL;

    printf("address = %p\n", head);
    head = (node *)malloc(sizeof (node));
    printf("address after malloc = %p\n", head);
    //

    //head->grade = 9;
    (*head).grade = 9.5;
    head->next = NULL;

    //printf("grade of head= %f\n", head->grade);
    //printf("next of head= %p\n", head->next);

    node * node2 = (node *)malloc(sizeof (node));
    node2-> grade = 8;
    node2->next = NULL;
    head->next = node2;

    node * node3 = (node *)malloc(sizeof (node));
    node3-> grade = 9;
    node3->next = NULL;
    node2->next = node3;

    node * node4 = (node *)malloc(sizeof (node));
    node4-> grade = 10;
    node4-> next = NULL; 
    node3->next = node4;


    node * itemOfLinklist = head;
    int i = 0;
    while (itemOfLinklist != NULL)
    {
        printf("grade %d of = %.1f \n", i, itemOfLinklist->grade);
        printf("index = %d next of = %p\n", i, itemOfLinklist->next);
                                                                                                                                           
        itemOfLinklist = itemOfLinklist->next;
        i++;  
    }
    printf("size = %d\n", i);
         
    return 0;                           
}