#include <stdio.h>
#include <math.h>

float f(float x) {
    return 0 <= x && x <= 1 ?
      cos(x)*exp(sqrt(pow(-x,2))) :
      log(x+1)-sqrt(4-pow(x,2));
}

int main() {
    float h, x = 0;
    printf("введите h> "); scanf("%f", &h);
    printf("x\t\tf(x)\n");
    while(x <= 1.0f) {
        printf("%f\t%f\n", x+h, f(x));
        x += h;
    }
    return 0;
}
