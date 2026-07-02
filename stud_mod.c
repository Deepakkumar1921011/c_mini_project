#include "student.h"

void stud_mod(void)
{
    char ch, opt;
    int roll, found = 0;
    float per;
    char name[30];

    STUDENT *temp;

    printf("\nR/r : Search by Roll Number\n");
    printf("N/n : Search by Name\n");
    printf("P/p : Search by Percentage\n");

    printf("Enter Your Choice : ");
    scanf(" %c", &ch);

    temp = head;

    switch(ch)
    {
        case 'R':
        case 'r':

            printf("Enter Roll Number : ");
            scanf("%d", &roll);

            while(temp)
            {
                if(temp->roll == roll)
                {
                    found = 1;
                    break;
                }
                temp = temp->next;
            }

            if(found == 0)
            {
                printf("\nRecord Not Found.\n");
                return;
            }

            break;

        case 'N':
        case 'n':

            printf("Enter Name : ");
            scanf(" %[^\n]", name);

            while(temp)
            {
                if(strcmp(temp->name, name) == 0)
                {
                    printf("%d\t%-15s%.2f\n",
                           temp->roll,
                           temp->name,
                           temp->per);
                    found = 1;
                }
                temp = temp->next;
            }

            if(found == 0)
            {
                printf("\nRecord Not Found.\n");
                return;
            }

            printf("Enter Roll Number : ");
            scanf("%d", &roll);

            temp = head;
            while(temp)
            {
                if(temp->roll == roll)
                    break;

                temp = temp->next;
            }

            break;

        case 'P':
        case 'p':

            printf("Enter Percentage : ");
            scanf("%f", &per);

            while(temp)
            {
                if(temp->per == per)
                {
                    printf("%d\t%-15s%.2f\n",
                           temp->roll,
                           temp->name,
                           temp->per);
                    found = 1;
                }
                temp = temp->next;
            }

            if(found == 0)
            {
                printf("\nRecord Not Found.\n");
                return;
            }

            printf("Enter Roll Number : ");
            scanf("%d", &roll);

            temp = head;
            while(temp)
            {
                if(temp->roll == roll)
                    break;

                temp = temp->next;
            }

            break;

        default:
            printf("\nInvalid Choice.\n");
            return;
    }

    printf("\nN/n : Modify Name\n");
    printf("P/p : Modify Percentage\n");

    printf("Enter Your Choice : ");
    scanf(" %c", &opt);

    switch(opt)
    {
        case 'N':
        case 'n':

            printf("Enter New Name : ");
            scanf(" %[^\n]", temp->name);

            printf("\nName Updated Successfully.\n");
            break;

        case 'P':
        case 'p':

            printf("Enter New Percentage : ");
            scanf("%f", &temp->per);

            printf("\nPercentage Updated Successfully.\n");
            break;

        default:
            printf("\nInvalid Choice.\n");
    }
}
