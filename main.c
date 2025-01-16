#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
 char first[255], last[255];

 askname(first, last);

 printf("Hey.., there1 1%s %s!\n", first, last);
 return 0;
}
