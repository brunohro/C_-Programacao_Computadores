#include <stdio.h>

float compara_valores(float v1, float v2)
{
    if (v1 > v2)
    { // 1: v1 > v2
        return 1;
    }
    else if (v2 > v1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
