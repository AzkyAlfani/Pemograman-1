#include <stdio.h>
int main(){
    int d;
    for(int i=0;i<5;i++){
    scanf("%d", &d);
    int hari = d / 84600;
    int jam = d / 3600;
    int menit = (d - jam*3600) / 60;
    int detik = d - jam*3600 - menit*60;
    if(hari >= 1){printf("%d hari %2d:%2d:%2d\n", hari, jam - 24, menit, detik);}
    else{printf("%.2d:%.2d:%.2d\n", jam, menit, detik);}
    }
    return 0;
}