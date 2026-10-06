#include "student.h"
void stud_sort(st **ptr)
{
        if(*ptr==0)
        {
                printf(RED"No records found\n"RESET);
                return;
        }
        char op;
        printf(WHITE"N/n : Sort with name\nP/p : Sort with percentage\n"RESET);
        scanf(" %c",&op);
        st *p1=*ptr,*p2,*t,*temp=*ptr;
        int i,j,c=0;
        while(temp)
        {
                c++;
                temp=temp->next;
        }

        switch(op)
        {
                case 'N':
                case 'n': for(i=0 ; i<c-1 ; i++)
                          {
                                p2=p1->next;
                                for(j=0 ; j<c-1-i ; j++)
                                {
                                        if(strcmp(p1->name,p2->name)>0)
                                        {
                                                t.rollno = p1->rollno;
                                                strcpy(t.name,p1->name);
                                                t.percentage = p1->percentage;

                                                p1->rollno = p2->rollno;
                                                strcpy(p1->name,p2->name);
                                                p1->percentage = p2->percentage;

                                                p2->rollno = t.rollno;
                                                strcpy(p2->name,t.name);
                                                p2->percentage = t.percentage;
                                        }
                                        p2=p2->next;
                                }
                                p1=p1->next;
                          }
                          printf(GREEN"student data sorted successfully according to name\n"RESET);
                          break;

                case 'P':
                case 'p': for(i=0 ; i<c-1 ; i++)
                          {
                                p2=p1->next;
                                for(j=0 ; j<c-1-i ; j++)
                                {
                                        if(p1->percentage < p2->percentage)
                                        {
                                                t.rollno = p1->rollno;
                                                strcpy(t.name,p1->name);
                                                t.percentage = p1->percentage;

                                                p1->rollno = p2->rollno;
                                                strcpy(p1->name,p2->name);
                                                p1->percentage = p2->percentage;

                                                p2->rollno = t.rollno;
                                                strcpy(p2->name,t.name);
                                                p2->percentage = t.percentage;
                                        }
                                        p2=p2->next;
                                }
                                p1=p1->next;
                          }
                          printf(GREEN"student data sorted successfully according to percentage\n"RESET);
                          break;
        }
}
