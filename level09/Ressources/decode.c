#include <stdio.h>
#include <string.h>

void decode(char* input) {
    int length = strlen(input);
    
    for (int i = 0; i < length; i++) {
        char ch = input[i];
        char original_ch = ch - i;
        printf("%c", original_ch);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Lütfen bir argüman girin.\n");
        return 1;
    }

    decode(argv[1]);
    return 0;
}
