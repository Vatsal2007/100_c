#include <stdio.h>

// simple struct
struct book {
    char title[40] ;
    int pages;
    float price;
};

int main() {

    struct book b;        // normal struct variable
    struct book *ptr;        //pointer to struct

    ptr = &b;                   //pointer stores add of b

    // modfying data using -> 
    printf("enter title : ");
    scanf("%s",ptr->title );    // using -> because ptr is a pointer

    printf("enter pages : ");
    scanf("%d",&ptr->pages ) ;

    printf("enter price : ");
    scanf("%f",&ptr->price );

    //displaying data
    printf("\n--- book details ---\n");
    printf("title : %s\n", ptr->title );
    printf("pages : %d\n" ,ptr->pages );
    printf("price : %.2f\n" , ptr->price );

    return 0 ;
}
