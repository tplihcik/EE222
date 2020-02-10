#include <stdio.h>

int main();

int main()
{  
    int i = -1066336256;
    float f = * (float*) &i;     
    printf("f: %f\n", f);  
    printf("f: %e\n", f);  
}

