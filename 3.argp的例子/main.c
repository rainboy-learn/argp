#include <stdio.h>
#include <argp.h>
#include <sysexits.h>

//全局变量
const char * argp_program_version = "v1.0";
const char * argp_program_bug_address="rainboylvx@qq.com";


//参数选项
struct argp_option my_argp_opts[] = {
    {"pstr",1,0,0,"pstr document",0},
    {"pint",2,"pint need int",0,"pint document",0},
    {0}
};

//解析函数
error_t parser (int key, char *arg, struct argp_state *state){
    switch(key){
        case 1:
            printf("have pstr:\n");
            printf("\t\t%s\n",arg);
            break;
        case 2:
            printf("have pint:\n");
            printf("\t\t%s\n",arg);
            break;
    }
    return 0;
}

struct argp myargp  = {
    my_argp_opts,
    parser,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

int main(int argc,char ** argv){
    error_t ret = argp_parse (&myargp, argc, argv, ARGP_IN_ORDER
, 0, NULL);
    printf("ret = %d\n",ret);
    if( ret )
    return 0;
}

