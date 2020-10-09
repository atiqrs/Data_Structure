#include<stdio.h>
int main(){
int arr[10]= {1,2,3,4,5,6};
int n=5;
int k=2;
int item=arr[k];
int j;

for(j=k;j<=n-1;j++){
    arr[j]=arr[j+1];
}
n=n-1;

int i=0;
while(i<=4){
    printf("%d\n",arr[i]);
    i++;
}
return 0;
}
