#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char words[50][50];
    int lengths[50];
    int max_length = 0;
  
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
        int len = 0;
        while (words[i][len] != '\0') {
            len++;
        }
        lengths[i] = len;
        if (len > max_length) {
            max_length = len;
        }
    }

    for (int i = 0; i < N; i++) {
        int spaces = max_length - lengths[i];
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        printf("%s\n", words[i]);
    }

    return 0;
}
