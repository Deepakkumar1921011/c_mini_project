#include "student.h"

void stud_save(void)
{
    FILE *fp;
    STUDENT *temp;

    fp = fopen("student.dat", "wb");

    if(fp == NULL)
    {
        printf("\nCannot Open File.\n");
        return;
    }

    temp = head;

    while(temp)
    {
        fwrite(temp, sizeof(STUDENT), 1, fp);
        temp = temp->next;
    }

    fclose(fp);

    printf("\nRecords Saved Successfully.\n");
}

void stud_load(void)
{
    FILE *fp;
    STUDENT *newnode, *temp;

    fp = fopen("student.dat", "rb");

    if(fp == NULL)
        return;

    while(1)
    {
        newnode = (STUDENT *)malloc(sizeof(STUDENT));

        if(fread(newnode, sizeof(STUDENT), 1, fp) != 1)
        {
            free(newnode);
            break;
        }

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next)
                temp = temp->next;

            temp->next = newnode;
        }
    }

    fclose(fp);
}

 
