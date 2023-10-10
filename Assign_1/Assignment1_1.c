#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate()
{
    int day = 22;
    int month = 9;
    int year = 2023;
    printf("Date is %d-%d-%d \n", day, month, year);
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the day= ");
    scanf("%d", &ptrDate->day);
    printf("Enter the month = ");
    scanf("%d", &ptrDate->month);
    printf("Enter the year = ");
    scanf("%d", &ptrDate->year);
}
void printDateOnConsole(struct Date ptrDate)
{
    printf("Date is %d-%d-%d \n", ptrDate.day, ptrDate.month, ptrDate.year);
}

int main()
{
    struct Date D1;
    initDate();
    acceptDateFromConsole(&D1);
    printDateOnConsole(D1);
    return 0;
}