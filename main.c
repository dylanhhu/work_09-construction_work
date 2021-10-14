#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mystructs.h"

int main() {
    struct swimrace *my50free = make_swimrace("Dylan", "Hu", "Free", 50, 0, 22.224);
    print_swimrace(my50free);
    free(my50free);

    struct swimrace *my200breast = make_swimrace("Dylan", "Hu", "Breastroke", 200, 2, 20.209708);
    print_swimrace(my200breast);
    free(my200breast);


    srand(time(NULL));
    struct swimrace *randrace = make_swimrace("Michael", "Phelps", "Butterfly", rand(), rand(), 0.0);
    print_swimrace(randrace);
    free(randrace);

    struct swimrace *randrace2 = make_swimrace("Antivax", "MichaelAndrew", "COVID19", rand(), rand(), 0.0);
    print_swimrace(randrace2);
    free(randrace2);

    return 0;
}
