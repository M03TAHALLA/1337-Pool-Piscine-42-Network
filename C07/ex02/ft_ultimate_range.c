#include<unistd.h>
#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max){

    int size = max - min ;

    if(min >= max){
        *range = NULL;
        return 0;
    }

    *range = (int *)malloc((size-1) * sizeof(int));

    if(*range == NULL){
        return -1;
    }
    int  i = 0;
    while (min < max)
    {
        (*range)[i] = min ;
        min++;
        i++;
    }

        return size;
    
}