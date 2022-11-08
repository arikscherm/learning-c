#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
 
int main()
{
    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);
    int hour = current_time->tm_hour;
    int minute = current_time->tm_min;
    int second = current_time->tm_sec;

    while(1)
    {
        system("clear");
        printf("%d : %d : %d ",hour,minute,second);
        fflush(stdout);

        second++;

        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }

        sleep(1);
    }
 
    return 0; 

}