#include<stdio.h>
#include<stdlib.h>

int check_date(int day, int month, int year) {
    int max_day = 31; 

    if (year < 1900 || year > 2100 || month < 1 || month > 12)
        return 0;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        max_day = 30;

    if (month == 2) {
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
            max_day = 29;
        else
            max_day = 28;
    }

    return day > 0 && day <= max_day;
}

int main() {
    float fare;
    int c_day, c_month, c_year, j_day, j_month, j_year;
    float refund;


    scanf("%f", &fare);


    scanf("%d/%d/%d", &c_day, &c_month, &c_year);


    scanf("%d/%d/%d", &j_day, &j_month, &j_year);

    if (!check_date(c_day, c_month, c_year) || !check_date(j_day, j_month, j_year)) {
        printf("INVALID-DATE\n");
        return 0;
    }

    int diff = j_day - c_day;

    if (diff > 2)
        refund = fare * 0.75;
    else if (diff >=1 && diff <=2)
        refund = fare * 0.5;
    else
        refund = 0;

    printf("%.2f\n%.2f\n", fare, refund);

    return 0;
}
