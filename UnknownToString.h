#ifndef UNKNOWNTOSTRING_H
    #define UNKNOWNTOSTRING_H
    #include "UnknownClang.h"

    /*
    *
    * |--------------------------------------------
    * | 安全的將輸入的文字轉成字串
    * |--------------------------------------------
    * | Name    :  StrSafeToInt
    * | Writer  :  Lian0123
    * | UpDate  :  2018-10-03
    * | Return  :  字串轉的正整數(int Type)
    * | About   :  輸入的 const string 校正為 int Type
    * |
    * 
    */
    int StrToInt32
    StartParameter ConstString InputText EndParameter
    StartCodeArea
        MakeBoolType IsIntData;
        MakeIntType  GetOverFlow;
        MakeIntType  CounterI;
        
        IsIntData assign true;
        CounterI  assign 0;
        
        if(InputText[0] equal '-')
            StartCodeArea
            GetOverFlow assign strcmp(InputText,"-2147483648");

            if(strlen(InputText) less_than 11)
                StartCodeArea
                GetOverFlow assign -1;
                EndCodeArea

            CounterI=1;
            printf("負數自動修正為正數\n");
            EndCodeArea

        else
            StartCodeArea
            GetOverFlow assign strcmp(InputText,"2147483648");

            if(strlen(InputText) less_than 10)
                StartCodeArea
                GetOverFlow assign -1;
                EndCodeArea

            EndCodeArea

        if(GetOverFlow less_than 0)
            StartCodeArea
            Loop(CounterI,strlen(InputText))
                StartCodeArea

                if(InputText[CounterI] greater_than 57 or InputText[CounterI] less_than 48)
                    StartCodeArea
                    printf("輸入錯誤，需輸入十進位數字而非文字\n");
                    Exit;
                    EndCodeArea

                EndCodeArea

            EndCodeArea

        else
            StartCodeArea
            printf("輸入錯誤，數字輸入範圍為：-2147483647 ~ 2147483647 \n");
            Exit;
            EndCodeArea
        
        Re abs(atoi(InputText));
    EndCodeArea
  


#endif // !UNKNOWNTOSTRING_H
