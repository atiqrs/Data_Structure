#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(){
    int i,n,item;
    //Input Section
    printf("Enter how many number you want to sort: ");
    scanf("%d",&n);
    printf("Enter %d number\'s\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    //Bubble Sort
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //Output Section (Traversing)
    printf("\nYour sorted number shorted numbers:");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);
    return 0;
}
