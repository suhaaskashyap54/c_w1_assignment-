#include <stdio.h>

int main()

{

 float time , speed;

 float distance_km , distance_m , distance_cm , distance_mm;

 printf("Enter time in hours: ");

 scanf("%f" , & time);

 printf("Enter speed in km/h: ");

 scanf("%f" , & speed);

 
 distance_km = speed*time;

 distance_m = distance_km*1000;

 distance_cm = distance_km*100000;

 distance_mm = distance_km*1000000;


 printf("Distance travelled: \n");

 printf("KIlometers: %.2f km\n" , distance_km);

 printf("Meters: %.2f m\n" , distance_m);

 printf("Centimeters: %.2f cm\n" , distance_cm);

 printf("Millimeters: %.2f mm" , distance_mm);

 
 return 0;

}
