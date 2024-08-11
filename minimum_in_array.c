#include <stdio.h>

int main() {
int myArr[100],n;
printf("enter your array size : ");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("enter your array item : ");
    scanf("%d",&myArr[i]);
}
int min = myArr[0];
for (int i = 1; i < n; i++)
{
    if(myArr[i]<min) min = myArr[i];
}
printf("Minimum : %d",min);

 
 return 0;
}