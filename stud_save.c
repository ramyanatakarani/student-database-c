#include "student.h"
void stud_save(st *ptr)
{
        st *temp=ptr;
        FILE *fp=fopen("student.dat","w");
        if(ptr==0)
        {
                printf(RED"No records found\n"RESET);
                return;
        }
        while(temp)
        {
                fprintf(fp,"%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                temp=temp->next;
        }
        printf(GREEN"student records successfully stored into file\n"RESET);
        fclose(fp);
}
