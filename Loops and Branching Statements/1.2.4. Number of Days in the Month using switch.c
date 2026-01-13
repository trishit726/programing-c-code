//Type Content here...
#include <stdio.h>

int main() {
    int month;

    // Prompt for month number
    printf("Enter month number: ");
    scanf("%d", &month);

    // Determine number of days using switch
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month number\n");
    }

    return 0;
}

