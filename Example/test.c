#define ImportTextOpt ON
#define ImportMath ON

#include "../UnknowClang.h"
#include <stdio.h>
#include <stdlib.h>
#include <linux/types.h>

/* SubProgram Define  */
void PPP
  StartParameter int a , int b EndParameter;

/* Main Function */

Main()
  StartCodeArea
    MakeIntType AA assign 1;
    BitMoveLeft(AA);
    __int8_t ad assign 5;
    SetString(10,as) assign "5";
    PrintS(as);
    
    MakeIntType SSD = GetTntTypeScanf("");
    PrintN("aa",SSD);

    Loop(0,9) 
      StartCodeArea
    	printf("11\n");
      EndCodeArea
    
    if( AA greater_equal 4  and AA not_equal 0 )
      StartCodeArea
       PrintF("Float",0.123);
      EndCodeArea
    else
      StartCodeArea
       PrintN("AA",AA);
      EndCodeArea

    DefIntTree(BB);
    SetNode(BB,20);
    PrintN("BB",BB.Data);
    MakePtrCharType DD[255];

    PPP 
      StartArgument 4 , 5 EndArgument;

    SystemPause;
    Re0;
  EndCodeArea

/* SubProgram */
void PPP 
  StartParameter int a , int b EndParameter 
  StartCodeArea
    printf("<%d>\n",a+2*b);
  EndCodeArea
