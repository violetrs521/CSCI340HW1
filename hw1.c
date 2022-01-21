#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("error");

    }
    else{

        for(int i = 1; i < argc; i++){
            printf("%p\n", &argv[i]);

        }
    }
    return 0;
}