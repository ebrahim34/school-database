#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#define RINGING_DURATION 3
#define DOT_COUNT 10
#include "school.h"


student school [1000];
int nofstudent=0;


int main()

{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int choose,modify,print,call,remove;

    while(1)
    {
        school_dataBase();


        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);
        printf("\033[4m");
        printf("\nChoose what you want.\n\n");
        while(1)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf("1. Add student.\n\n");
            printf("2. Edit student.\n\n");
            printf("3. print student.\n\n");
            printf("4. print all school.\n\n");
            printf("5. Remove student.\n\n");
            printf("6. call student.\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            fflush(stdin);
            scanf("%d",&choose);
            system("cls");

            if((choose>=1)&&(choose<=6))
            {
                break;
            }
            else
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);
                printf("\n******** ERROR ********\n");
                Beep(500,900);
                printf("Invalid choice. Please enter a number from 1 to 6\n\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


            }
        }
        if(choose==1)
        {
            printf(" Adding the student is in progress....\n\n");

            add_student();
        }
        else if(choose==2)
        {
            system("cls");

            printf("Enter the student's name or ID to modify the student's information\n");

            while(1)
            {
                printf("1. Name\n");
                printf("2. ID\n");
                scanf("%d",&modify);
                system("cls");
                printf(" Modifying the student is in progress....\n\n");

                if((modify==1)||(modify==2))
                {
                    break;
                }
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                printf("\n******** ERROR ********\n");
                Beep(500,900);
                printf("Incorrect selection, press 1 or 2\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            }
            if(modify==1)
            {
                system("cls");
                printf(" Modifying the student is in progress....\n\n");
                edit_studentByName();
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf("\nThe process of modifying the student was completed successfully\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                sleep(2);
                system("cls");


            }
            else
            {
                system("cls");
                printf(" Modifying the student is in progress....\n\n");
                edit_studentById();
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf("\nThe process of modifying the student was completed successfully\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                sleep(2);
                system("cls");
            }

        }

        else if(choose==3)
        {
            system("cls");

            printf("Enter the student's name or ID to print the student's information\n");

            while(1)
            {
                printf("1. Name\n");
                printf("2. ID\n");
                scanf("%d",&print);
                if((print==1)||(print==2))
                {
                    break;
                }
                system("cls");

                printf(" printing the student's information is in progress....\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                printf("\n******** ERROR ********\n");
                Beep(500,900);
                printf("Incorrect selection, press 1 or 2\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
            if(print==1)
            {
                system("cls");

                printf(" printing the student's information is in progress....\n");
                print_studentByName();


            }
            else
            {
                system("cls");

                printf(" printing the student's information is in progress....\n");
                print_studentByID();
            }

        }
        else  if(choose==4)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" printing all students information is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            print_school(school,nofstudent);
        }
        else if(choose==5)
        {
            system("cls");


            printf("Enter the student's name or ID to remove the student\n");

            while(1)
            {
                printf("1. Name\n");
                printf("2. ID\n");
                scanf("%d",&remove);
                if((remove==1)||(remove==2))
                {
                    break;
                }
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf(" Removing the student is in progress....\n\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                printf("\n******** ERROR ********\n");
                Beep(500,900);
                printf("Incorrect selection, press 1 or 2\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
            if(remove==1)
            {
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf(" Removing the student is in progress....\n\n");
                remove_studentByName();
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf("\nThe process of deleting the student was completed successfully\n");
                sleep(2);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            }
            else
            {
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf(" Removing the student is in progress....\n\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                remove_studentByID();
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf("\nThe process of deleting the student was completed successfully\n");
                sleep(2);
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


            }

        }
        else if(choose==6)
        {
            system("cls");

            printf("Enter the student's name or ID to call the student\n");

            while(1)
            {
                printf("1. Name\n");
                printf("2. ID\n");
                fflush(stdin);
                scanf("%d",&call);
                if((call==1)||(call==2))
                {
                    break;
                }
                system("cls");
                printf(" Calling the student is in progress....\n\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                printf("\n******** ERROR ********\n");
                Beep(500,900);
                printf("Incorrect selection, press 1 or 2\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
            if(call==1)
            {
                system("cls");
                printf(" Calling the student is in progress....\n\n");
                call_studentByName();

            }
            else
            {
                system("cls");
                printf(" Calling the student is in progress....\n\n");
                call_studentByID();
            }

        }

    }

    return 0;
}


