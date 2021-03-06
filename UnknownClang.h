/*
 *
 * |-----------------------------------------------------
 * | [Header File] UnknownClang
 * |-----------------------------------------------------
 * | Writer  :  Lian0123
 * | Version :  0.0.0.14
 * |
 * 
 */

#ifndef UNKONWN_CLANG_H
  #define UNKONWN_CLANG_H 1

  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  #include <stdbool.h>
  #include<iso646.h>
  #include<ctype.h>

  /*字串處理相關的庫*/
  #ifdef ImportString
    #include<string.h>
    #include<strings.h>
    #include<ctype.h>
    #include<regex.h>
    #include<wchar.h>
    #include<wctype.h>
  #endif

  /*Argument相關的庫*/
  #ifdef ImportStdArg
    #include<stdarg.h>
  #endif

  /*BeBug常用的庫*/
  #ifdef ImportDeBug
    #include<assert.h>
    #include<errno.h>
  #endif

  /*數學相關的庫*/
  #ifdef ImportMath
    #include<math.h>
    #include<complex.h>
  #endif

  /*時間相關的庫*/
  #ifdef ImportTime
    #include<time.h>
    #include<sys/time.h>
    #include<sys/times.h>

    /* 全域時間變數 */
    double TimerSTART = 0,
           TimerEND = 0;


    /* 設定計時器 */
    void SetTimer(void){
      TimerSTART = clock();
    }

    /* 結束計時器 */
    void EndTimer(void){
      TimerEND = clock();
    }

    /* 取得計算時間 */
    double GetCountTimer{
         return (TimerEND - TimerSTART) / CLOCKS_PER_SEC);
    }

  #endif

  /*資料型別相關的庫*/
  #ifdef ImportType
    #include<sys/types.h>
    #include<limit.h>
    #include<ctype.h>

    #define aa int
  #endif

  /*轉編碼的庫*/
  #ifdef ImportChangeCode
    #include<iconv.h>
  #endif

  /*使用者相關的庫*/
  #ifdef ImportUsr
    #include<grp.h>
    #include<pwd.h>
  #endif

  /*語言語系相關的庫*/
  #ifdef ImportLang
    #include<langinfo.h>
    #include<locale.h>
  #endif

  /*檔案系統相關的庫*/
  #ifdef ImportFileSystem
    #include<dirent.h>
    #include<fcntl.h>
    #include<fnmatch.h>
    #include<ftw.h>
    #include<glob.h>
    #include<libgen.h>
    #include<unistd.h> 
  #endif

  /*基本Main Function中常用功能的簡化巨集*/
  #define BasicMain() int main(int argc, char* argv[])
  #define Main() int main(void)
  #define Re return
  #define Re0 return 0
  #define endMain puts("\n--END Program--\n");Re0
  #define Exit exit(-1) 

  /*以呼叫Bash實現功能的巨集*/
  #define SystemPause printf("\nPress Enter key to continue...\n");system("read TheEnterMacro")
  #define SystemReboot() system("reboot")
  #define SystemInit() system("init 0")

  /*簡化迴圈的巨集*/
  #define Loop(m,n)  for(int i=m;i<n;i++)
  #define Loop2(m,n,o,p) for(int i=m;i<n;i++) for(int j=o;j<p;j++)
  #define InfiniteLoop while(1)
  #define EOFLoop(Cha) while(Cha!=EOF)

  /*資料輸出用的巨集*/
  #define Print(Str) printf(Str)
  #define PrintN(Str,Num) printf("%s : %d\n",Str,Num)
  #define PrintC(Str,Cha) printf("%s : \'%c\'\n",Str,Cha)
  #define PrintD(Str,Dou) printf("%s : \'%c\'\n",Str,Dou)
  #define PrintF(Str,Fol) printf("%s : %f\n",Str,Fol)
  #define PrintS(str) printf("\'%s\'\n",str)
  #define PrintSS(Str,str) printf("%s : \'%s\'\n",Str,str)

  /*簡化取得資料的巨集*/
  #define ScanfN(Num) scanf("%d",&Num)
  #define ScanfC(Cha) scanf("%c",&Cha)
  #define ScanfD(Dou) scanf("%g",&Dou)
  #define ScanfF(Fol) scanf("%f",&Fol)
  #define ScanfS(str) scanf("%s",str)

  /*位元移動的巨集*/
  #define BitMoveLeftBySet(Num,BitSum) Num=Num<<BitSum
  #define BitMoveRightBySet(Num,BitSum) Num=Num>>BitSum
  #define BitMoveLeft(Num) Num=Num<<1
  #define BitMoveRight(Num) Num=Num>>1
  
  /*生成陣列的巨集*/
  #define SetIntArray(Sum,IntName) int IntName[Sum]
  #define SetFloatArray(Sum,FloatName) float FloatName[Sum]
  #define SetString(Sum,StringName) char StringName[Sum]
  #define SetDoubleArray(Sum,DoubleName) double DoubleName[Sum]
  #define SetMyType(Sum,TypeName,Type) Type TypeName[Sum]

  /*簡化建立結構的巨集*/
  #define SetStruct(StructName) struct StructName

  /*提昇語法用的資料型別宣告巨集*/
  #define MakeShortType short
  #define MakeIntType int
  #define MakeCharType char
  #define MakeFLoatType float
  #define MakeDoubleType double
  #define MakeBoolType bool

  #define MakeInt8Type int8_t 
  #define MakeInt16Type int16_t 
  #define MakeInt32Type int32_t 
  #define MakeInt64Type int64_t 

  #define MakeUnsignedInt8Type u_int8_t 
  #define MakeUnsignedInt16Type u_int16_t 
  #define MakeUnsignedInt32Type u_int32_t
  #define MakeUnsignedInt64ype u_int64_t

  /*提昇語法的運算子*/
  #define assign =
  #define equal ==
  #define less_than <
  #define less_equal <=
  #define not_equal !=
  #define greater_than >
  #define greater_equal >=
  #define SetBlock {
  #define EndBlock }
  #define mod %

  //代碼區域等級
  #pragma CodeBlock

    //[代碼區塊]高等級層次代碼
    #define SetBlock_HightLevel {
    #define EndBlock_HightLevel }

    //[代碼區塊]中等級層次代碼
    #define SetBlock_NormalLevel {
    #define EndBlock_NormalLevel }

    //[代碼區塊]低等級層次代碼
    #define SetBlock_LowLevel {
    #define EndBlock_LowLevel }

    //[代碼區塊]LEVEL0層次代碼
    #define SetBlock0 {
    #define EndBlock0 }

    //[代碼區塊]LEVEL1層次代碼
    #define SetBlock1 {
    #define EndBlock1 }

    //[代碼區塊]LEVEL2層次代碼
    #define SetBlock2 {
    #define EndBlock2 }

    //[代碼區塊]LEVEL3層次代碼
    #define SetBlock3 {
    #define EndBlock3 }

    //[代碼區塊]LEVEL4層次代碼
    #define SetBlock4 {
    #define EndBlock4 }

    //[代碼區塊]LEVEL5層次代碼
    #define SetBlock5 {
    #define EndBlock5 }

    //[代碼區塊]LEVEL6層次代碼
    #define SetBlock6 {
    #define EndBlock6 }

    //[代碼區塊]LEVEL7層次代碼
    #define SetBlock7 {
    #define EndBlock7 }

    //[代碼區塊]LEVEL8層次代碼
    #define SetBlock8 {
    #define EndBlock8 }

    //[代碼區塊]LEVEL9層次代碼
    #define SetBlock9 {
    #define EndBlock9 }

  #pragma endregion

  /*提昇自定義function的矚目度的巨集*/
  #define StartArgument (
  #define EndArgument )
  #define StartParameter (
  #define EndParameter )

  /*簡化無Argument或Parameter敘述的巨集*/
  #define NotArgument ()
  #define NotParameter ()
  #define VoidParameter (void)

  /*增加空字串描述的巨集*/
  #define NotText ""

  #ifndef UNKNOWNCPP_H
    /*指標型別定義*/
    typedef FILE* PtrFile;
    typedef int*  PtrInt;
    typedef double* PtrDouble;
    typedef float* PtrFloat;
    typedef char* PtrChar;
    typedef char* ConstString;

    /*提昇對指標物件語意宣告的巨集*/
    #define MakePtrIntType PtrInt
    #define MakePtrDoubleType PtrDouble
    #define MakePtrFloatType PtrFloat
    #define MakePtrCharType ConstString

  #endif // UNKNOWNCPP_H

  #ifndef UNKNOWNCPP_H
    /*Tree資料結構定義*/
    typedef struct _LLTree_{long long Data; struct _LLTree_* RightNode; struct _LLTree_* LeftNode;}LLTree;
    typedef struct _LTree_{long Data; struct _LTree_* RightNode; struct _LTree_* LeftNode;}LTree;
    typedef struct _IntTree_{int Data; struct _IntTree_* RightNode; struct _IntTree_* LeftNode;}IntTree;
    typedef struct _FloatTree_{float Data; struct _FloatTree_* RightNode; struct _FloatTree_* LeftNode;}FloatTree;
    typedef struct _DoubleTree_{double Data; struct _DoubleTree_* RightNode; struct _DoubleTree_* LeftNode;}DoubleTree;
    typedef struct _CharTree_{char Data; struct _CharTree_* RightNode; struct _CharTree_* LeftNode;}CharTree;

    /*List資料結構定義*/
    typedef struct _LLList_{long long Data; struct _LLList_* NextNode;}LLList;
    typedef struct _LList_{long  Data; struct _LList_* NextNode;}LList;
    typedef struct _IntList_{int Data; struct _IntList_* NextNode;}IntList;
    typedef struct _FloatList_{float Data; struct _FloatList_* NextNode;}FloattList;
    typedef struct _DoubleList_{double Data; struct _DoubleList_* NextNode;}DoubleList;
    typedef struct _CharList_{char Data; struct _CharList_* NextNode;}CharList;
  
    /*Stack資料結構定義*/
    typedef struct _LLStack_{long long Data; struct _LLStack_* NextNode;}LLStack;
    typedef struct _LStack_{long Data; struct _LStack_* NextNode;}LStack;
    typedef struct _IntStack_{int Data; struct _IntStack_* NextNode;}IntStack;
    typedef struct _FloatStack_{float Data; struct _FloatStack_* NextNode;}FloatStack;
    typedef struct _DoubleStack_{double Data; struct _DoubleStack_* NextNode;}DoubleStack;
    typedef struct _CharStack_{char Data; struct _CharStack_* NextNode;}CharStack;

    /*雙向鏈表資料結構定義*/
    typedef struct _LLList2_{long long Data; struct _LLList2_* BeforeNode; struct _LLList2_* NextNode;}LLList2;
    typedef struct _LList2_{long  Data; struct _LList2_* BeforeNode; struct _LList2_* NextNode;}LList2;
    typedef struct _IntList2_{int Data; struct _IntList2_* BeforeNode; struct _IntList2_* NextNode;}IntList2;
    typedef struct _FloatList2_{float Data; struct _FloatList2_* BeforeNode; struct _FloatList2_* NextNode;}FloattList2;
    typedef struct _DoubleList2_{double Data; struct _DoubleList2_* BeforeNode; struct _DoubleList2_* NextNode;}DoubleList2;
    typedef struct _CharList2_{char Data; struct _CharList2_* BeforeNode; struct _CharList2_* NextNode;}CharList2;
    
    /*圖*/
    typedef struct _LLGraph1_{long long Data; struct _LLGraph1_* ArrayNext; struct _LLGraph1_* DataNext;}LLGraph1;
    typedef struct _LGraph1_{long Data; struct _LGraph1_* ArrayNext; struct _LGraph1_* DataNext;}LGraph1;
    typedef struct _IntGraph1_{int Data; struct _IntGraph1_* ArrayNext; struct _IntGraph1_* DataNext;}IntGraph1;
    typedef struct _FloatGraph1_{float Data; struct _FloatGraph1_* ArrayNext; struct _FloatGraph1_* DataNext;}FloatGraph1;
    typedef struct _DoubleGraph1_{double Data; struct _DoubleGraph1_* ArrayNext; struct _DoubleGraph1_* DataNext;}DoubleGraph1;
    typedef struct _CharGraph1_{char Data; struct _CharGraph1_* ArrayNext; struct _CharGraph1_* DataNext;}CharGraph1;

  #endif // UNKNOWNCPP_H

  #ifndef UNKNOWNCPP_H
    /*增強對建立Tree的語意*/
    #define DefLLTree(Name) LLTree Name
    #define DefLTree(Name) LTree Name
    #define DefIntTree(Name) IntTree Name
    #define DefFloatTree(Name) FloatTree Name
    #define DefDoubleTree(Name) LTree Name
    #define DefCharTree(Name) LTree Name
    
    /*設定節點資料的巨集*/
    #define SetNode(Node,InData) Node.Data = InData

    /*定義指標位置的巨集*/  
    #define SetTreeLR(Node,InPtrL,InPtrR) Node->LeftNode=&InPtrL; Node->RightNode=&InPtrR
    #define SetTreeLeft(Node,InPtrL) Node->LeftNode=&InPtrL
    #define SetTreeRight(Node,InPtrR) Node->RightNode=&InPtrR
    #define SetListNext(Node,NextPtr) Node->NextNode=&NextPtr
    #define SetStackNext(Node,NextPtr) Node->NextNode=&NextPtr

    /*測試Tree是否為空*/
    #define IsTreeNull(Type,TreeNode,CallBackBool) \
      if(TreeNode.LeftNode equal NULL and TreeNode.RightNode equal NULL) \
        CallBackBool assign true; \
      else \
        CallBackBool assign false 

    /*測試Stack是否為空*/
    #define IsStackNull(StackType,StackNode,CallBackBool) \
      if(StackNode.NextNode equal NULL) \
        CallBackBool assign true; \
      else \
        CallBackBool assign false 

    /*測試List是否為空*/
    #define IsListNull(Type,ListNode,CallBackBool) \
      if(ListNode.NextNode equal NULL) \
        CallBackBool assign true; \
      else \
        CallBackBool assign false 

  #endif // UNKNOWNCPP_H

  /*[尚未測試]匿名置換*/
  /*
  #define PtrSWAP(A,B) \ ({ typeof(A) tmp assign B; B assign A; A assign B; })

  //typedef void (*PtrFunc)();
  ConstString GlobalFunction[] assign {"AA","BB"};

  void FunctionLoop(ConstString a)
    SetBlock
      void (*PtrFunc)();
      PtrFunc assign GlobalFunction[0];
      InfiniteLoop
        SetBlock
          if(a equal )
          SetBlock
          EndBlock
        EndBlock
    EndBlock
*/

#endif //UNKONWN_CLANG_H
