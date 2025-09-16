#include <stdio.h>

int main() {
    int start, stop;                                        // รับตัวแปร

    printf("Enter start number: ");                         // แสดง Enter start number
    scanf("%d", &start);

    printf("Enter stop number: ");                          // แสดง Enter stop number
    scanf("%d", &stop);

    
    printf("\nStart number is %d and stop number is %d\n", start, stop);   // แสดง Start number is and stop number is
    printf("-------------------------\n");

    
    printf("Sequence from start to stop: ");                // แสดง Sequence from start to stop
    for (int i = start; i <= stop; i++) {                   // แสดง ลำดับตัวเลขจาก start ถึง stop
        printf("%d ", i);
    }

    
    printf("\nThank you.\n");                               // แสดงThank you.เมื่อสิ้นสุดลูป

    return 0;
}