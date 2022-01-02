#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Choose the download options:\n");
    printf("[1] MP3 Audio only\n");
    printf("[2] Flac Audio only\n");
    int option=0;
    scanf("%d", &option);
    if(option == 1){
        audiomp3();
    }else if(option == 2){
        audioflac();
    }else{
        printf("No option selected");
        return 0;
    }
    return 0;
}

void audiomp3(){
    char URL[100];  //100 was chossen for URL with &list= as they tend to be around 85-90 characters
    char execcmd[200]= " .\\youtube-dl.exe --ffmpeg-location .\\ffmpeg.exe --no-playlist --embed-thumbnail --audio-format mp3 -x ";    //base command
    int execStartint=102;
    printf("Enter URL:");
    scanf("%100s", URL);
    for(int i = 0; i<=100; i++){
       execcmd[execStartint+i]=URL[i];
    }
    system(execcmd);
}

void audioflac(){
    char URL[100];  //100 was chossen for URL with &list= as they tend to be around 85-90 characters
    char execcmd[200]= ".\\youtube-dl.exe --ffmpeg-location .\\ffmpeg.exe --no-playlist --embed-thumbnail --audio-format flac -x ";    //base command
    int execStartint=103;
    printf("Enter URL:");
    scanf("%100s", URL);
    for(int i = 0; i<=100; i++){
       execcmd[execStartint+i]=URL[i];
    }
    system(execcmd);
}
