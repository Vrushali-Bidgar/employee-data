#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int phone number[10];
    int salary;
 
} Employee;
 
int main()
{
    int i, n=2;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //ID
        printf("Age: ");
        scanf("%d",&employees[i].age);
        //phone mumber
        printf("Phone Number: ");
        scanf("%d",&employees[i].phone number);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
