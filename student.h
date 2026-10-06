#include <stdio.h>
#include <stdlib.h>
#include<string.h>


#define RESET      "\033[0m"
#define RED        "\033[1;31m"
#define GREEN      "\033[1;32m"
#define YELLOW     "\033[1;33m"
#define BLUE       "\033[1;34m"
#define MAGENTA    "\033[1;35m"
#define CYAN       "\033[1;36m"
#define WHITE      "\033[1;37m"


typedef struct student
{
                int rollno;
                char name[50];
                float percentage;
                struct student *next;
}st;
void stud_add(st **);
void stud_del(st **);
void stud_show(st *);
void stud_mod(st *);
void stud_save(st *);
void stud_delall(st**);
void stud_sort(st **);
void stud_read(st **);
void stud_rev(st **);
