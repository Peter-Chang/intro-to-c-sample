#include <stdio.h>
 
int main(void)
{
    char c1[20] = "He has 5 books.\n";
    char c2[10], c3[10], c4[10];
    int n;
     
    sscanf(c1, "%s%s%d%s", c2, c3, &n, c4);
    printf("%s\n", c2);
    printf("%s\n", c3);  
    printf("%d\n", n);
    printf("%s\n", c4);
    return 0;
}
