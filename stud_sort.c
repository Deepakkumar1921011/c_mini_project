#include "student.h"

void stud_sort(void)
{
    char ch;
    STUDENT *p1,*p2;
    int swapped;

    if(head==NULL || head->next==NULL)
    {
        printf("\nNot enough records to sort.\n");
        return;
    }

    printf("\nN/n : Sort by Name\n");
    printf("P/p : Sort by Percentage\n");

    printf("Enter Your Choice : ");
    scanf(" %c",&ch);

    switch(ch)
    {
        case 'N':
        case 'n':

            do
            {
                swapped=0;

                p1=head;

                while(p1->next)
                {
                    if(strcmp(p1->name,p1->next->name)>0)
                    {
                        int r;
                        float per;
                        char name[30];

                        r=p1->roll;
                        p1->roll=p1->next->roll;
                        p1->next->roll=r;

                        strcpy(name,p1->name);
                        strcpy(p1->name,p1->next->name);
                        strcpy(p1->next->name,name);

                        per=p1->per;
                        p1->per=p1->next->per;
                        p1->next->per=per;

                        swapped=1;
                    }

                    p1=p1->next;
                }

            }while(swapped);

            printf("\nSorted by Name Successfully.\n");
            break;

        case 'P':
        case 'p':

            do
            {
                swapped=0;

                p1=head;

                while(p1->next)
                {
                    if(p1->per > p1->next->per)
                    {
                        int r;
                        float per;
                        char name[30];

                        r=p1->roll;
                        p1->roll=p1->next->roll;
                        p1->next->roll=r;

                        strcpy(name,p1->name);
                        strcpy(p1->name,p1->next->name);
                        strcpy(p1->next->name,name);

                        per=p1->per;
                        p1->per=p1->next->per;
                        p1->next->per=per;

                        swapped=1;
                    }

                    p1=p1->next;
                }

            }while(swapped);

            printf("\nSorted by Percentage Successfully.\n");
            break;

        default:
            printf("\nInvalid Choice.\n");
    }
}
