#include <stdio.h>

int reqPasswd(char *passwd)
{
    if(passwd[0] == 'g')
    {
        if(passwd[1] == 'u')
        {
            if(passwd[2] == 'e')
            {
                if(passwd[3] == 's')
                {
                    if(passwd[4] == 's')
                    {
                        if(passwd[5] == '_')
                        {
                            if(passwd[6] == 'm')
                            {
                                if(passwd[7] == 'e')
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } 
    return 0;
}

int main(int argc, char**argv)
{
    char readbuff[64];

    printf("Enter your password:\n");
    scanf("%64s", readbuff);

    if(reqPasswd(readbuff))
    {
        printf("Congratulations!!! You found Flag-1");
    }
    else
    {
        printf("Try harder");
    }
    
}