#include <stdio.h>

// structure for date
struct Date {
    int day;
    int month;
    int year;
};

// structure for employee 
struct Employee {
    char name[50];
    int id;
    struct Date joindate;   // nested structure
};

int main() {

    struct Employee e;

     // taking input
    printf("Enter employee name:  ");
    scanf("%s"  ,&e.name);

    printf("Enter employee id: ");
    scanf("%d" , &e.id);

    printf("Enter joining date (day month year) : ");
    scanf("%d %d %d" ,&e.joindate.day, &e.joindate.month, &e.joindate.year);

         // printing details
      printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n" , e.id);
    printf("Joining Date: %d/%d/%d\n" ,
           e.joindate.day,
           e.joindate.month ,
           e.joindate.year);

    return 0;
}
