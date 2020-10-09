#include<stdio.h>

int main(){
int arr[10]= {1,2,4,5};
int n=4;
int j=n;
int k=2;
int item=3;

while(j>=k){
    arr[j+1]=arr[j];
    j--;
}
arr[k]=item;
n=n+1;

int i=0;
while(i<=4){
    printf("%d\n",arr[i]);
    i++;
}
return 0;
}
