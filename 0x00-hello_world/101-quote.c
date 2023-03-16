#include <unistd.h>

int main() {
    char* message = "\"and that piece of art is useful\"" - Dora Korpar, 2015-10-19\n"";
    write(STDERR_FILENO, message, 39);
    return 1;
}

