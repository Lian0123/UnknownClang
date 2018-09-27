# UnknownClang
一個用Macro define把C語言語法大幅修改的header檔（未完成）

## Macro說明：

### 函式庫：
(待補充)

### Macro：

#### BasicMain(argc,argv)
簡化main function的宣告

##### 對應程式碼：
```
int main(int argc, char* argv[])
```

#### Main(void)
簡化main function的宣告

##### 對應程式碼：
```
int main(void)
```

#### Re0
簡化"return 0"的宣告

##### 對應程式碼：
```
return 0
```

#### endMain
簡化輸出"--END Program--"字串，並執行"return 0"的宣告

##### 對應程式碼：
```
puts("\n--END Program--\n"); return 0
```

#### Exit
簡化"return 0"的宣告

##### 對應程式碼：
```
return 0
```

#### SystemPause
在Linux系統上實現System("pause")的方法

##### 對應程式碼：
```
system("printf \'Press Enter key to continue...\' &&  read TheEnterMacro")
```

#### SystemReboot()
重新啟動電腦（整人用）

##### 對應程式碼：
```
system("reboot")
```

#### Loop(m,n)
迴圈，簡化版的for迴圈

##### 對應程式碼：
```
for(int i=m;i<n;i++)
```

#### Loop2(m,n,o,p)
迴圈，簡化版的2層for迴圈

##### 對應程式碼：
```
for(int i=m;i<n;i++) for(int j=o;j<p;j++)
```

#### InfiniteLoop()
無限迴圈

##### 對應程式碼：
```
while(1)
```

#### EOFLoop(Cha)
讀檔的動作中檢查是否是EOF的迴圈

##### 對應程式碼：
```
while(Cha!=EOF)
```

#### PrintN(Str,Num)
輸出文字與整數型別資料

##### 對應程式碼：
```
printf("%s : %d\n",Str,Num)
```

#### PrintC(Str,Cha)
輸出文字與字元型別資料

##### 對應程式碼：
```
printf("%s : \'%c\'\n",Str,Cha)
```

#### PrintF(Str,Fol)
輸出文字與單精度浮點數型別資料

##### 對應程式碼：
```
printf("%s : %f\n",Str,Fol)
```

#### PrintS(Str)
輸出字串型別資料

##### 對應程式碼：
```
printf("\'%s\'\n",str)
```

#### PrintSS(Str,str)
輸出文字與輸出字串型別資料

##### 對應程式碼：
```
printf("%s : \'%s\'\n",Str,str)
```

#### ScanfN(Num)
獲取使用者鍵入整數型別資料

##### 對應程式碼：
```
canf("%d",&Num)
```

#### ScanfC(Cha)
獲取使用者鍵入字元型別資料

##### 對應程式碼：
```
scanf("%c",&Cha)
```

#### ScanfF(Fol)
獲取使用者鍵入單精度浮點數型別資料

##### 對應程式碼：
```
scanf("%f",&Fol)
```

#### ScanfS(str)
獲取使用者鍵入字串型別資料

##### 對應程式碼：
```
scanf("%s",&str)
```

(待補充)
