

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#define RINGING_DURATION 3
#define DOT_COUNT 10


typedef struct
{

    char name[20];
    int age;
    char grade;
    int id;
    char phone[11];

} student;

extern int nofstudent;
extern student school[1000];

void string_scan(char*arr,int max_size);
int string_index(char *arr);
void convertToSmall(char arr[]);
int compare_name (char *arr1,char *arr2);
void print_school(student *arr,int size);
void add_student (void);
void scan_phone(char*phone);
void edit_studentByName(void);
void edit_studentById(void);
void print_studentByName(void);
void print_studentByID(void);
void copy_name(char*name1,char*name2);
void copy_phone(char*phone1,char*phone2);
void remove_studentByName(void);
void remove_studentByID(void);
void call_studentByName(void);
void call_studentByID(void);
void school_dataBase(void);


















