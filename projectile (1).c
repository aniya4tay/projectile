#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void){
    int vi=get_int("What is the initial velocity?\n");// Ask for initial velocity 
    int angle=get_int("What is the angle?\n");// Ask for angle
    double ay=-9.8;
    double pi= 3.14159;
    
        float vxi= vi*cos(angle* pi/180);// Inital Vx
        float vyi= vi*sin(angle* pi/180);// Inital Vy
        
   float vyf=-1*vyi;// Final Vy is equal to negative final Vy
   float vxf= vxi;// Final Vx is equal Final Vy
        float t= vyf/ (vyi+ay);// 
        printf("Total Distance:%f\n", t);
       printf("Airtime:%f\n", (float) vxi * t);
       printf("Max height:%f\n", (float) vyi * (t/2) + (ay/2)* (t/2)*t/2);
    }
    
