#include <stdio.h>

int binarySearch(int numbers[10], int findNumber);
 
int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int findNumber1 = 9;
    int indexOf_1 = binarySearch(numbers, findNumber1);
    printf("indexOf %d = %d\n", findNumber1, indexOf_1);

    int findNumber2 = 1;
    int indexOf_2 = binarySearch(numbers, findNumber2);
    printf("indexOf %d = %d\n", findNumber2, indexOf_2);

}

int binarySearch(int numbers[10], int findNumber)
{
    int size = 10;
    int indexFound = -1;
    int leftIndex = 0;
    int rightIndex = size - 1;
    
    while (leftIndex <= rightIndex) 
    {   
        int midIndex = (leftIndex + rightIndex) / 2;
        if (findNumber == numbers[midIndex])
        {
            indexFound = midIndex;
            break;
        } else if (findNumber < numbers[midIndex])
        {
            rightIndex = midIndex - 1;
        }
        else
        {
            leftIndex = midIndex + 1;
        }
    }
    return indexFound;

}
