#include "student.h"

void stud_mod(st *ptr)
{
    st *temp=ptr;
    char op;
    int rollno,c=0;
    char name[20],new_name[20];
    float per,new_per;
    if(ptr==0)
    {
        printf(RED"No records found\n"RESET);
        return;
    }
    printf(WHITE"R/r : Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n"RESET);
    scanf(" %c",&op);
    switch(op)
    {
        case 'R':
        case 'r': printf(MAGENTA"Enter rollno to modify name and percentage\n"RESET);
                  scanf("%d",&rollno);
                  while(temp)
                  {
                      if(temp->rollno == rollno)
                      {
                          printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                          printf(MAGENTA"Enter new name and percentage\n"RESET);
                          scanf("%s%f",new_name,&new_per);
                          strcpy(temp->name,new_name);
                          temp->percentage=new_per;
                          printf(GREEN"Record modified successfully\n"RESET);
                          return;
                      }
                      temp=temp->next;
                  }
                  printf(RED"rollno not found\n"RESET);
                  break;

        case 'N':
        case 'n': printf(MAGENTA"Enter name to modify the record\n"RESET);
                  scanf("%s",name);
                  temp=ptr;
                  while(temp)
                  {
                      if(strcmp(temp->name,name)==0)
                          c++;
                      temp=temp->next;
                  }
                  if(c==0)
                  {
                      printf(RED"Name not found\n"RESET);
                      return;
                  }
                  else if(c==1)
                  {
                      temp=ptr;
                      while(temp)
                      {
                          if(strcmp(temp->name,name)==0)
                          {
                              printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                              printf(MAGENTA"Enter newname and percentage\n"RESET);
                              scanf("%s%f",new_name,&new_per);
                              strcpy(temp->name,new_name);
                              temp->percentage=new_per;
                              printf(GREEN"Record modified successfully\n"RESET);
                              return;
                          }
                          temp=temp->next;
                      }
                  }
                  else if(c>1)
                  {
                      printf(WHITE"***Name found multiple times***\n"RESET);
                      temp=ptr;
                      while(temp)
                      {
                          if(strcmp(temp->name,name)==0)
                              printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                          temp=temp->next;
                      }
                      printf(MAGENTA"Enter rollno to modify record\n"RESET);
                      scanf("%d",&rollno);
                      temp=ptr;
                      while(temp)
                      {
                          if(temp->rollno == rollno)
                          {
                              printf(MAGENTA"Enter new name and percentage\n"RESET);
                              scanf("%s%f",new_name,&new_per);
                              strcpy(temp->name,new_name);
                              temp->percentage=new_per;
                              printf(GREEN"Record modified successfully\n"RESET);
                              return;
                          }
                          temp=temp->next;
                      }
                      printf(RED"rollno not found\n"RESET);
                  }
                  break;

        case 'P':
        case 'p': printf(MAGENTA"Enter percentage to modify record\n"RESET);
                  scanf("%f",&per);
                  temp=ptr;
                  c=0;
                  while(temp)
                  {
                      if(temp->percentage == per)
                          c++;
                      temp=temp->next;
                  }
                  if(c==0)
                  {
                      printf(RED"percentage not found\n"RESET);
                      return;
                  }
                  else if(c==1)
                  {
                      temp=ptr;
                      while(temp)
                      {
                          if(temp->percentage == per)
                          {
                              printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                              printf(MAGENTA"Enter newname and percentage\n"RESET);
                              scanf("%s%f",new_name,&new_per);
                              strcpy(temp->name,new_name);
                              temp->percentage=new_per;
                              printf(GREEN"Record modified successfully\n"RESET);
                              return;
                          }
                          temp=temp->next;
                      }
                  }
                  else if(c>1)
                  {
                      printf(WHITE"***Percentage found multiple times***\n"RESET);
                      temp=ptr;
                      while(temp)
                      {
                          if(temp->percentage == per)
                              printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                          temp=temp->next;
                      }
                      printf(MAGENTA"Enter rollno to modify record\n"RESET);
                      scanf("%d",&rollno);
                      temp=ptr;
                      while(temp)
                      {
                          if(temp->rollno == rollno)
                          {
                              printf(MAGENTA"Enter new name and percentage\n"RESET);
                              scanf("%s%f",new_name,&new_per);
                              strcpy(temp->name,new_name);
                              temp->percentage=new_per;
                              printf(GREEN"Record modified successfully\n"RESET);
                              return;
                          }
                          temp=temp->next;
                      }
                      printf(RED"rollno not found\n"RESET);
                  }
                  break;

        default: printf(RED"Invalid option\n"RESET);
    }
}
