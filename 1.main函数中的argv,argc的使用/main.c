#include <stdio.h>

int main(int argc,char **argv){

    printf("参数内容如下:\n");
    printf("    参数个数: %d\n",argc);
    int i;
    for( i= 0;i< argc;i++){
        printf("    参数%d: %s\n",i,argv[i]);
    }
    return 0;
}

