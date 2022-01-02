#include <stdio.h>
#include <stdlib.h>

int main()
{
    char URL[100];  //100 was chossen for URL with &list= as they tend to be around 85-90 characters
    char execcmd[200]= ".\\youtube-dl.exe --ffmpeg-location .\\ffmpeg.exe --embed-thumbnail --audio-format mp3 -x ";    //base command
    int execStartint=88;    //end of the predifined command
    printf("Enter URL:");   //selfexplanitory
    scanf("%100s", URL);    //read the first 100 characters as a string into URL
    for(int i = 0; i<=100; i++)   //perform the next line 100 times with i incrementing by 1 each time
       execcmd[execStartint+i]=URL[i];
   //printf("%s",execcmd); //debugging step
    system(execcmd); //execute the command
    return 0;   //end the program
}
