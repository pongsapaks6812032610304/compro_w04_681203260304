#include <stdio.h>
const int GLOBAL_RATE = 20;   
void calculate() {
    const int LOCAL_BONUS = 80;
    printf("GLOBAL_RATE in calculate() = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS in calculate() = %d\n", LOCAL_BONUS);
}
int main() {
    calculate();
    printf("GLOBAL_RATE in maint() = %d\n", GLOBAL_RATE);
    return 0;
}
/*1.ค่าคงที่GOBAL_RATE และ LOCAL_BONNUS ต่างกันอย่างไร?
 GOBAL_RATE เป็นค่าคงที่ระดับ globbal:
- ถูกกำหนดไว้นอกฟังก์ชัน ใช้ได้ทุกที่ในไฟล์โปรแกรม
- เรียกใช้ได้ทั้งใน main() และ calculate()
  LOCAL_BONNUS เป็นค่าคงที่ระดับ local:
- ถูกประกาศภายในฟังก์ชัน calculate() จึงสามารถใช้ได้เฉพาะภายในฟังก์ชันเท่านั้น
- ไม่สารถเรียกใช้ใน main() ได้ (ถ้าพยายามจะ compile error)
  2.เกิดอะไรขึ้นถ้าเราเขียน GOBAL_RATE = 20; หรือ
LOCAL_BONNUS = 80;?
-แสดงค่าได้แต่ข้างนอกฟังก์ชันแทนในฟังก์ชัน
3.ทำไม LOCAL_BONNUS ถึงไม่สารถเรียกใช้ใน main() ได้?
-เพราะ LOCAL_BONNUS เป็นค่าคงที่ประกาสในฟังก์ชัน calculate()
-ตัวเปรที่อยู๋ในฟังก์ชัน จะมองไม่เห็นจากฟังก์ชันอื่น
4.อธิบาย และสรุปผลที่ได้จากการทดลองสิ่งที่ได้เรียนรู้
-gobal สามารถแสดงค่าได้ทุกฟังก์ชัน
-local สามาถแสดงค่าได้ในภายในฟังก์ชันเพราะถูกกำหนดให้อยู่ในฟังก์ชัน 
*/
