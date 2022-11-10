#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
//#include <dos.h>
 
int main()
{
    int total_time_left = 0;
    int seconds_left = 0;
    int minutes_left = 0;
    int hours_left = 0;
    
    printf("How long of a timer would you like to set? (In seconds)  ");
    scanf("%i",&total_time_left);
    
    hours_left = total_time_left/3600;
    minutes_left = (total_time_left-(hours_left*3600))/60;
    seconds_left = (total_time_left-(hours_left*3600))%60;

    while(total_time_left >= 0)
    {
        system("clear");
        printf("%i : %i : %i ",hours_left,minutes_left,seconds_left);
        fflush(stdout);

         if(seconds_left==0 && minutes_left>0 && hours_left==0){
            minutes_left--;
            seconds_left = 60;
        }

        else if(hours_left>0 && minutes_left==0 && seconds_left==0 ){
            hours_left-=1;
            minutes_left=59;
            seconds_left = 60;
        }
        else if(hours_left>0 && minutes_left>0 && seconds_left==0){
            hours_left--;
            minutes_left--;
            seconds_left = 60;
        }

        sleep(1);
        seconds_left--;
        total_time_left--;
    }

    return 0; 
}