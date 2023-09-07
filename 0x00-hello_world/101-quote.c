#include <unistd.h>

int main(void) 
{
	/* 
         * Use the write system call to print the message to stderr (file descriptor 2)
         */
         write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
         return (1); 
}
