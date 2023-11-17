#include<stdio.h>

int note;
int main()
{
printf("enter your note");
scanf("%d", &note);

if(note>45)
    printf("You re succesful");
else
    printf("You failed");

return(0);
}
