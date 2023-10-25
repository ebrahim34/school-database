

#include "school.h"

void school_dataBase(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf("\n");
    printf("                                        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("                                        %c  ",186);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("*  School Database *   ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf("%c\n",186);
    printf("                                        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void string_scan(char*arr,int max_size)
{
    fflush(stdin);
    for(int i=0;; i++)
    {
        scanf("%c",&arr[i]);
        if(i==(max_size-1))
        {
            arr[i]=0;
            break;

        }

        if(arr[i]=='\n')
        {
            arr[i]=0;
            break;
        }
    }
}
int string_index(char *arr)
{
    int i=0;
    for (i=0; arr[i]; i++);
    return i;

}
void convertToSmall(char arr[])
{
    for(int i=0; arr[i]; i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
            arr[i]=arr[i]-'A'+'a';

    }

}
int compare_name (char *arr1,char *arr2)
{

    convertToSmall(arr1);
    convertToSmall(arr2);
    for(int i=0; arr1[i]||arr2[i]; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return 0;

        }
    }
    return 1;




}

void print_school(student *arr,int size)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    int i=0;
    if(nofstudent==0)
    {
        system("cls");

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

        Beep(500,900);
        printf("There are no students in school yet....\n");
        return;
    }
    	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

    printf("Name              |  Age  |  Grade|  ID   |  Phone       |\n");
    printf("----------------------------------------------------------\n");
        	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

    for(i=0; i<size; i++)
    {
        printf("%-14s    |%4d   |   %-4c|  %3d  |  ",arr[i].name,arr[i].age,arr[i].grade,arr[i].id);
        for(int j=0; j<11; j++)
        {
            printf("%d",arr[i].phone[j]);

        }
        printf(" |");
        printf("\n----------------------------------------------------------\n");


    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}



void add_student (void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Adding the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Please enter name: ");
    fflush(stdin);
    string_scan(school[nofstudent].name,20);
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Adding the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


    printf("Please enter age: ");

    while(1)
    {

        fflush(stdin);


        scanf("%d",&school[nofstudent].age);
        if((school[nofstudent].age>0)&&(school[nofstudent].age<50))
        {
            break;
        }
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

        printf(" Adding the student is in progress....\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

        printf("\n******** ERROR ********\n");
        Beep(500,900);
        printf("This age is incorrect. Enter a valid age\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    }
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Adding the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED| FOREGROUND_GREEN | FOREGROUND_BLUE);


    printf("Please enter grade: ");


    while(1)
    {

        fflush(stdin);

        scanf("%c",&school[nofstudent].grade);
        if((school[nofstudent].grade>='A')&&(school[nofstudent].grade<='z'))
        {
            break;
        }
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

        printf(" Adding the student is in progress....\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

        printf("\n******** ERROR ********\n");
        Beep(500,900);
        printf("This grade is incorrect. Enter a valid grade\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }

    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Adding the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


    scan_phone(school[nofstudent].phone);
    school[nofstudent].id=nofstudent+1;
    nofstudent++;
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf("\nThe addition process was completed successfully\n");
    sleep(2);
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);





}

void scan_phone(char*phone)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    long long num;
    char r,i;
    system("cls");

    printf("enter phone: ");
    while(1)
    {
        scanf("%lld",&num);
        for( i=0; num!=0; i++)
        {
            r=num%10;
            phone[(10-i)]=r;
            num=num/10;
        }
        phone[0]=0;
        if(i!=10)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("Invalid phone. Please enter a valid phone\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        else
        {
            break;
        }
    }

}



void edit_studentByName(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,choose,flag=1;
    char word[20];
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Modifying the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's name:");
    while(flag)
    {
        string_scan(word,20);
        for(i=0; i<nofstudent; i++)
        {
            if(compare_name(school[i].name,word))
            {
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf(" Modifying the student is in progress....\n\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                printf("Choose what you want to modify\n");
                while(1)
                {
                    printf("1. Edit age\n");
                    printf("2. Edit phone\n");
                    printf("3. Edit grade\n");
                    scanf("%d",&choose);
                    if((choose==1)||(choose==2)||(choose==3))
                    {
                        break;
                    }
                    system("cls");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                    printf(" Modifying the student is in progress....\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                    printf("\n******** ERROR ********\n");
                    Beep(500,900);
                    printf("Invalid choice. Please enter a number from 1 to 3\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                }
                if(choose==1)
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                    printf(" Modifying the student is in progress....\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                    printf("Enter the new age: ");
                    scanf("%d",&school[i].age);
                                        return;

                }
                else if(choose==2)
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                    printf(" Modifying the student is in progress....\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                    printf("Enter the new phone: ");
                    scan_phone(school[i].phone);
                                        return;

                }
                else
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                    printf(" Modifying the student is in progress....\n\n");
                    printf("Enter the new grade:\n ");
                    scanf("%c",&school[i].grade);
                    return;
                }
                flag=0;
                break;



            }

        }

        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

        printf(" Modifying the student is in progress....\n\n");

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

        printf("\n******** ERROR ********\n");
        Beep(500,900);
        printf("This name does not exist in the school. Please enter the correct name\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }

}

void edit_studentById(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,choose,flag=1,id;
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Modifying the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's ID:");
    while(1)
    {
        fflush(stdin);
        scanf("%d",&id);
        if((id>0)&&(id<=nofstudent))
        {
            for(i=0; i<nofstudent; i++)
            {
                if(school[i].id==id)
                {
                    system("cls");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                    printf(" Modifying the student is in progress....\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                    printf("Choose what you want to modify\n");
                    while(1)
                    {
                        system("cls");
                        printf(" Modifying the student is in progress....\n\n");
                        printf("1. Edit age\n");
                        printf("2. Edit phone\n");
                        printf("3. Edit grade\n");
                        scanf("%d",&choose);
                        if((choose==1)||(choose==2)||(choose==3))
                        {
                            break;
                        }
                        system("cls");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                        printf(" Modifying the student is in progress....\n\n");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                        printf("\n******** ERROR ********\n");
                        Beep(500,900);
                        printf("Invalid choice. Please enter a number from 1 to 3\n\n");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                    if(choose==1)
                    {
                        system("cls");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                        printf(" Modifying the student is in progress....\n\n");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                        printf("Enter the new age: ");
                        scanf("%d",&school[i].age);
                    }
                    else if(choose==2)
                    {
                        system("cls");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                        printf(" Modifying the student is in progress....\n\n");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                        printf("Enter the new phone: ");
                        scan_phone(school[i].phone);
                    }
                    else
                    {
                        system("cls");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                        printf(" Modifying the student is in progress....\n\n");
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                        printf("Enter the new grade:\n ");
                        scanf("%c",&school[i].grade);
                    }
                    flag=0;
                    break;

                }

            }

        }
        else
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" Modifying the student is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This Id does not exist in the school. Please enter the correct ID\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        if(flag==0)
        {
            break;
        }


    }
}

void print_studentByName(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,choose,flag=1;
    char word[20];
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" printing the student's information is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's name:");
    while(flag)
    {
        string_scan(word,20);
        for(i=0; i<nofstudent; i++)
        {
            if(compare_name(school[i].name,word))
            {
                system("cls");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                printf(" printing the student's information is in progress....\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                printf("Name              |  Age  |  Grade|  ID   |  Phone       |\n");
                printf("----------------------------------------------------------\n");
                	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

                printf("%-14s    |%4d   |   %-4c|  %3d  |  ",school[i].name,school[i].age,school[i].grade,school[i].id);
                for(int j=0; j<11; j++)
                {
                    printf("%d",school[i].phone[j]);

                }
                printf(" |");
                printf("\n----------------------------------------------------------\n");

                flag=0;
                break;

            }

        }
        if(flag!=0)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" printing the student's information is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This name does not exist in the school. Please enter the correct name\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        }

    }

}

void print_studentByID(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,choose,flag=1,id;
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" printing the student's information is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's ID:");
    while(1)
    {
        fflush(stdin);
        scanf("%d",&id);
        if((id>0)&&(id<=nofstudent))
        {
            for(i=0; i<nofstudent; i++)
            {
                if(school[i].id==id)
                {

                    system("cls");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

                    printf(" printing the student's information is in progress....\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                    printf("Name              |  Age  |  Grade|  ID   |  Phone       |\n");
                    printf("----------------------------------------------------------\n");
                    	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

                    printf("%-14s    |%4d   |   %-4c|  %3d  |  ",school[i].name,school[i].age,school[i].grade,school[i].id);
                    for(int j=0; j<11; j++)
                    {
                        printf("%d",school[i].phone[j]);

                    }
                    printf(" |");
                    printf("\n----------------------------------------------------------\n");

                    flag=0;
                    break;

                }

            }

        }
        else
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" printing the student's information is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This Id does not exist in the school. Please enter the correct ID\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        if(flag==0)
        {
            break;
        }


    }

}

void copy_name(char*name1,char*name2)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i;
    for(i=0; i<20; i++)
    {
        name1[i]=name2[i];
    }



}

void copy_phone(char*phone1,char*phone2)
{
    int i;
    for(i=0; i<11; i++)
    {
        phone1[i]=phone2[i];
    }
}


void remove_studentByName(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,j=0,choose,flag=1;
    char word[20];
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Removing the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's name:");
    while(flag)
    {
        string_scan(word,20);
        for(i=0; i<nofstudent; i++)
        {
            if(compare_name(school[i].name,word))
            {
                for(j=i; j<nofstudent; j++)
                {
                    copy_name(school[j].name,school[j+1].name);
                    school[j].age=school[j+1].age;
                    school[j].grade=school[j+1].grade;
                    copy_phone(school[j].phone,school[j+1].phone);

                }
                nofstudent--;
                flag=0;
                break;

            }

        }

        if(flag!=0)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" Removing the student is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This name does not exist in the school. Please enter the correct name\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        }
    }


}


void remove_studentByID(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    int i=0,j=0,choose,flag=1,id;
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Removing the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's ID:");
    while(1)
    {
        fflush(stdin);
        scanf("%d",&id);
        if((id>0)&&(id<=nofstudent))
        {
            for(i=0; i<nofstudent; i++)
            {
                if(school[i].id==id)
                {


                    for(j=i; j<nofstudent; j++)
                    {
                        copy_name(school[j].name,school[j+1].name);
                        school[j].age=school[j+1].age;
                        school[j].grade=school[j+1].grade;
                        copy_phone(school[j].phone,school[j+1].phone);

                    }
                    nofstudent--;

                    flag=0;
                    break;

                }

            }

        }
        else
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" Removing the student is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This Id does not exist in the school. Please enter the correct ID\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        if(flag==0)
        {
            break;
        }


    }


}

void call_studentByName(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,x=0,j=0,choose,flag=1;
    char word[20];
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

    printf(" Calling the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's name:");
    while(flag)
    {
        string_scan(word,20);
        for(i=0; i<nofstudent; i++)
        {
            if(compare_name(school[i].name,word))
            {

                for(j=0; j<2; j++)
                {
                    system("cls");

                    for(x=0; x<11; x++)
                    {
                        printf("%d",school[i].phone[x]);
                    }
                    printf("\n");
                    printf("Ringing: ");
                    for (x = 0; x < DOT_COUNT; x++)
                    {
                        Beep(500,1500);

                        printf(".");
                        fflush(stdout);
                        usleep(50000);
                    }
                    sleep(2);
                    system("cls");
                }
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                printf("No answer\n");
                Beep(500,500);
                Beep(500,500);
                Beep(500,500);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                sleep(2);
                system("cls");


                flag=0;
                break;

            }

        }

        if(flag!=0)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);

            printf(" Calling the student is in progress....\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This name does not exist in the school. Please enter the correct name\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
    }


}

void call_studentByID(void)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i=0,j=0,x=0,choose,flag=1,id;
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN);
    printf(" Calling the student is in progress....\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Enter the student's ID:");
    while(1)
    {
        fflush(stdin);
        scanf("%d",&id);
        if((id>0)&&(id<=nofstudent))
        {
            for(i=0; i<nofstudent; i++)
            {
                if(school[i].id==id)
                {

                    for(j=0; j<2; j++)
                    {
                        system("cls");


                        for(x=0; x<11; x++)
                        {
                            printf("%d",school[i].phone[x]);
                        }
                        printf("\n");
                        printf("Ringing: ");
                        for (x = 0; x < DOT_COUNT; x++)
                        {
                            Beep(500,1500);

                            printf(".");
                            fflush(stdout);
                            usleep(500000);
                        }
                        sleep(RINGING_DURATION);
                        system("cls");
                    }
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

                    printf("No answer\n");
                    Beep(500,500);
                    Beep(500,500);
                    Beep(500,500);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


                    sleep(2);
                    system("cls");




                    flag=0;
                    break;

                }

            }

        }
        else
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_RED | FOREGROUND_RED);

            printf("\n******** ERROR ********\n");
            Beep(500,900);
            printf("This Id does not exist in the school. Please enter the correct ID\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        if(flag==0)
        {
            break;
        }


    }

}

