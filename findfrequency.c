#include <stdio.h> 

int count_Frequency(int n, int number[15])
{   
    
    int count = 0;
    for (int i = 0; i < 15; i++)
    {   
        if (n == number[i])
        {
            count++;
        }
    }
    return count;
}

int have_member_by_genger(int class_members[12], int gender)
{   
    int gender_student = 0;
    for (int i = 0; i < 12; i++)
    {   

        if (gender == class_members[i])
        {
            gender_student = 1;
            break;
        }
    }
    return gender_student;
}
int main()
{   /*
    int numbers[15] = {1, 2, 4, 6, 7, 8, 3, 8, 4, 6, 8, 3, 4, 6, 8}; 
    //int result = count_Frequency(8, numbers);
    //printf("freg of 8 = %d\n", result);

    for (int i = 0; i < 15; i++)
    {
        int j = numbers[i];
        int count_number = count_Frequency(j, numbers);
        printf("freg of %d = %d\n", j, count_number);
    }
    */

    int class_members[12] = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1};
    int is_have_girl = have_member_by_genger(class_members[12], 0);
    printf("girl = %d ", is_have_girl);

} 

