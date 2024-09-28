//Write a program that takes details of an employee from the user, including name, employee ID, designation, and salary. Then, print the details of the employee.
#include<stdio.h>
int main()
{
    int employee_id;
    float employee_salary;
    char Name[50];
	char employee_designation[50];
    printf("Enter the Name: ");
    scanf("%s",&Name);
    printf("Enter the employee_id: ");
    scanf("%d",&employee_id);
    printf("Enter the employee_designation: ");
    scanf("%s",&employee_designation);
    printf("Enter the employee_salary: ");
    scanf("%f",&employee_salary);
    printf(" \nEmployee details\n Name=%s\n employee_id=%d\n employee_designation=%s\n employee_salary=$%.2f\n",Name,employee_id,employee_designation,
	employee_salary);
}

