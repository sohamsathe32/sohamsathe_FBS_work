#include<stdio.h>
void main() {
int units;
printf("enter your units");
scanf("%d",&units);
if(bill<=50) {
    printf("your bill is %d",30*units);
}  else if(bill<=150) {
    printf("your bill is %d",40*units);
} else {
    printf("your bill is %d", 50*units);
}
}
