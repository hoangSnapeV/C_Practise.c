#include <stdio.h>
#include <string.h>
int main() {
  /* define first_name */
  /* define last_name */
   char * first_name = "John"; // pointer notation
   char last_name[] = "Doe";// array notation
  char name[100];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }
  name[0]='\0';
  strncat(name,first_name,4);
  strncat(name,last_name,20);
  printf("%s\n",name);
  return 0;
}
// khó hiểu cái syntax function
#include <stdio.h>

/* function declaration */
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
void print_big(int number) {
    if (number > 10) {
   	printf("%d is big\n", number); 
    }
}
