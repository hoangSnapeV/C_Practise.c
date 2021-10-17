#include <stdio.h>
#include <stdlib.h>
typedef struct
{ 
    float grade;
    struct node * next;
    
}node;

int main()
{   
    
    node * head;
    
    printf("address = %p\n", head);
    head = (node *)malloc(sizeof (node));
    printf("address after malloc = %p\n", head);
    node * node1 = head;
    //

    //head->grade = 9;
    (*node1).grade = 9.5;
    head->next = NULL;
    //printf("grade = %.1f \n", head->grade);

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
        printf("grade %d = %.1f \n", i, itemOfLinklist->grade);
        printf("index = %d next of = %p\n", i, itemOfLinklist->next);
                                                                                                                                           
        itemOfLinklist = itemOfLinklist->next;
        i++;  
    }
    //printf("size = %d\n", i);

//----------- romove nope 4
    node * itemforRemove = head;
    int index = 0;
    int indexNeedRomove = 3;
    while (itemforRemove != NULL)
    {
        if(index == indexNeedRomove - 1){
            node* remove = itemforRemove->next;
            itemforRemove->next = remove->next;
            break;
        }
        //
        itemforRemove = itemforRemove->next;
        index++;//1 //2
    }
    printf("\n");
    itemOfLinklist = head;
    i = 0;
    while (itemOfLinklist != NULL)
    {
        printf("grade %d = %.1f \n", i, itemOfLinklist->grade);
        printf("index = %d next of = %p\n", i, itemOfLinklist->next);
                                                                                                                                           
        itemOfLinklist = itemOfLinklist->next;
        i++;  
    }
    return 0;       

}

