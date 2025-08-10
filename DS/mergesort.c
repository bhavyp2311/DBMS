#include<stdio.h>
#define SIZE 5
void main(){
    int a[SIZE];
    int b[SIZE];
    int c[SIZE+SIZE];
    int i,j,k;
    printf("\nscan first array !!");
    for(i=0;i<SIZE;i++){
        printf("\nEnter the array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nscan second array !!");
    for(i=0;i<SIZE;i++){
        printf("\nEnter the array b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<SIZE && j<SIZE){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<SIZE){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<SIZE){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("\n soerted series !!\n");
    for(i=0;i<SIZE+SIZE;i++){
        printf("%d\t",c[i]);

    }
}