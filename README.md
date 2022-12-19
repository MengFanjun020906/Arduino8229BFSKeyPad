# 一、电路连接
![请添加图片描述](https://img-blog.csdnimg.cn/edd605e7c5674b4ab7f7273af35c2220.jpeg)
学校发的Arduino实验盒里还有个矩阵键盘，一开始看到了SDA和SCL感觉是IIC驱动的，但是去Arduino官方论坛看了看，发现好像那个是SDO？，他并不是IIC驱动的，后来从Github上找了一个能用的库
|矩阵键盘引脚| Arduino引脚 |
|--|--|
| V | 5V |
| G | GND |
| SDO | 9 |
| SCL | 8 |
# 二、代码
先要下载一个TTP229的库
[TTP229](https://github.com/arduino12/ttp229b-arduino)

```c
#include "TTP229.h"
 
TTP229 ttp229(8,9);
uint8_t TouchPadKeyValue = 0;
 
void setup(){
  Serial.begin(115200);
}
 
void loop(){
  TouchPadKeyValue = ttp229.ReadKey16();
 
  if (TouchPadKeyValue == 1) {
    Serial.println("1");
 
  } else if (TouchPadKeyValue == 2) {
    Serial.println("2");
  } else if (TouchPadKeyValue == 3) {
    Serial.println("3");
  } else if (TouchPadKeyValue == 4) {
    Serial.println("A");
  } else if (TouchPadKeyValue == 5) {
    Serial.println("4");
  } else if (TouchPadKeyValue == 6) {
    Serial.println("5");
  } else if (TouchPadKeyValue == 7) {
    Serial.println("6");
  } else if (TouchPadKeyValue == 8) {
    Serial.println("B");
  } else if (TouchPadKeyValue == 9) {
    Serial.println("7");
  } else if (TouchPadKeyValue == 10) {
    Serial.println("8");
  } else if (TouchPadKeyValue == 11) {
    Serial.println("9");
  } else if (TouchPadKeyValue == 12) {
    Serial.println("C");
  } else if (TouchPadKeyValue == 13) {
    Serial.println("*");
  } else if (TouchPadKeyValue == 14) {
    Serial.println("0");
  } else if (TouchPadKeyValue == 15) {
    Serial.println("#");
  } else if (TouchPadKeyValue == 16) {
    Serial.println("D");
  } else if (false) {
  }
 
}
```
# 三、效果
![在这里插入图片描述](https://img-blog.csdnimg.cn/5368a462cd584c2dbd1df9fa40b5298d.png)
可能是这个触摸的原因，误触率实在太高了，根本就没法使用


