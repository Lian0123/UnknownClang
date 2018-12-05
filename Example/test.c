#define ImportTextOpt ON
#define ImportMath ON

#include "../UnknownClang.h"
#include "../UnknownToString.h"
#include <stdio.h>
#include <stdlib.h>
#include <linux/types.h>

/* SubProgram Define  */
void PPP
  StartParameter int a , int b EndParameter;

/* Main Function */

Main()
  SetBlock
    MakeIntType AA assign 1;
    BitMoveLeft(AA);
    __int8_t ad assign 5;
    SetString(10,as) assign "5";
    PrintS(as);
    
    MakeIntType SSD = StrToInt32("");
    PrintN("aa",SSD);

    Loop(0,9) 
      SetBlock
    	printf("11\n");
      EndBlock
    
    if( AA greater_equal 4  and AA not_equal 0 )
       PrintF("Float",0.123);
    else
       PrintN("AA",AA);
      

    DefIntTree(BB);
    SetNode(BB,20);
    PrintN("BB",BB.Data);
    MakePtrCharType DD[255];

    PPP (4, 5);

    SystemPause;
    Re0;
  EndBlock

/* SubProgram */
void PPP 
  StartParameter int a , int b EndParameter 
  SetBlock
    printf("<%d>\n",a+2*b);
  EndBlock
