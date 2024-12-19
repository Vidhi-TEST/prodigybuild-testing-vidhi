#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Function to check if a character is a valid key
bool isValidKey(char key) {
    if (isalnum(key) || ispunct(key) || isspace(key)) {
        return true;
    }
    return false;
}

// Function to write the key to the file
void writeKeyToFile(char key) {
    FILE *fPtr;
    fPtr = fopen("keylogger.txt", "a");
    
    if (fPtr != NULL) {
        fprintf(fPtr, "%c", key);
        fclose(fPtr);
    }
}

// Function to log the key
void keylog() {
    FILE *fPtr;
    fPtr = fopen("keylogger.txt", "w");
    
    if (fPtr != NULL) {
        char key;
        
        while ((key = getchar()) != EOF) {
            if (isValidKey(key)) {
                writeKeyToFile(key);
            }
        }
        
        fclose(fPtr);
    }
}

int main() {
    keylog();
    return 0;
}