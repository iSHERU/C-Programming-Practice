#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);

    int hours = tm_struct->tm_hour, minutes = tm_struct->tm_min, seconds = tm_struct->tm_sec;

    while (1)
    {
        system("cls");
        printf("\n\n\n\n \t\t\t\t%02d: %02d: %02d", hours, minutes, seconds);
        seconds++;

        if (seconds == 60)
        {
            minutes++;
            seconds = 0;
        }

        if (minutes == 60)
        {
            hours++;
            minutes = 0;
        }

        if (hours == 24)
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        sleep(1);
    }
    return 0;
}