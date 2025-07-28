#include <stdio.h>
int main() { // ฟังก์ชันหลักของโปรแกรม
    // ประกาศตัวแปร
    char namelnitial = 'P'; // ตัวแปร char สำหรับเก็บค่าชื่อ
    int age = 18; // ตัวแปร int สำหรับเก็บอายุเป็นจำนวนเต็ม
    float weight = 55.1; // ตัวแปร float สำหรับเก็บน้ำหนักเป็นทศนิยม
    char gender[] = "Male"; // ตัวแปร char array สำหรับเก็บเพศในรูแ string

    // แสดงค่าจากตัวแปร
    printf("namelnitial = %c \n", namelnitial); // แสดงค่าชื่อ (char) ที่เก็บชื่อ
    printf("age = %d\n", age); // แสดงอายุ (int)
    printf("weight = %.2f\n", weight); // แสดงน้ำหนักแบบทศนิยม 2 ตำแหน่ง (float)
    printf("gender = %s\n", gender); // แสดงเพศเป็นข้อความ (string)

    return 0; // คืนค่า 0 เพื่อสิ้นสุดการทำงาน
}