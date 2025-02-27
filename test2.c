// #define SWAP(a, b, type) do { type SWAP_temp = (a); (a) = (b); (b) = SWAP_temp; } while(0)

// int main() {
//     int x = 5;
//     int y = 10;
//     printf("%d %d",x,y);
// ;    SWAP(x, y, int);
//     // 此时 x 和 y 的值已经交换

//     return 0;
// }
#include<stdio.h>
long long fac(long long x){
    if(x=1)return 1;
    return x=fac(x-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",fac(n));
}
//gcc xx.c -o xx
//   ./xx.exe
//wgsjjkjasjj
//skkkk
//wsef ojkk sksi lwsw "asiksfeolef
//ws oklsoi wwdf
/*jskkf  e
sfsf llws
  fl

    so00eokgd
    s0of
    */