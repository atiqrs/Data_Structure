#include <stdio.h>
int main(){
int i,n,high,second;

//input size of array and data input in array
scanf("%d",&n);
int num[n];
for (i = 0; i<n; i++){
scanf("%d", &num[i]);
}

high= num[0];
second = num[0];

//finding highest number from array
for(i=0;i<n; i++){
if (high<num[i])
high=num[i];
}

//finding second highest number from array
for (i=0; i<n; i++){
if(second<num[i])
{
if(num[i]==high)
break;
else
second = num[i];
}
}

//print second largest number from array
printf("%d",second);
return 0;
}