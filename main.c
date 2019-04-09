#include <stdio.h>

int main() {
    int x, y, z;
    int *int_addr;
    x=41;
    y=12;
    int_addr=&x; //x in adresini int_addr tutuyor.
    z=*int_addr; // int_addr nin tuttuğu adresin içinde ki degeri gösteriyor
    printf("z=%d\n",z); //z=41
    int_addr=&y;// y nin adresnini int_addr tutyor
    z=*int_addr; // int_addr nin tuttuğu adresin içinde ki degeri z ye atıyor
    printf("z=%d\n",z);//12
    return 0;
}