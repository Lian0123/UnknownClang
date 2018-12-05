#include "../UnknownClang.h"

/* SubProgram Define  */
int PrintAdd
  StartParameter int a , int b EndParameter;

int PrintSub
  StartParameter int a , int b EndParameter;

/*
 *
 * |--------------------------------------------
 * | [Main] SubProgram迴圈範例
 * |--------------------------------------------
 * | Name    :  Main
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-15
 * | About   :  展示在UnknownClang中撰寫SubProgram
 * |
 * 
 */
Main()
  SetBlock
    MakeIntType ToCountNumber assign 2;

    ToCountNumber assign PrintAdd(ToCountNumber, 19);
    
    PrintSub(ToCountNumber, 30);
    
    SystemPause;
    Re0;
  EndBlock

/*
 *
 * |--------------------------------------------
 * | [SubProgram] PrintAdd Function
 * |--------------------------------------------
 * | Name    :  PrintAdd
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-15
 * | Return  :  a+b結果(int)
 * | About   :  Print a+b結果 並回傳
 * |
 * 
 */
int PrintAdd 
  StartParameter int a , int b EndParameter 
  SetBlock
    MakeIntType tmp assign a + b;
    PrintN("PrintAdd",tmp);
    Re tmp;
  EndBlock

/*
 *
 * |--------------------------------------------
 * | [SubProgram] PrintSub Function
 * |--------------------------------------------
 * | Name    :  PrintSub
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-15
 * | Return  :  a-b結果(int)
 * | About   :  Print a-b結果 並回傳
 * |
 * 
 */
int PrintSub 
  StartParameter int a , int b EndParameter 
  SetBlock
    MakeIntType tmp assign a - b;
    PrintN("PrintSub",tmp);
    Re tmp;
  EndBlock
