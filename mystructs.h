#ifndef MYSTRUCTS_H
#define MYSTRUCTS_H

struct swimrace {
    char *first_name;
    char *last_name;

    char *stroke;
    int distance;
    
    int minutes;
    float seconds;
};

void print_swimrace(struct swimrace *rt);

struct swimrace * make_swimrace(char *f_name, char *l_name, char *stroke, int distance, int minutes, float seconds);

#endif
