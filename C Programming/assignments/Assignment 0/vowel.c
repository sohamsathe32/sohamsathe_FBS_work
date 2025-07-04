#include<stdio.h>
void main () {
char s;
scanf("%c",&s);
if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u') {
    printf("vowel");
} else if(s<'a'||s>'z') {
    printf("special character");
}  else {
    printf("consonent");
}
}
