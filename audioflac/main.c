#include <stdio.h>
#include <stdlib.h>

int main()
{
    char URL[100];  //100 was chossen for URL with &list= as they tend to be around 85-90 characters
    char execcmd[200]= ".\\youtube-dl.exe --ffmpeg-location .\\ffmpeg.exe --no-playlist --embed-thumbnail --audio-format flac -x ";    //base command
    int execStartint=103;
    printf("Enter URL:");
    scanf("%100s", URL);
    for(int i = 0; i<=100; i++){
       execcmd[execStartint+i]=URL[i];
    }
    system(execcmd);
    return 0;
}
