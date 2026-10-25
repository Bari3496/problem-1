#include <stdio.h>

int main() {
    int age = 20;
    printf("enter your age");
    scanf("%d",&age);

    // Check if age is 18 or older
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }
    else {
        printf("You are not eligible to vote yet.\n");
    }

    return 0;
}
