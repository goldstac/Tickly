#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "welcome.h"
void welcome() {
    char data[256];
    FILE *file = fopen("welcome.txt","r");
    while (fgets(data,sizeof(data),file)) {
        printf("%s",data);
    }
    fclose(file);
}
