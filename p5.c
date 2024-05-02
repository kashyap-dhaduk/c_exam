#include<stdio.h>
struct house {
    int room_quantity;
    int established_year;
    char city[100];
};
main(){
    int no;
    printf("Enter number of house :");
    scanf("%d", &no);
    struct house a[no];
    for(int i=0; i<no; i++){
        printf("Enter number of room :");
        scanf("%d", &a[i].room_quantity);
        printf("Enter year of establishment : ");
        scanf("%d", &a[i].established_year);
        printf("Enter City : ");
        fflush(stdin);
        gets(a[i].city);
        printf("\n");
    } 
    printf("---------");
    for(int i=0; i<no; i++){
        printf("House No : %d \n",i);
        printf("Room Quantity : %d\n", a[i].room_quantity);
        printf("Year of Establishment : %d\n", a[i].established_year);
        printf("City : %s\n", a[i].city);
        printf("\n");
    }

}