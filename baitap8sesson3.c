#include <stdio.h>

int main() {
    int so, nghichDao = 0;

    printf("Nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &so);

    while (so != 0) {
        nghichDao = nghichDao * 10 + (so % 10);  
        so /= 10;  
    }

    printf("Số nghịch đảo của số đã nhập là: %d\n", nghichDao);

    return 0;
}
