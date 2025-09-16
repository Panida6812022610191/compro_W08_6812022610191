#include <stdio.h>

int main() {
    
    for (int i = 2; i <= 10; i += 2) {   // ใช้ for loop เพื่อวนจาก 2 ถึง 10 โดยเพิ่มทีละ 2
        printf("%d ", i);                // แสดงเลขคู่ทีละตัว
    }

    printf("\nEnd of loop.\n");           // แสดงEnd of loop เมื่อสิ้นสุดลูป
    return 0;
}