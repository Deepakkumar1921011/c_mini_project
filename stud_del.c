#include "student.h"

void stud_del(void)
{
    char ch;
    int roll, found = 0;
    char name[30];

    STUDENT *temp, *prev;

    printf("\nR/r : Delete using Roll Number\n");
    printf("N/n : Delete using Name\n");

    printf("Enter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':

            printf("Enter Roll Number : ");
            scanf("%d", &roll);

            temp = head;
            prev = NULL;

            while(temp)
            {
                if(temp->roll == roll)
                {
                    found = 1;

                    if(prev == NULL)
                        head = temp->next;
                    else
                        prev->next = temp->next;

                    free(temp);

                    printf("\nRecord Deleted Successfully.\n");
                    return;
                }

                prev = temp;
                temp = temp->next;
            }

            if(found == 0)
                printf("\nRoll Number Not Found.\n");

            break;

        case 'N':
        case 'n':

            printf("Enter Name : ");
            scanf(" %[^\n]", name);

            temp = head;

            printf("\nMatching Records\n");
            printf("-------------------------------------\n");
            printf("Roll\tName\t\tPercentage\n");
            printf("-------------------------------------\n");

            while(temp)
            {
                if(strcmp(temp->name, name) == 0)
                {
                    printf("%d\t%-10s\t%.2f\n",
                           temp->roll,
                           temp->name,
                           temp->per);
                    found = 1;
                }

                temp = temp->next;
            }

            if(found == 0)
            {
                printf("\nNo Record Found.\n");
                return;
            }

            printf("\nEnter Roll Number to Delete : ");
            scanf("%d", &roll);

            temp = head;
            prev = NULL;

            while(temp)
            {
                if(temp->roll == roll)
                {
                    if(prev == NULL)
                        head = temp->next;
                    else
                        prev->next = temp->next;

                    free(temp);

                    printf("\nRecord Deleted Successfully.\n");
                    return;
                }

                prev = temp;
                temp = temp->next;
            }

            printf("\nRoll Number Not Found.\n");
            break;

        default:
            printf("\nInvalid Choice.\n");
    }
}
