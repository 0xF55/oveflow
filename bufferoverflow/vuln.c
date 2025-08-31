#include <stdio.h>

void vuln() {

    char buff[40];
    scanf("%s",buff);

}

void win() {

    printf("Noooooo, you get it :(\n");

}

int main() {

    printf("Try to win!\n");
    vuln();

}

