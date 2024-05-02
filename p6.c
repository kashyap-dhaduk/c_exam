#include<stdio.h>
struct emp{
    char name[50];
    char deci[50];
};
main(){
    FILE *F;
    F=fopen("data.txt","w");
    if(F==NULL){
        printf("File doesn't exists.....\n");
    }
    int no,;
    struct employee a[1000];
    printf("Enter total number of employees's : ");
    scanf("%d", &no);
    for(int i=0; i<no; i++){
    printf("Enter no of employee : %d \n", i+1);
    printf("Enter name :");
    fflush(stdin);
    gets(a[i].name);
    printf("Enter designation :");
    fflush(stdin);
    gets(a[i].deci);
    fprintf(F, "Employee No : %d \n", i+1);
    fputs(a[i].name, F);
    fprintf(F, "\n");
    fputs(a[i].deci, F);
    fprintf(F, "\n");
    fprintf(F, "\n");

    }
    printf("Data Enteres in file  data.txt\n");
    fclose(F);
}