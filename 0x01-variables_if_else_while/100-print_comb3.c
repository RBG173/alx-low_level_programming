#include <stdio.h>

int main() {
    // Print all possible different combinations of two digits
    for (int i = 0; i <= 8; i++) {
        for (int j = i + 1; j <= 9; j++) {
            // Convert the digits to characters
            char digit1 = i + '0';
            char digit2 = j + '0';
            
            // Print the combination in ascending order
            putchar(digit1);
            putchar(digit2);
            
            // Print ", " unless it's the last combination
            if (i != 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    return 0;
}
