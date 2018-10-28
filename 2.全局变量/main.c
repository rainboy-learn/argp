#include <stdio.h>
#include <argp.h>
const char * argp_program_version = "version 2.33";

const char * argp_program_bug_address = "Bug report to :rainboylvx@qq.com";
int main(int argc,char ** argv){
//argp_parse (const struct argp *argp, int argc, char **argv, unsigned flags, int *arg_index, void *input)
    int a = 1;
    argp_parse(NULL,argc,argv,0,&a,NULL);
    return 0;
}

