#ifndef UNKONW_CLANG_H
  #define UNKONW_CLANG_H 1

  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  #include <stdbool.h>
  #include<iso646.h>
  #include<ctype.h>

  #ifdef ImportBasic
    #include<stdio.h>
    #include<stblib.h>
  #endif

  #ifdef ImportString
    #include<string.h>
    #include<strings.h>
    #include<ctype.h>
    #include<regex.h>
    #include<wchar.h>
    #include<wctype.h>
  #endif

  #ifdef ImportStdArg
    #include<stdarg.h>
  #endif

  #ifdef ImportDeBug
    #include<assert.h>
    #include<errno.h>
  #endif

  #ifdef ImportMath
    #include<math.h>
    #include<complex.h>
  #endif

  #ifdef ImportTime
    #include<time.h>
    #include<sys/time.h>
    #include<ys/times.h>
  #endif

  #ifdef ImportType
    #include<sys/types.h>
    #include<limit.h>
    #include<ctype.h>
  #endif

  #ifdef ImportChangeCode
    #include<iconv.h>
  #endif

  #ifdef ImportUsr
    #include<grp.h>
    #include<pwd.h>
  #endif

  #ifdef ImportLang
    #include<langinfo.h>
    #include<locale.h>
  #endif


  #ifdef ImportFileSystem
    #include<dirent.h>
    #include<fcntl.h>
    #include<fnmatch.h>
    #include<ftw.h>
    #include<glob.h>
    #include<libgen.h>
    #include<unistd.h> 
  #endif

  #define BasicMain(argc,argv) (int main(int argc, char* argv[]))
  #define Main() int main(void)
  #define Re return
  #define Re0 return 0
  #define endMain puts("\n--END Program--\n");Re0
  #define Exit exit(-1) 

  #define SystemPause system("printf \'Press Enter key to continue...\' &&  read TheEnterMacro")
  #define SystemReboot() system("reboot")

  #define Loop(m,n)  for(int i=m;i<n;i++)
  #define Loop2(m,n,o,p) for(int i=m;i<n;i++) for(int j=o;j<p;j++)
  #define InfiniteLoop while(1)
  #define EOFLoop(Cha) while(Cha!=EOF)

  #define PrintN(Str,Num) printf("%s : %d\n",Str,Num)
  #define PrintC(Str,Cha) printf("%s : \'%c\'\n",Str,Cha)
  #define PrintF(Str,Fol) printf("%s : %f\n",Str,Fol)
  #define PrintS(str) printf("\'%s\'\n",str)
  #define PrintSS(Str,str) printf("%s : \'%s\'\n",Str,str)

  #define ScanfN(Num) scanf("%d",&Num)
  #define ScanfC(Cha) scanf("%c",&Cha)
  #define ScanfF(Fol) scanf("%f",&Fol)
  #define ScanfS(str) scanf("%s",str)


  #define BitMoveLeftBySet(Num,BitSum) Num=Num<<BitSum
  #define BitMoveRightBySet(Num,BitSum) Num=Num>>BitSum
  #define BitMoveLeft(Num) Num=Num<<1
  #define BitMoveRight(Num) Num=Num>>1
  
  #define SetIntArray(Sum,IntName) int IntName[Sum]
  #define SetFloatArray(Sum,FloatName) float FloatName[Sum]
  #define SetString(Sum,StringName) char StringName[Sum]
  #define SetDoubleArray(Sum,DoubleName) double DoubleName[Sum]
  #define SetMyType(Sum,TypeName,Type) Type TypeName[Sum]

  #define SetStruct(StructName) struct StructName

  #define MakeIntType int
  #define MakeCharType char
  #define MakeFLoatType float
  #define MakeDoubleType double
  #define MakeBoolType bool

  #define assign =
  #define equal ==
  #define less_than <
  #define less_equal <=
  #define not_equal !=
  #define greater_than >
  #define greater_equal >=
  #define StartCodeArea {
  #define EndCodeArea }

  #define StartArgument (
  #define EndArgument )
  #define StartParameter (
  #define EndParameter )

  #define NotArgument ()
  #define NotParameter (void)

  #define NotText ""

  typedef FILE* PtrFile;
  typedef int*  PtrInt;
  typedef double* PtrDouble;
  typedef float* PtrFloat;
  typedef char* ConstString;

  #define MakePtrIntType PtrInt
  #define MakePtrDoubleType PtrDouble
  #define MakePtrFloatType PtrFloat
  #define MakePtrCharType ConstString


  typedef struct _LLTree_{long long Data; struct _LLTree_* RightNode; struct _LLTree_* LeftNode;}LLTree;
  typedef struct _LTree_{long Data; struct _LTree_* RightNode; struct _LTree_* LeftNode;}LTree;
  typedef struct _IntTree_{int Data; struct _IntTree_* RightNode; struct _IntTree_* LeftNode;}IntTree;
  typedef struct _FloatTree_{float Data; struct _FloatTree_* RightNode; struct _FloatTree_* LeftNode;}FloatTree;
  typedef struct _DoubleTree_{double Data; struct _DoubleTree_* RightNode; struct _DoubleTree_* LeftNode;}DoubleTree;
  typedef struct _CharTree_{char Data; struct _CharTree_* RightNode; struct _CharTree_* LeftNode;}CharTree;

  typedef struct _LLList_{long long Data; struct _LLList_* NextNode;}LLList;
  typedef struct _LList_{long  Data; struct _LList_* NextNode;}LList;
  typedef struct _IntList_{int Data; struct _IntList_* NextNode;}IntList;
  typedef struct _FloatList_{float Data; struct _FloatList_* NextNode;}FloattList;
  typedef struct _DoubleList_{double Data; struct _DoubleList_* NextNode;}DoubleList;
  typedef struct _CharList_{char Data; struct _CharList_* NextNode;}CharList;
 
  typedef struct _LLStack_{long long Data; struct _LLStack_* NextNode;}LLStack;
  typedef struct _LStack_{long Data; struct _LStack_* NextNode;}LStack;
  typedef struct _IntStack_{int Data; struct _IntStack_* NextNode;}IntStack;
  typedef struct _FloatStack_{float Data; struct _FloatStack_* NextNode;}FloatStack;
  typedef struct _DoubleStack_{double Data; struct _DoubleStack_* NextNode;}DoubleStack;
  typedef struct _CharStack_{char Data; struct _CharStack_* NextNode;}CharStack;

  typedef struct _LLList2_{long long Data; struct _LLList2_* BeforeNode; struct _LLList2_* NextNode;}LLList2;
  typedef struct _LList2_{long  Data; struct _LList2_* BeforeNode; struct _LList2_* NextNode;}LList2;
  typedef struct _IntList2_{int Data; struct _IntList2_* BeforeNode; struct _IntList2_* NextNode}IntList2;
  typedef struct _FloatList2_{float Data; struct _FloatList2_* BeforeNode; struct _FloatList2_* NextNode;}FloattList2;
  typedef struct _DoubleList2_{double Data; struct _DoubleList2_* BeforeNode;; struct _DoubleList2_* NextNode;}DoubleList2;
  typedef struct _CharList2_{char Data; struct _CharList2_* BeforeNode;; struct _CharList2_* NextNode;}CharList2;
  
  #define DefLLTree(Name) LLTree Name
  #define DefLTree(Name) LTree Name
  #define DefIntTree(Name) IntTree Name
  #define DefFloatTree(Name) FloatTree Name
  #define DefDoubleTree(Name) LTree Name
  #define DefCharTree(Name) LTree Name
  
  #define SetNode(Node,InData) Node.Data = InData

  #define SetTreeLR(Node,InPtrL,InPtrR) Node->LeftNode=&InPtrL; Node->RightNode=&InPtrR
  #define SetTreeLeft(Node,InPtrL) Node->LeftNode=&InPtrL
  #define SetTreeRight(Node,InPtrR) Node->RightNode=&InPtrR
  #define SetListNext(Node,NextPtr) Node->NextNode=&NextPtr
  #define SetStackNext(Node,NextPtr) Node->NextNode=&NextPtr


  int GetTntTypeScanf
    StartParameter ConstString OutputText EndParameter
    StartCodeArea
      MakeCharType InScanfData[50];
      MakeBoolType IsIntData;
      MakeIntType  GetOverFlow;
      MakeIntType  CounterI;

      if(OutputText equal NotText)
        StartCodeArea
          OutputText assign "請數入數字" ;
        EndCodeArea
      
      do
      StartCodeArea

        IsIntData assign true;
        CounterI  assign 0;

        printf("%s：",OutputText);
        ScanfS(InScanfData);
        
        if(InScanfData[0] equal '-')
          StartCodeArea
            GetOverFlow assign strcmp(InScanfData,"-2147483648");

            if(strlen(InScanfData) less_than 11)
              StartCodeArea
                GetOverFlow assign -1;
              EndCodeArea

            CounterI=1;
          EndCodeArea

        else
          StartCodeArea
            GetOverFlow assign strcmp(InScanfData,"2147483648");

            if(strlen(InScanfData) less_than 10)
              StartCodeArea
                GetOverFlow assign -1;
              EndCodeArea

          EndCodeArea

        if(GetOverFlow less_than 0)
          StartCodeArea
            Loop(CounterI,strlen(InScanfData))
              StartCodeArea

                if(InScanfData[CounterI] greater_than 57 or InScanfData[CounterI] less_than 48)
                  StartCodeArea
                    IsIntData assign false;
                    printf("輸入錯誤，需輸入十進位數字而非文字\n");
                    break;
                  EndCodeArea

              EndCodeArea

          EndCodeArea

        else
          StartCodeArea
            IsIntData assign false;
            printf("輸入錯誤，數字輸入範圍為：-2147483647 ~ 2147483647 \n");
          EndCodeArea

      EndCodeArea
        while(!IsIntData);
      
      Re atoi(InScanfData);
    EndCodeArea

#endif //UNKONW_CLANG_H
