#include <stdio.h>
#include <string.h>

void EquivalentKeypresses(char * strArr[], int arrLength) {
    int ind;

    ind = 0;
    while (*strArr[0] != '\0')
    {
        if (*strArr[0] == '-')
        {
            strArr[0] += 3;
            strArr[1] -= 2;
        }
        if (*strArr[1] == '-')
        {
            strArr[0] -= 2;
            strArr[1] += 3;
        }
        if (*strArr[0] != *strArr[1])
        {
            printf("false\n");
            return;
        }
        strArr[0]++;
        strArr[1]++;
    }
    if (*strArr[1] == '\0')
        printf("true\n");
    else
        printf("false\n");
}

int main(void) {

    // keep this function call here
    char * A[] = {"a,b,c,d,e,-B,e,f", "a,b,c,d,-B,d,e,f"};
    int arrLength = sizeof(A) / sizeof(*A);
    EquivalentKeypresses(A, arrLength);
    return 0;

}