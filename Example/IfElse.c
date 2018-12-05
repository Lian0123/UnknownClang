#include "../UnknownClang.h"
#include "../UnknownToString.h"
/*
 *
 * |--------------------------------------------
 * | [Main] if...else範例
 * |--------------------------------------------
 * | Name    :  Main
 * | Writer  :  Lian0123
 * | UpDate  :  2018-09-12
 * | About   :  展示UnknownClang使用if..else的基本判斷
 * |
 * 
 */
Main()
  SetBlock
    MakeIntType UsrNumber assign StrToInt32("10");
    
    if(UsrNumber%6 equal 0)
      SetBlock
        printf("%d 可被6整除\n",UsrNumber);
      EndBlock

    else if(UsrNumber%3 equal 0)
      SetBlock
        printf("%d 可被3整除\n",UsrNumber);
      EndBlock

    else if(UsrNumber%2 equal 0)
      SetBlock
        printf("%d 可被2整除\n",UsrNumber);
      EndBlock

    else
      SetBlock
        printf("%d 不可被2或3整除\n",UsrNumber);
      EndBlock
    
    SystemPause;
    Re0;
  EndBlock
