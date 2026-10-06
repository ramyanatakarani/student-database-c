#include "student.h"
void stud_show(st *ptr)
{
        st *temp=ptr;
        if(temp==0)
        {
                printf(RED"No records found\n"RESET);
                return;
        }
        printf(WHITE"------------------------------\n"RESET);
        printf(CYAN"Rollno    Name    percentage\n"RESET);
        printf(WHITE"------------------------------\n"RESET);
        while(temp)
        {
                printf(WHITE"   %d      %s       %f\n"RESET,temp->rollno,temp->name,temp->percentage);
                temp=temp->next;
        }
        printf(WHITE"------------------------------\n"RESET);
}
