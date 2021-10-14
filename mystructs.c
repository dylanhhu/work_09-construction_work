#include "mystructs.h"
#include <stdio.h>
#include <stdlib.h>


// Prints the racetime struct in the format:
// Distance Time\t\tLast First\tmm:ss.ss
// Eg: 50 Free      Dylan Hu    0:22.20
void print_swimrace(struct swimrace *rt) {
    printf("%d %s\t\t%s %s\t%d:%0.2f\n", rt->distance, rt->stroke, rt->last_name, rt->first_name, rt->minutes, rt->seconds);
}


// Creates a new swimrace
struct swimrace * make_swimrace(char *f_name, char *l_name, char *stroke, int distance, int minutes, float seconds) {
    struct swimrace *rt = malloc(sizeof(struct swimrace));

    rt->first_name = f_name;
    rt->last_name = l_name;

    rt->stroke = stroke;
    rt->distance = distance;

    rt->minutes = minutes;
    rt->seconds = seconds;

    return rt;
}
