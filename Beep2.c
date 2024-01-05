#include <stdio.h>
#include <stdlib.h>

int main() {
    // Output ASCII BEL character to produce a beep sound
    printf("This is a text message with a beep sound: \a\n");

    // Use echo -e to produce a beep sound in the terminal
    system("echo -e '\a'");

    return 0;
}
