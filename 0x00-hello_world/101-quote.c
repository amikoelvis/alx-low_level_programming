#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);
    write(2, message, len);
    return 1;
}
