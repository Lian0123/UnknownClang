#include "../UnknownClang.h"

/*
 *
 * |--------------------------------------------
 * | [Main] FS Read By Bit範例
 * |--------------------------------------------
 * | Name    :  Main
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-12
 * | About   :  展示使用UnknownClang讀檔時的語法
 * |
 * 
 */
Main()
  SetBlock
    PtrFile fp;
    MakeCharType ch;
    SetString(256,file);

    /* 懶的防呆 */
    printf("請輸入要開啟檔案名稱? ");
    ScanfS(file);

    if((fp assign  fopen(file,"rb")) equal NULL)
      SetBlock
        printf("無法開啟此檔案 \n");
        Exit;
      EndBlock

    ch=fgetc(fp);

    EOFLoop(ch)
      SetBlock
        printf("%c",ch);
        ch=fgetc(fp);
      EndBlock

    printf("\n");
    fclose(fp);
    SystemPause;

  EndBlock
