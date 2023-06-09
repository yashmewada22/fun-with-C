#include <stdio.h>

typedef enum /*Declaring an enum that will act as an index of an array*/
{
    person1=0,
    person2
}person_enum;

typedef struct /*Declaring the structure*/
{
    int height;
    int weight;
    char name[10];
}person_t;

int main()
{
    person_t person[2]={                                    /*Declaring an array "person[]" for the structure person_t*/
      [person1]={.height=2,.weight=3,.name="john"},         /*person1 acts as the index 0 for person[0] array -> person[person1]*/
      [person2]={.height=3,.weight=4,.name="mick"}
    };
    printf("Person1 -> Height = %d, Weight = %d, and Name = %s\n",person[person1].height,person[person1].weight,person[person1].name);
    printf("Person2 -> Height = %d, Weight = %d, and Name = %s",person[person2].height,person[person2].weight,person[person2].name);
    return 0;
}

/* Output
Person1 - Height = 2, Weight = 3, and Name = john
Person2 -> Height = 3, Weight = 4, and Name = mick
*/