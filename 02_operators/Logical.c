#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 1;

    int d = a == c && b > a;
    int e = a == b || c == a;

     printf("%d, %d\n", d, e);
// The value of d and e will be one because of logical operators &&(and operator) and ||(Or operators)
    return 0;
}
