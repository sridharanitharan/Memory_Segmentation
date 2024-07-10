#include <stdio.h>
#include<stdlib.h>
int global_init_variable = 6;
int global_variable;
int PRINT() {
    printf(" |  \\/  |  ____|  \\/  |/ __ \\|  __ \\ \\   / /  / ____|  ____/ ____|  \\/  |  ____| \\ | |__   __|\n");
    printf(" | \\  / | |__  | \\  / | |  | | |__) \\ \\_/ /  | (___ | |__ | |  __| \\  / | |__  |  \\| |  | |   \n");
    printf(" | |\\/| |  __| | |\\/| | |  | |  _  / \\   /    \\___ \\|  __|| | |_ | |\\/| |  __| | . ` |  | |   \n");
    printf(" | |  | | |____| |  | | |__| | | \\ \\  | |     ____) | |___| |__| | |  | | |____| |\\  |  | |   \n");
    printf(" |_|  |_|______|_|  |_|\\____/|_|  \\_\\ |_|    |_____/|______\\_____|_|  |_|______|_| \\_|  |_|   \n");
    printf("\n");
}
void stack_frame(){
    int stack_variable;
    printf("{STACK FUNCTION [STACK FRAME] ADDRESS OF STACK VARIABLE[%p]}\n",&stack_variable);
}
int main(){
    static int variable_1 = 5;
    static int variable_2;
    int stack_variable;
    int *heap_variable = (int*)malloc(4);
    *heap_variable = 20;
    PRINT();

  printf("\t\t{DATA SEGMENT}  \n {INIT_VARIABLE} global_init_variable address[%p]\n {INIT VARIABLE} variable_1 address[%p]\n",&global_init_variable,&variable_1);
  printf("\t\t{BSS SEGMENT}  \n {UN-INIT VARIABLE} global_variable address[%p]\n {UN-INIT VARIABLE} variable_2 address[%p]\n",&global_variable,&variable_2);
  printf("\t\t{HEAP SEGMENT} \n {HEAP SEGMENT[DYNAMIC MEMORY ALLOCATION]} heap_variable address[%p]\n",heap_variable);
  printf("\t\t{STACK SEGMENT} \n {STACK SEGMENT[STACK FRAME]} stack_variable[%p]\n",&stack_variable);
  stack_frame(); 
}
