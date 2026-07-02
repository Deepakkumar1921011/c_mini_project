#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int roll;
    char name[30];
    float per;
    struct student *next;
}STUDENT;

extern STUDENT *head;


void stud_add(void);
void stud_del(void);
void stud_show(void);
void stud_mod(void);
void stud_save(void);
void stud_load(void);
void stud_sort(void);

int get_roll(void);

#endif
