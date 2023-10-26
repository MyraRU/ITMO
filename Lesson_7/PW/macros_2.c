#include <stdio.h>
#define log_info(M,...) printf("[INFO] (%s:%d)" "M""\n",__FILE__, __LINE__, ##__VA_ARGS__);

int main(int argc, char*argv[])
{
 log_info("Start of program");
 int var = 10;

 log_info("my variable is %d", var);

 log_info("End of program0");
 return 0;
}
