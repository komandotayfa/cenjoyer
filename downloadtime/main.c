#include <stdio.h>
#include <stdlib.h>
float downloadtimer(float speed,float file1);
int main()
{
    float speed,file1;
    printf("İndirme hızınız: ");
    scanf("%f",&speed);
    printf("İndirme boyutu: ");
    scanf("%f",&file1);
    printf("İndirme süresi %f saat",downloadtimer(speed,file1));
    return 0;
}
float downloadtimer(float speed,float file1){
    return (file1/speed)/3600;
}
