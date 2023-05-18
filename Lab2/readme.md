以按鍵控制七段顯示器 (Seven-Segment LED Display) 之兩位十進位數字增減。
數字初始值為 50，壓某一按鍵增 1 ，壓另一按鍵減 1。最大值為 99，最小值為 00

本實驗有三個重點: 
Part 1:看 SDCC 的 manual，瞭解有那些 MCS51 的擴充語法
Part 2:掃描顯示多個七段顯示器 (可降低硬體成本)
Part 3:處理按鈕 (Push Button) 的彈跳問題(Debounce)
