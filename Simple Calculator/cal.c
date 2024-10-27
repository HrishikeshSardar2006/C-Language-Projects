
#include <stdio.h>

int main()
{
    char op;
    float a, b;
    printf("Enter The First Number\n");
    scanf("%d", &a);
    printf("Enter The Operator(+, -, *, /)\n");
    scanf(" %c", &op);
    printf("Enter The Second Number\n");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        printf("%f + %f = %f", a, b, a + b);
        break;
    case '-':
        printf("%f - %f = %f", a, b, a - b);
        break;
    case '*':
        printf("%f * %f = %f", a, b, a * b);
        break;
    case '/':
        printf("%f / %f = %f", a, b, a / b);
        break;
    default:
        break;
    }
    return 0;
}
