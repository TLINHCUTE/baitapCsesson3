#include <stdio.h>

int main() {
    int num, nghichDao;
    int donVi, chuc, tram, nghin;

    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &num);

    donVi = num % 10;         
    chuc = (num / 10) % 10;   
    tram = (num / 100) % 10;  
    nghin = num / 1000;       

    nghichDao = donVi * 1000 + chuc * 100 + tram * 10 + nghin;

    printf("So nghich dao cua %d la: %d\n", num, nghichDao);

    return 0;
}
