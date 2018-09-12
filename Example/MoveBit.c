#include "../UnknowClang.h"

/*
 *
 * |--------------------------------------------
 * | [Main] 左移位元範例
 * |--------------------------------------------
 * | Name    :  Main
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-12
 * | About   :  展示UnknowClang執行位元左位移
 * |
 * 
 */
Main()
  StartCodeArea
    MakeIntType TestNumber assign 1;
    Loop(0,4)
      StartCodeArea
        BitMoveLeft(TestNumber);
        PrintN("位移情況",TestNumber);
      EndCodeArea
    SystemPause;
    Re0;
  EndCodeArea
