#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char ts_buffer[188*50];
    int i;

    memset(ts_buffer, 0, sizeof(ts_buffer));
    for(i=0; i<sizeof(ts_buffer); i+=188) {
        ts_buffer[i] = 0x47;
    }

    while(1) {
        fwrite(ts_buffer, sizeof(char), sizeof(ts_buffer), stdout);
    }

    return 0;
}

