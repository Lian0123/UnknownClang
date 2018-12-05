#include "../UnknownClang.h"
#include "../UnknownToString.h"

/*
 *
 * |--------------------------------------------
 * | [Main] 左移位元範例
 * |--------------------------------------------
 * | Name    :  Main
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-12
 * | About   :  展示UnknownClang執行位元左位移
 * |
 * 
 */
Main()
  SetBlock
    MakeIntType TestNumber assign 1;
    MakeIntType MoveSum assign 0;
    
    MoveSum assign StrToInt32("4");

    Loop(0,MoveSum)
      SetBlock
        BitMoveLeft(TestNumber);
        PrintN("位移情況",TestNumber);
      EndBlock
    SystemPause;
    Re0;
  EndBlock
