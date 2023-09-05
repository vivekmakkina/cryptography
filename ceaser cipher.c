#include <stdio.h>
#include <string.h>
void caesarCipherEncrypt(char text[], int shift) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
        }
    }
}
void caesarDecrypt(char text[], int shift) {
    caesarCipherEncrypt(text, 26 - shift);
}

int main() {
    char text[100];
    int shift;

    printf("Enter a plaintext: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    caesarCipherEncrypt(text, shift);

    printf("Encrypted message: %s\n", text);
    
    caesarDecrypt(text,shift);
    printf("Decrypt message: %s\n", text);
    return 0;
}
