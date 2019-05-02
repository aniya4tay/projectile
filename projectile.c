#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void){
    int vi=get_int("What is the initial velocity?\n");
    int angle=get_int("What is the angle?\n");
    double ay=-9.8;
    double pi= 3.14159;
    
        float vxi= vi*cos(angle* pi/180);
        float vyi= vi*sin(angle* pi/180);
        
   float vyf=-1*vyi;
   float vxf= vxi;
        float t= vyf/ vyi+ay;
        printf("Total Distance:%f\n", t);
       printf("Airtime:%f\n", (float) vxi * t);
       printf("Max height:%f\n", (float) vyi * t/2 + ay/2 * t*t/2);
    }
    
