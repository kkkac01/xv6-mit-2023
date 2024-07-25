#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    if(argc != 2){
        write(1, "Usage: sleep [number]\n", 22);
        exit(1);
    }
    int n;
    n = atoi(argv[1]);
    sleep(n);
    exit(0);
}