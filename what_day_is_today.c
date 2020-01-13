#include <stdio.h>

int main()
{
    int year, start_week_day;
    int n;
    int month, day;
    int is_leap_year;

    scanf("%d", &year);
    scanf("%d", &start_week_day);
    scanf("%d", &n);

    is_leap_year = (year %400 == 0)?1:((year%4 == 0) && (year %100 != 0)?1:0)   ;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &month);
        scanf("%d", &day);

        switch(month) {
            case 1:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day + day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 2:
                if(day <= (28 + is_leap_year) && day > 0)
                    printf("%d ", (start_week_day + 3 + day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 3:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day + 3 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 4:
                if(day <= 30 && day > 0)
                    printf("%d ", (start_week_day + 6 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 5:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day + 1 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 6:
                if(day <= 30 && day > 0)
                    printf("%d ", (start_week_day + 4 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 7:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day + 6 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 8:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day + 2 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 9:
                if(day <= 30 && day > 0)
                    printf("%d ", (start_week_day + 5 + is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 10:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day +  is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 11:
                if(day <= 30 && day > 0)
                    printf("%d ", (start_week_day + 3 +  is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            case 12:
                if(day <= 31 && day > 0)
                    printf("%d ", (start_week_day + 5 +  is_leap_year +  day - 1) %7 );
                else
                    printf("-2 ");
                break;
            default:
                printf("-1 ");
                break;
        }
    }
    printf("\n");

    return 0;
}

