#ifndef UNKNOWNGL_H
	#define UNKNOWNGL_H
    #define USED_GL

    #ifdef USED_GL
        #include <GL/gl.h>
        #include <GL/glut.h>
        #include"./UnknownClang.h"
    #endif //USED_GL

    #ifdef USED_GLSL
        #include <iostream>
        #define  GLEW_STATIC
        #include <GL/glew.h>
        #include <GL/glut.h>
        #include <GLFW/glfw3.h>
        #include"./UnknownClang.h"
    #endif //USED_GLSL

    #define UChar unsigned char

	/*定義Color色彩*/
	#ifdef USE_UNKNOWNCOLOR
		#define ColorBasic 255.0

		//#ff0000
		#define Red  glColor3f(1,0,0)

		//#00ff00
		#define Green  glColor3f(0,1,0)

		//#0000ff
		#define Blue  glColor3f(0,0,1)

		//#ffffff
		#define white glColor3f(1,1,1)

		//#ff2d2d
		#define ColorRed01  glColor3f(255.0/ColorBasic,45.0/ColorBasic,45.0/ColorBasic)
		
		//#c60f0f
		#define ColorRed02  glColor3f(198.0/ColorBasic,15.0/ColorBasic,15.0/ColorBasic)
		
		//#ffdd35
		#define ColorYellow01 glColor3f(255.0/ColorBasic, 221.0/ColorBasic, 53.0/ColorBasic)

		//#ffdd00
		#define ColorYellow02 glColor3f(255.0/ColorBasic, 221.0/ColorBasic, 0.0/ColorBasic)

		//#a5ff44
		#define ColorGreen01 glColor3f(165.0/ColorBasic, 255.0/ColorBasic, 68.0/ColorBasic)

		//#44ff59
		#define ColorGreen02 glColor3f(68.0/ColorBasic, 255.0/ColorBasic, 89.0/ColorBasic)

		//#0b71ba
		#define ColorBlue01 glColor3f(11.0/ColorBasic,133.0/ColorBasic,86.0/ColorBasic)
	
		//#4a72a5
		#define ColorBlue02 glColor3f(74.0/ColorBasic,114.0/ColorBasic,165.0/ColorBasic)

		//#1115ff
		#define ColorBlue03 glColor3f(17.0/ColorBasic,21.0/ColorBasic,255.0/ColorBasic)


	#endif // USE_UNKNOWNCOLOR

	#define BASICSIZE 1.0
	#define VIEWSIZE(ObjLen) ObjLen*BASICSIZE
	#define DefProjection(K) glOrtho2D(K,-K,K,-K)
    
    struct LookAtMatrix{
        double Eyes[3]   ; //攝影機位置
        double Center[3] ; //焦距位置？
        double Uper[3]   ; //偏移方向
    };

    
    void LookAtFunction(LookAtMatrix NowLookAt){
        gluLookAt(NowLookAt.Eyes[0]   , NowLookAt.Eyes[1]   , NowLookAt.Eyes[2]   ,
                  NowLookAt.Center[0] , NowLookAt.Center[1] , NowLookAt.Center[2] ,
                  NowLookAt.Uper[0]   , NowLookAt.Uper[1]   , NowLookAt.Uper[2]   );      
    }
    

    //顯示改變
    #define CallBakeByDisply(Func) glutDisplayFunc(Func) 

    //畫面更新
    //Func:int w,h
    #define CallBakeByReah(Func) glutReshapeFunc(Func)

    //按鍵事件
    //Func: UChar key, int x,int y
    #define CallBakeByKeyBoard(Func) glutKeyboardFunc(Func)

    #define CallBakeByMouse(Func) glutMouseFunc(Func)

    //GLUT_UP

    //背景上的處理
    #define CallBakeByIdle(Func) glutIdleFunc(Func) 

    //移動就執行
    #define CallBakeByMotion(Func) glutMotionFunc(Func)
   
    //有變化就執行觸發
    #define CallBakeByPassMotion(Func) glutPassiveMotionFunc(Func)

    #define LoopGL() glutMainLoop()

    //所有事件發生的
    #define CallBakeByReDisply(Func) glutPostRedisplay()

    //切換讀寫Buffer
    #define CallBakeByBuffers(Func)glutSwapBuffers()      

    #pragma region //POLYGON設定
        /*[POLYGON]畫點*/
        #define DrawPoint GL_POINT

        /*[POLYGON]畫線（兩個一組）*/
        #define DrawLines GL_LINES

        /*[POLYGON]線（連接到下一個）*/
        #define DrawLine GL_LINE_STRIP
        
        /*[POLYGON]線（連接到下一個，最後連成自動連成多邊形）*/
        #define DrawLineLoop GL_LINE_Loop

        /*[POLYGON]三角形（三個一組）*/
        #define Triangles GL_TRIANGLES

        /*[POLYGON]三角形（3+n個點能多n個連續三角形）*/
        #define Triangle GL_TRIANGLE_STRIP

        /*[POLYGON]三角形（固定首點，3+n個點能多n個連續三角形）*/
        #define TriangleFixed GL_TRIANGLE_FAN

        /*[POLYGON]矩形（四個一組）*/
        #define Quads GL_QUADS

        /*[POLYGON]矩形（4+2n個點能多n個連續矩形）*/
        #define Quad GL_QUADS_STRIP

        /*[POLYGON]多邊形（轉一圈）*/
        #define PolygonType GL_POLYGON

        /*[POLYGON]矩形（4+2n個點能多n個連續矩形）*/
        #define Rectf(X1,X2,X3,X4) glRectf(X1,X2,X3,X4)

    #pragma endregion


    //前乘後乘issuse 使得 projection
#endif // UNKNOWNGL_H