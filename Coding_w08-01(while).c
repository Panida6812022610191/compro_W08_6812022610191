#include <stdio.h>

int main() {
    int i = 2;                        // รับค่าตัวแปร

    while (i <= 10) {                 // ทำซ้ำตราบใดที่ i ไม่เกิน 10
        printf("%d ", i);             // แสดงค่าปัจจุบันของ i
        i += 2;                       // เพิ่มค่า i ทีละ 2 เพื่อให้ได้เลขคู่ถัดไป
    }

    printf("\nEnd of loop.\n");        // แสดง End of loop เมื่อส้นสุดลูป
    return 0;
}