 讀取 4x4 矩陣式鍵盤之輸入，處理 Debounce ，並將結果顯示於七段顯示器上。
 
 4x4 矩陣式鍵盤之按鍵個數共十六個，以十六進位表示剛好為 0-F 之數字。
 
 請直接將數字送至74LS47，以下列結果顯示即可。
 ![image](https://github.com/AdamYoung011/NCNU_Microcomputer_Systems_Lab/assets/70525284/5780ab4f-f8b5-424c-8fa3-c2cac2752f6f)
 
LED的初始狀態為四個 F，操作方式如同使用計算機，新輸入的數字將會出現在最右邊，其餘的數字則左移一位，而最左邊的數字會消失。程式需滿足下列要求：

1. 不可使用 switch/case 或一系列 if/else 來讀取 keypad 輸入

2. 需分為 LED_Display.c/LED_Display.h, Keypad4x4.c/Keypad4x4.h 以及 Lab3-main.c 等三個程式。

3. LED_Display.c 與 Keypad4x4.c 必須編在 myIO.lib 中

4. Lab3-main.c 透過 include LED_Display.h 與 Keypad4x4.h 兩個 header files 取得定義在 myIO.lib 中的函數宣告。並必須透過聯結 myIO.lib 中的程式以產生 intel-HEX (.hex) file。

5. 請改寫 Makefile 以便自動產生 .hex file。

4x4 Keypad pinout

![image](https://github.com/AdamYoung011/NCNU_Microcomputer_Systems_Lab/assets/70525284/e33233d8-e4d7-443b-b8ee-d9c1755b935a)

