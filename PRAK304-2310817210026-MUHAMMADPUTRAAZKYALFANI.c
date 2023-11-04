#include <stdio.h>
int main(){
    int n;
    for(int i = 0; i < 5; i++){
    scanf("%d", &n);
    if(n >= 100 || n < 0){printf("Anda Menginput Melebihi Limit Bilangan\n");}
    else if (n >= 20){printf("Puluhan\n");}
    else if (n >= 10){printf("Belasan\n");}
    else if (n >= 1 ){printf("Satuan\n");}
    else{printf("Nol\n");}
    }
    return 0;
}