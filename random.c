#include <stdlib.h>

char randchar() {   
    // generates a random number using rand() and then modulos it, so it'll be from 0 - 25, then add ASCII value A to it
    char random_char = 'A' + rand() % 26;   // with help from stackoverflow
                                            
    return(random_char);
}
