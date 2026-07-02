#include "student.h"

void stud_show(void)
{
    STUDENT *temp;

    if(head == NULL)
    {
        printf("\nNo Records Found.\n");
        return;
    }

    temp = head;

    printf("\n-------------------------------------------------\n");
    printf("Roll No\t\tName\t\tPercentage\n");
    printf("-------------------------------------------------\n");

    while(temp)
    {
        printf("%d\t\t%-15s%.2f\n",
               temp->roll,
               temp->name,
               temp->per);

        temp = temp->next;
    }

    printf("-------------------------------------------------\n");
}
