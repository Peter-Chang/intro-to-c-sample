#include <stdio.h>
#include <string.h>
 
int main()
{
    char source[] = "I saw a saw saw a saw";
    char target[] = " ";
    char *str_tmp;
    int i;

    str_tmp = strtok(source, target);
    printf("No.1 string：%s\n", str_tmp);

    i = 2;
    while (str_tmp != NULL) {
        str_tmp = strtok(NULL, target);
        printf("No.%d string：%s\n", i, str_tmp);
        i++;
    }
     
    return 0;   
}