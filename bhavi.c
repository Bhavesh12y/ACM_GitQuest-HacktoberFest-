#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if (original == reversed)
        return 1; // It's a palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
    
    return 0;
}
