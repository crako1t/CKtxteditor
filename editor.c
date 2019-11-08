//CK Text Editor for Linux
//Author: Craig Koiter

#include <termios.h>
#include <unistd.h>

int main() {
    char c;
    while (read(STDIN_FILENO, &c, 1) ==1 && c != 'q');
    return 0;
}
