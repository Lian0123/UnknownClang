#include "../UnknowClang.h"

/* SubProgram Define  */
int PrintAdd
  StartParameter int a , int b EndParameter;

int PrintSub
  StartParameter int a , int b EndParameter;

/* Main Function */
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

/* SubProgram */
int PrintAdd 
  StartParameter int a , int b EndParameter 
  StartCodeArea
    MakeIntType tmp assign a + b;
    PrintN("PrintAdd",tmp);
    Re tmp;
  EndCodeArea

/* SubProgram */
int PrintSub 
  StartParameter int a , int b EndParameter 
  StartCodeArea
    MakeIntType tmp assign a - b;
    PrintN("PrintSub",tmp);
    Re tmp;
  EndCodeArea