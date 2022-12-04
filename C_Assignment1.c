#include <stdio.h>

int main()
{
    int year;
    int birthYear;
    

    printf("Enter current year\n");
    scanf("%d", &year);
    printf("Enter birth year\n");
    scanf("%d", &birthYear);
    printf("Your age is : %d\n", year-birthYear);

    
    return 0;
}
