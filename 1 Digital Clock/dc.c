#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
  {
    int hour,minute,second;
    hour = minute=second=0;
    while(1){
      system("clear");
      printf("%02d : %02d : %2d",hour,minute,second);
      fflush(stdout);
      second++;
      if(second==60)
      {
        minute+=1;
        second=0;
      }
    }
  }
  return 0;
}
