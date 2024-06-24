#include<stdlib.h>
int *ft_range(int min, int max){
    int size = (max-1) - min ;

    if(min >= max){
        return NULL;
    }
    int *range = (int *)malloc(size * sizeof(int));
    int  i = 0;
    while (min < max)
    {
        range[i] = min ;
        min++;
        i++;
    }

    return range;
 
}