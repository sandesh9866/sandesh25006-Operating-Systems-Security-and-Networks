#include <stdio.h>
#include <stdlib.h>

int global_var = 100;      // Data segment
int bss_var;               // BSS segment

int main() {
    int local_var = 50;    // Stack
    static int static_var = 200; // Data segment

    int *heap_var = (int *)malloc(sizeof(int));
    *heap_var = 300;

    printf("global_var: %p\n", (void*)&global_var);
    printf("bss_var: %p\n", (void*)&bss_var);
    printf("static_var: %p\n", (void*)&static_var);
    printf("local_var: %p\n", (void*)&local_var);
    printf("heap_var: %p\n", (void*)heap_var);

    free(heap_var);

    return 0;
}
