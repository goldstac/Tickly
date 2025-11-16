#include <stdio.h>
#include <string.h>
#include "welcome.h"
#include <unistd.h>
int main() {
  int sec;
  int minute;
  welcome();
  printf("\n");
 printf("      Welcome To Tickly\n");
 printf("Enter Minutes\n");
 scanf("%d",&minute);
 printf("Enter Seconds\n");
 scanf("%d",&sec);
 int calculate = minute * 60 + sec;
 sleep(calculate);
 printf("\a");
 printf("Times Up");
}
