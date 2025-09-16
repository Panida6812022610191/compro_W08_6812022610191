#include <stdio.h>

int main() {
    // ใช้ for loop เพื่อวนจาก 2 ถึง 10 โดยเพิ่มทีละ 2
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);  // แสดงเลขคู่ทีละตัว
    }

    printf("\nEnd of loop\n");  // แสดงข้อความเมื่อสิ้นสุดลูป
    return 0;
}