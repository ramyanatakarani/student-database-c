#include "student.h"
void stud_add(st **ptr)
{
                int rollno=1;
                st *temp=*ptr;
                while(temp)
                {
                                if(temp->rollno == rollno)
                                                rollno++;
                                else if(temp->rollno > rollno)
                                                break;
                                temp=temp->next;
                }
                st *new;
                new=malloc(sizeof(st));
                printf(WHITE"Enter student name and percentage:\n"RESET);
                scanf("%s%f",new->name,&new->percentage);
                new->rollno=rollno;
                temp=*ptr;
                st *prev=0;
                while(temp!=0 && (temp->rollno < new->rollno))
                {
                                prev=temp;
                                temp=temp->next;
                }
                new->next=temp;
                if(prev==0)
                                *ptr=new;
                else
                                prev->next=new;
}
