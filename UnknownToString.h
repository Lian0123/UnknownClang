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
    SetBlock
        MakeBoolType IsIntData;
        MakeIntType  GetOverFlow;
        MakeIntType  CounterI;
        
        IsIntData assign true;
        CounterI  assign 0;
        
        if(InputText[0] equal '-')
            SetBlock
            GetOverFlow assign strcmp(InputText,"-2147483648");

            if(strlen(InputText) less_than 11)
                SetBlock
                GetOverFlow assign -1;
                EndBlock

            CounterI=1;
            printf("負數自動修正為正數\n");
            EndBlock

        else
            SetBlock
            GetOverFlow assign strcmp(InputText,"2147483648");

            if(strlen(InputText) less_than 10)
                SetBlock
                GetOverFlow assign -1;
                EndBlock

            EndBlock

        if(GetOverFlow less_than 0)
            SetBlock
            Loop(CounterI,strlen(InputText))
                SetBlock

                if(InputText[CounterI] greater_than 57 or InputText[CounterI] less_than 48)
                    SetBlock
                    printf("輸入錯誤，需輸入十進位數字而非文字\n");
                    Exit;
                    EndBlock

                EndBlock

            EndBlock

        else
            SetBlock
            printf("輸入錯誤，數字輸入範圍為：-2147483647 ~ 2147483647 \n");
            Exit;
            EndBlock
        
        Re abs(atoi(InputText));
    EndBlock
  


#endif // !UNKNOWNTOSTRING_H
