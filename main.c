#include <stdio.h>
#include <stdlib.h>

int main()
{
    char URL[100];
    char execcmd[200]= ".\\youtube-dl.exe --ffmpeg-location .\\ffmpeg.exe --embed-thumbnail --audio-format mp3 -x ";
    int execStartint=88;
    printf("Enter URL:");
    scanf("%100s", URL);
    for(int i = 0; i<=100; i++){
       execcmd[execStartint+i]=URL[i];
    }
    printf("%s",execcmd);
    system(execcmd);
    return 0;
}
