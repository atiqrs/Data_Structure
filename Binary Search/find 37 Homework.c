#include<stdio.h>
int main(){
int n,i,BEG,END,mid,search;
int a[13] = {1,16,25,36,37,50,100,101,205,220,271,306,321};
n=13; search=37;
BEG=0; END=12; mid=(BEG+END)/2;

while(BEG<=END){
    if(a[mid]<search)
        BEG=mid+1;
    else if(a[mid]==search){
        printf("%d\n",search);
        break;
    }
    else
    END=mid-1;
    mid=(BEG+END)/2;
}
if(BEG>END)
    printf("Not Found in the array\n");
return 0;
}
