#include <stdio.h>

int lcm(int a, int b) {

    int greater;
    int lesser;

    if (a > b) {
        greater = a;
        lesser = b;
    }
    else{
        greater = b;
        lesser = a;
    }

    int lcm = greater;
    int lcmFound = 0;

    while(!lcmFound){
        if(lcm % lesser == 0){
            lcmFound = 1;
        }
        else{
            lcm += greater;
        }
    }
    return lcm;


}

int main(){
    int a = 6;
    int b = 8;
    printf("the LCM of %i and %i is %i", a, b, lcm(a, b));
}