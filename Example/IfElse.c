#include "../UnknowClang.h"

/*
 *
 * |--------------------------------------------
 * | [Main] if...else範例
 * |--------------------------------------------
 * | Name    :  Main
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-12
 * | About   :  展示UnknowClang使用if..else的基本判斷
 * |
 * 
 */
Main()
  StartCodeArea
    MakeIntType UsrNumber;
    
    /* 懶的防呆 */
    printf("請輸入一個int範圍內的數字：");
    ScanfN(UsrNumber);
    
    if(UsrNumber%6 equal 0)
      StartCodeArea
        printf("%d 可被6整除\n",UsrNumber);
      EndCodeArea

    else if(UsrNumber%3 equal 0)
      StartCodeArea
        printf("%d 可被3整除\n",UsrNumber);
      EndCodeArea

    else if(UsrNumber%2 equal 0)
      StartCodeArea
        printf("%d 可被2整除\n",UsrNumber);
      EndCodeArea

    else
      StartCodeArea
        printf("%d 不可被2或3整除\n",UsrNumber);
      EndCodeArea
    
    SystemPause;
    Re0;
  EndCodeArea
