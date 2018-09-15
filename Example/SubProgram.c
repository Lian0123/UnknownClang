#include "../UnknowClang.h"

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
 * | About   :  展示在UnknowClang中撰寫SubProgram
 * |
 * 
 */
Main()
  StartCodeArea
    MakeIntType ToCountNumber assign 2;

    ToCountNumber assign PrintAdd 
      StartArgument ToCountNumber , 19 EndArgument;
    
    PrintSub
      StartArgument ToCountNumber , 30 EndArgument;
    
    SystemPause;
    Re0;
  EndCodeArea

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
  StartCodeArea
    MakeIntType tmp assign a + b;
    PrintN("PrintAdd",tmp);
    Re tmp;
  EndCodeArea

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
  StartCodeArea
    MakeIntType tmp assign a - b;
    PrintN("PrintSub",tmp);
    Re tmp;
  EndCodeArea