#include <stdio.h>

int main(){
    int a[100],n,i,j,temp;
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
