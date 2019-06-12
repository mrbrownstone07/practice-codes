#include <stdio.h>

void testStatic(void){
    static int b = 0;
    printf("value of static varriable: %d\n", b);
    b = b + 1;
    printf("value of static varriable: %d\n\n", b);
}

int main(){
    testStatic();
    testStatic();
    testStatic();
    return 0;
}