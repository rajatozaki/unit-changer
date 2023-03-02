#include <stdio.h>

int main() {
    int choice;
    float value, result;

    printf("What do you want to convert?\n");
    printf("1. Mass\n");
    printf("2. Temperature\n");
    printf("3. Currency\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value to be converted: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value / 16;
            printf("%.2f oz = %.2f lb\n", value, result);
            result = value / 28.35;
            printf("%.2f g = %.2f oz\n", value, result);
            break;
        case 2:
            result = (value * 9 / 5) + 32;
            printf("%.2f C = %.2f F\n", value, result);
            result = (value - 32) * 5 / 9;
            printf("%.2f F = %.2f C\n", value, result);
            break;
        case 3:
            result = value * 0.85;
            printf("$%.2f = €%.2f\n", value, result);
            result = value * 74.11;
            printf("$%.2f = ₹%.2f\n", value, result);
            result = value * 109.80;
            printf("$%.2f = ¥%.2f\n", value, result);
            result = value * 6.36;
            printf("$%.2f = RMB%.2f\n", value, result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
