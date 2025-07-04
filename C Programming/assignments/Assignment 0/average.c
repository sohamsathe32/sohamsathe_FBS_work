#include<stdio.h>
#include<conio.h>
void main () {
int n,sum=0;
printf("enter size of array");
scanf("%d",&n);
float arr[n];
printf("enter numbers");
for(int i=0;i<n;i++) {
    scanf("%f",&arr[i]);
    sum=sum+arr[i];
}
printf("average is = %d",sum/n);


}
