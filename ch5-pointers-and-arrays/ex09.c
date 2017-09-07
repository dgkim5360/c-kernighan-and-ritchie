#include<stdio.h>

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int main() {
  int days = day_of_year(2017, 5, 28);
  int month, day;

  printf("2017-05-28 is %dth day of year 2017.\n", days);
  days += 100;
  month_day(2017, days, &month, &day);
  printf("%dth day of year 2017 is 2017-%d-%d.\n", days, month, day);
  return 0;
}

static char daytab[2][12] = {
  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year: set day of year from month and day */
int day_of_year(int year, int month, int day) {
  char *ptab;

  ptab = (year%4 == 0 && year%100 != 0 || year%400 == 0) ? *(daytab + 1) : *(daytab);
  for (int i = 1; i < month; ptab++, i++)
    day += *ptab;
  return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday) {
  int i;
  char *ptab;

  ptab = (year%4 == 0 && year%100 != 0 || year%400 == 0) ? *(daytab + 1) : *(daytab);
  for (i = 1; yearday > *ptab; ptab++, i++)
    yearday -= *ptab;
  *pmonth = i;
  *pday = yearday;
}
