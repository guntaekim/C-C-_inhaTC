#include <stdio.h>

int main(){

    int base, height;
    double area;
    char choice;

    while (1)
    {
        scanf("%d %d", &base, &height);

        area = base * height / 2.0;

        printf("Triangle area = %.1f\n", area);

        printf("Continue? ");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y')
        {
            break;
        }
    }

    return 0;
}