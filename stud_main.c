#include "student.h"

STUDENT *head = NULL;

int main()
{
    char ch;

    stud_load();

    while(1)
    {
        printf("\n***********************************\n");
        printf("**** STUDENT RECORD MENU **********\n");
        printf("***********************************\n");

        printf("A/a : Add New Record\n");
        printf("D/d : Delete Record\n");
        printf("S/s : Show Records\n");
        printf("M/m : Modify Record\n");
        printf("V/v : Save Records\n");
        printf("T/t : Sort List\n");
        printf("E/e : Exit\n");

        printf("\nEnter Your Choice : ");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
            case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'V':
            case 'v':
                stud_save();
                printf("\nRecords Saved Successfully.\n");
                break;

            case 'T':
            case 't':
                stud_sort();
                break;

            case 'E':
            case 'e':
            {
                char c;

                printf("\nS/s : Save and Exit\n");
                printf("E/e : Exit Without Saving\n");

                printf("Enter Your Choice : ");
                scanf(" %c",&c);

                if(c=='S'||c=='s')
                {
                    stud_save();
                    printf("\nSaved Successfully.\n");
                }

                printf("\nThank You!\n");
                exit(0);
            }

            default:
                printf("\nInvalid Choice.\n");
        }
    }

    return 0;
}
