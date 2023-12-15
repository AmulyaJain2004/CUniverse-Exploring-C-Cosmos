#include <stdio.h>
int main()
{
    FILE *fp;
    char ch; 
    fp =fopen("a_hello_world.txt", "r");
    while(1)
    {
        ch = fgetc(fp);
        if (ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
