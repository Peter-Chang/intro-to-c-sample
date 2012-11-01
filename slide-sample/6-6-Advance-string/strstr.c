#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "永和有永和路，中和也有永和路";
    char target[] = "中和";
    char *str_ptr;
     
    printf("本來的字串：%s\n\n", source); 
    str_ptr = strstr(source, target);
    printf("第一次「%s」出現的位置：%s\n", target, str_ptr);
     
    return 0;   
}