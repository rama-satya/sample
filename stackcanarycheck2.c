#include <stdio.h>
#define BUFSIZE 4
void vuln1()
{
            puts("IN VULN1:Enter text");
            char buf[BUFSIZE];
                    gets(buf);
                        puts(buf);
                            fflush(stdout);
}
void vuln2()
{
            puts("IN VULN2:Enter text");
                char buf[BUFSIZE];
                    gets(buf);
                        puts(buf);
                            fflush(stdout);
}
void vuln3()
{
            puts("IN VULN3:Enter text");
                char buf[BUFSIZE];
                    gets(buf);
                        puts(buf);
                            fflush(stdout);
}
int main(int argc, char **argv)
{
            vuln1();
            vuln2();
            vuln3();
            
                return 0;
}