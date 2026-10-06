#include "student.h"
void stud_rev(st **ptr)
{
        if(*ptr==0)
        {
                printf(RED"No records found\n"RESET);
                return;
        }
        int i,c=0;
        st *temp=*ptr,**a;
        while(temp)
        {
                c++;
                temp=temp->next;
        }
        temp=*ptr;
        if(c>1)
        {
                a=malloc(sizeof(st*)*c);
                for(i=0 ; i<c ; i++)
                {
                        a[i]=temp;
                        temp=temp->next;
                }
                for(i=c-1 ; i>0 ; i--)
                        a[i]->next=a[i-1];
                a[0]->next=0;
                *ptr=a[c-1];
        }
        printf(GREEN"students records successfully reversed\n"RESET);
}
