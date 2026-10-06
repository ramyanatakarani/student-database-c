#include "student.h"
void stud_delall(st **ptr)
{
        if(*ptr==0)
        {
                printf(RED"No records found\n"RESET);
                return;
        }
        st *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                free(del);
                del=*ptr;
        }
        printf(GREEN"All student records deleted successfully\n"RESET);
}
