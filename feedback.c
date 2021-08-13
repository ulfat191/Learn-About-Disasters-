#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void feedback(f ppl)//structure function
{
    printf("\nEmail: %s\nCellphone Number: %d\nMessage: %s\n",ppl.email,ppl.cellnumber,ppl.message);
}
