#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char find_minimum(unsigned char *);
unsigned char find_minimum_index(unsigned char *);
unsigned char find_maximum(unsigned char *);
unsigned char find_mean(unsigned char *);
unsigned char find_median(unsigned char *);
unsigned char sort_array(unsigned char *,unsigned char *);
void print_array(unsigned char *);
void print_statistics(unsigned char *);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    print_array(test);
    unsigned char out[SIZE] = {};
    print_statistics(test);
    *out = sort_array(test,out);
    printf("After ordering, ");
    print_array(out);
}

void print_statistics(unsigned char *test){
    printf("Minimum: %d\n",find_minimum(test));
    printf("Maximum: %d\n",find_maximum(test));
    printf("Mean: %d\n",find_mean(test));
    printf("Mean: %d\n",find_median(test));
}

void print_array(unsigned char *test){
    printf("The array is: [");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", *(test+i));
    printf("]\n");
}

unsigned char find_minimum(unsigned char *test){
    int min = *test;
    for(int i = 0; i < SIZE; i++)
        if(*(test+i) < min)
            min = *(test+i);
    return min;
}

unsigned char find_maximum(unsigned char *test){
    int max = *test;
    for(int i = 0; i < SIZE; i++)
        if(*(test+i) > max)
            max = *(test+i);
    return max;
}

unsigned char find_mean(unsigned char *test){
    int sum = 0;
    for(int i = 0; i < SIZE; i++)
        sum+=*(test+i);
    return sum/SIZE;
}

unsigned char find_median(unsigned char *test){
    if(SIZE%2 == 0)
        return (*(test+(SIZE/2)) + *(test+((SIZE/2)+1)))/2;
    else
        return *(test+(SIZE+1/2));
}

unsigned char sort_array(unsigned char *test, unsigned char *out){
    int temp;
    for(int i = 0; i < SIZE-1; i++){
        for(int j = i+1; j < SIZE; j++){
            if(*(test+i) > *(test+j)){
                temp = *(test+i);
                *(test+i) = *(test+j);
                *(test+j) = temp;
            }
        }
    }
    for(int i = 0; i < SIZE; i++)
        *(out+i) = *(test+i);
    return *out;
}
