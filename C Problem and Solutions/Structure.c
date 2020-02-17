#include<stdio.h>
struct student
{
    char name[30];
    int id;
    char sec[5];
    char dep[50];
};
int main()
{
    int i,n;
    struct student info[1000];
    printf("Enter student number:\n");
    scanf("%d",&n);
    printf("Enter Student Information:\n");
    for(i=0; i<n; i++)
    {
 
        scanf("%s",&info[i].name);
        scanf("%d",&info[i].id);
        scanf("%s",&info[i].sec);
        scanf("%s",&info[i].dep);
    }
    printf("Student Informations are:\n");
    for(i=0; i<n; i++)
    {
        printf("Name : %s\n",info[i].name);
        printf("ID : %d\n",info[i].id);
        printf("Section : %s\n",info[i].sec);
        printf("Department : %s\n",info[i].dep);
        printf("\n");
    }
    return 0;
}