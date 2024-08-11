#include <stdio.h>

int main() {
int myArray[5],n;
printf("enter your array size : ");
scanf("%d",&n);
 
for (int i = 0; i < n; i++)
{
    printf("enter your array item : ");
    scanf("%d",&myArray[i]);
}

int max;
max = myArray[0];
for (int i = 1; i <5; i++)
{
    if(max<myArray[i]) max = myArray[i];
    
}
printf("Maximum: %d\n",max); 
 
 return 0;
}