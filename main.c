#include <stdio.h>
#include <stdlib.h>

#include <editline.h>

int main () {
    puts("This may or may not work");
    puts("Use at your own risks");
    puts("CTRL+C to exit\n");

    while(1) {

        char* input = readline("mylisp>");
	
        add_history(input);
	
	printf("%s", input);

        free(input);
    }

    return EXIT_SUCCESS;
}
