#include <stdio.h>
int main ()
{
    int age;
    printf ("Enter your age:");
    scanf ("%d",&age);
    if (age>=18){
        printf("You are a voter");
    }else {
    printf ("You are not a voter yet");
    }
    return 0;

}
