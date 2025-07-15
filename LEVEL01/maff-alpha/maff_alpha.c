 
// #include<unistd.h>
// int main(){
   
//     write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
//     return 0;
// }
#include <unistd.h>

int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        if ((c - 'a') % 2 == 0)
            write(1, &c, 1); 
        else
        {
            char upper = c - 32; // conversion en majuscule
            write(1, &upper, 1);
        }
        c++;
    }
    write(1, "\n", 1);
    return 0;
}
