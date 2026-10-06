#include "student.h"
void stud_del(st **ptr)
{
	st *del=*ptr,*prev=0,*temp;
	char op;
	if(*ptr==0)
	{
		printf("No records found\n");
		return;
	}
	printf(WHITE"R/r : Enter roll number to delete\nN/n : Enter name to delete\n"RESET);
	scanf(" %c",&op);
	int rollno,c=0;
	char name[20];
	switch(op)
	{
		case 'R':
		case 'r': printf(MAGENTA"Enter rollno:\n"RESET);
				  scanf("%d",&rollno);
				  while(del)
				  {
					  if(del->rollno == rollno)
					  {
						  if(del==*ptr)
							  *ptr=del->next;
						  else
							  prev->next=del->next;
						  free(del);
						  printf(GREEN"rollno deleted successfully\n"RESET);
						  return;
					  }
					  prev=del;
					  del=del->next;
				  }
				  printf(RED"rollno not found\n"RESET);
				  break;

		case 'N':
		case 'n':printf(MAGENTA"Enter name\n"RESET);
				scanf("%s",name);
				temp=*ptr;
				while(temp)
				{
						if(strcmp(name,temp->name)==0)
							c++;
						temp=temp->next;
				}

				if(c==0)
				{
						printf(RED"name not found\n"RESET);
						return;
				}


				else if(c==1)
				{
					del=*ptr,prev=0;
					while(del)
					{
							if(strcmp(name,del->name)==0)
							{
									if(del==*ptr)
											*ptr=del->next;
									else
											prev->next=del->next;
									free(del);
									printf(GREEN"Name deleted successfully\n"RESET);
									return;
								}
								prev=del;
								del=del->next;
					}
				}



				else if(c>1)
				{
					temp=*ptr;
					while(temp)
					{
							if(strcmp(name,temp->name)==0)
								printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
							temp=temp->next;
					}
					printf(MAGENTA" Enter rollno to delete\n"RESET);
					scanf("%d",&rollno);
					del=*ptr,prev=0;
					while(del)
					{
							if(del->rollno == rollno)
							{
									if(del==*ptr)
											*ptr=del->next;
									else
											prev->next=del->next;
									free(del);
									printf(GREEN"rollno deleted successfully\n"RESET);
									return;
								}
								prev=del;
								del=del->next;
					}
					printf(RED"rollno not found\n"RESET);
				}
				break;
		default : printf(RED"Invalid option\n"RESET);
	}
}








