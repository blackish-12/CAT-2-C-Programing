//c structure

#include <stdio.h>

#include <string.h>

struct Employee {

       char name[25] = John Doe;

       int id = 12345;

       char department[20] = Human Resources;

       float salary = 55000.50;

       char email [50] = john.doe@company.com;

};



int main() {

   //struct Employee

  struct Employee1;

printf("Enter Employee Name:");

scanf("%s",&Employee1.name):

printf("Enter Employee ID:");

scanf("%d",&Employee1.id);

printf("Enter Department:");

scanf("%s",&Employee1.department);

printf("Enter Salary:");

scanf("%f",&Employee1.salary);

printf("Enter Email:");

scanf("%s",&Employee1.email);

//print employee details

/*

printf("name:%s",Employee1.name);

printf("id:%d\n",Employee1.id);

printf("department:%s",Employee1.department);

printf("salary:%f",Employee1.salary);

printf("email:%s",Employee1.email);

*/

return 0;

}