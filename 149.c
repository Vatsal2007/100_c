#include <stdio.h>
#include <stdlib.h>   //for malloc()

// making a struct for employee
struct emp {
    char name[30];   //employee name
    int id;          // employee id
    float salary;    //employee salary
};

int main() {

       // makig pointer for struct
    struct emp *e ;

    //allocate memory for one structure
    e = (struct emp*) malloc( sizeof(struct emp) ) ;

    if(e == NULL){
        printf("memory not given");
        return 0 ;
    } 

//taking input
    printf("enter name : ");
    scanf("%s",e->name);      

    printf("enter id : ");
    scanf("%d", &e->id);

    printf("enter salary : ");
    scanf("%f" , &e->salary);

    // printing details
    printf("\n--- employee details ---\n");
    printf("name   : %s\n", e->name);
    printf("id     : %d\n", e->id);
    printf("salary : %.2f\n", e->salary);

      //free memory after use
    free(e);

    return 0;
}
