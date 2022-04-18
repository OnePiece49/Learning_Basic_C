#include <stdio.h>

typedef enum  {
    GET = 0,
    POST = 1,
    PUSH = 2,
}method;

void hello(method abc) {
    printf("Value method %d \n", abc);
}

int main()
{
    method helloworld = GET;
    hello(helloworld);
    hello(POST);
}