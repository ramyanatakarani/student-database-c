//Student data management using linked list data structure

#include "student.h"
int main()
{
                st *headptr=0;
                char op;
                stud_read(&headptr);
                while(1)
                {
                                printf(YELLOW"a/A : add student record\n/d/D : delete student record\n/s/S : Display the complete list\n/m/M : modify the record\n/v/V : save records to student.dat\n/l/L : delete allrecords \n/t/T : sort records\ne/E : exit\n/r/R : reverse the records\n"RESET);
                                printf(BLUE "Enter your option\n"RESET);
                                scanf(" %c",&op);
                                switch(op)
                                {
                                                case 'a':
                                                case 'A': stud_add(&headptr);   break;

                                                case 'd':
                                                case 'D': stud_del(&headptr);   break;

                                                case 's':
                                                case 'S': stud_show(headptr);   break;

                                                case 'm':
                                                case 'M': stud_mod(headptr);     break;

                                                case 'v':
                                                case 'V': stud_save(headptr);    break;

                                                case 'l':
                                                case 'L': stud_delall(&headptr); break;

                                                case 't':
                                                case 'T': stud_sort(&headptr);   break;

                                                case 'r':
                                                case 'R': stud_rev(&headptr);    break;

                                                case 'e':
                                                case 'E':
                                                {
                                                                char choice;
                                                                printf(WHITE"S/s : Save and exit\nE/e : Exit without saving\n"RESET);
                                                                scanf(" %c",&choice);
                                                                switch(choice)
                                                                {
                                                                                case 'S' :
                                                                                case 's' : stud_save(headptr);
                                                                                           stud_delall(&headptr);
                                                                                           exit(0);

                                                                                case 'E' :
                                                                                case 'e' : stud_delall(&headptr);
                                                                                           exit(0);

                                                                                default: printf(RED"invalid option\n"RESET);
                                                                }
                                                }
                                                break;
                                }
                }
        }
        return 0;
}
