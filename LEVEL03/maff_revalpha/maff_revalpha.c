#include<unistd.h>

int main()
{
    char lower =  'z';
    char upper = 'Y';
    while (lower >= 'a' && upper >= 'A') {
        write(1, &lower, 1);
        write(1, &upper, 1);
        lower-=2;
        upper-=2;
       
    }
}