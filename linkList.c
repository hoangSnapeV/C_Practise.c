#include <stdio.h>
#include <stdlib.h>
typedef struct
{ 
    float grade;
    struct node * next;
    
}node;

node* create_linked_list();
void print_all_items_linked_list(node* head);
node*  remove_item_by_index(node* head,int indexNeedRomove);

int main()
{   
    node * head = NULL;
    //head = create_linked_list(); 
    print_all_items_linked_list(head);

    printf("\n");
    head = remove_item_by_index(head, 0);
    print_all_items_linked_list(head);
    //head->grade = 9;
    


    
    //printf("size = %d\n", i);

//----------- romove nope 4
   
    return 0;       

}
node* create_linked_list() {

    //printf("address = %p\n", head);
    //head = NULL;
    node* head;
    head = (node *)malloc(sizeof (node));
    //printf("address after malloc = %p\n", head);
    node* node1 = head;

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

    return head;
}
void print_all_items_linked_list(node* head) {

    node * itemOfLinklist = head;
    int i = 0;
    while (itemOfLinklist != NULL)
    {
        printf("grade %d = %.1f \n", i, itemOfLinklist->grade);
        printf("index = %d next of = %p\n", i, itemOfLinklist->next);
                                                                                                                                           
        itemOfLinklist = itemOfLinklist->next;
        i++;  
    }
}

node*  remove_item_by_index(node* head,int indexNeedRomove) {
    node* itemforRemove = head;
    int index = 0;
    //indexNeedRomove = 3;
    if(head == NULL){
        return head;
    }
    if(indexNeedRomove == 0){
        head = head->next;
    } else {
        while (itemforRemove != NULL)
        {
            if(index == indexNeedRomove - 1){
                node* remove = itemforRemove->next;
                itemforRemove->next = remove->next;
                break;
            }
            //
            itemforRemove = itemforRemove->next;
            //printf("index = %d, grade= %f ", index,);
            index++;
        }
        }
    return head;
}