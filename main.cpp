#include "main.h"

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
	//*************************************************************************
	// Chame aqui as funções do mygl.h
	//*************************************************************************
    /*
	//  1 configuracao
	tPixel pixel_1 = {0,0,{255,0,0,0}};     //vermelho
    tPixel pixel_2 = {512,255,{0,0,255,0}}; //azul
    DrawLine(pixel_1.x,pixel_1.y,pixel_2.x,pixel_2.y, pixel_1.cor,pixel_2.cor);

    //  2 configuracao
	tPixel pixel_3 = {512,128,{255,0,0,0}}; //vermelho
    tPixel pixel_4 = {0,0,{0,0,255,0}};     //azul
    DrawLine(pixel_3.x,pixel_3.y,pixel_4.x,pixel_4.y, pixel_3.cor,pixel_4.cor);

    //  3 configuracao
	tPixel pixel_5 = {510,0,{255,255,255,0}};
    tPixel pixel_6 = {512,512,{255,255,255,0}};
    DrawLine(pixel_5.x,pixel_5.y,pixel_6.x,pixel_6.y, pixel_5.cor,pixel_6.cor);

    //  4 configuracao
	tPixel pixel_7 = {512,512,{255,255,255,0}};
    tPixel pixel_8 = {505,0,{255,255,255,0}};
    DrawLine(pixel_7.x,pixel_7.y,pixel_8.x,pixel_8.y, pixel_7.cor,pixel_8.cor);

    //  5 configuracao
	tPixel pixel_9 = {0,512,{255,255,255,0}};
    tPixel pixel_10 = {512,500,{255,255,255,0}};
    DrawLine(pixel_9.x,pixel_9.y,pixel_10.x,pixel_10.y, pixel_9.cor,pixel_10.cor);

    //  6 configuracao
	tPixel pixel_11 = {512,500,{255,255,255,0}};
    tPixel pixel_12 = {0,512,{255,255,255,0}};
    DrawLine(pixel_11.x,pixel_11.y,pixel_12.x,pixel_12.y, pixel_11.cor,pixel_12.cor);

    //  7 configuracao
	tPixel pixel_13 = {0,512,{255,255,255,0}};
    tPixel pixel_14 = {510,0,{255,255,255,0}};
    DrawLine(pixel_13.x,pixel_13.y,pixel_14.x,pixel_14.y, pixel_13.cor,pixel_14.cor);



    //  8 configuracao
	tPixel pixel_15 = {12,0,{255,255,255,0}};
    tPixel pixel_16 = {0,512,{255,255,255,0}};
    DrawLine(pixel_15.x,pixel_15.y,pixel_16.x,pixel_16.y, pixel_15.cor,pixel_16.cor);

    //  teste
	tPixel pixel_17 = {512,255,{255,255,255,0}};
    tPixel pixel_18 = {0,512,{255,255,255,0}};
    DrawLine(pixel_17.x,pixel_17.y,pixel_18.x,pixel_18.y, pixel_17.cor,pixel_18.cor);

    //  teste
	tPixel pixel_19 = {0,512,{255,255,255,0}};
    tPixel pixel_20 = {512,384,{255,255,255,0}};
    DrawLine(pixel_19.x,pixel_19.y,pixel_20.x,pixel_20.y, pixel_19.cor,pixel_20.cor);

    //  teste
	tPixel pixel_21 = {0,255,{255,255,255,0}};
    tPixel pixel_22 = {512,512,{255,255,255,0}};
    DrawLine(pixel_21.x,pixel_21.y,pixel_22.x,pixel_22.y, pixel_21.cor,pixel_22.cor);

    //  teste
	tPixel pixel_23 = {512,512,{255,255,255,0}};
    tPixel pixel_24 = {0,384,{255,255,255,0}};
    DrawLine(pixel_23.x,pixel_23.y,pixel_24.x,pixel_24.y, pixel_23.cor,pixel_24.cor);

    //  teste
	tPixel pixel_25 = {255,0,{255,255,255,0}};
    tPixel pixel_26 = {255,512,{255,255,255,0}};
    DrawLine(pixel_25.x,pixel_25.y,pixel_26.x,pixel_26.y, pixel_25.cor,pixel_26.cor);

    //  teste
	tPixel pixel_27 = {0,255,{255,255,255,0}};
    tPixel pixel_28 = {512,255,{255,255,255,0}};
    DrawLine(pixel_27.x,pixel_27.y,pixel_28.x,pixel_28.y, pixel_27.cor,pixel_28.cor);

    //  teste
	tPixel pixel_29 = {0,0,{255,255,255,0}};
    tPixel pixel_30 = {10,512,{255,255,255,0}};
    DrawLine(pixel_29.x,pixel_29.y,pixel_30.x,pixel_30.y, pixel_29.cor,pixel_30.cor);

    //  teste
	tPixel pixel_31 = {0,0,{255,255,255,0}};
    tPixel pixel_32 = {512,512,{255,255,255,0}};
    DrawLine(pixel_31.x,pixel_31.y,pixel_32.x,pixel_32.y, pixel_31.cor,pixel_32.cor);

    //  teste
	tPixel pixel_33 = {512,0,{255,255,255,0}};
    tPixel pixel_34 = {0,512,{255,255,255,0}};
    DrawLine(pixel_33.x,pixel_33.y,pixel_34.x,pixel_34.y, pixel_33.cor,pixel_34.cor);

    //  teste
	tPixel pixel_35 = {128,0,{255,255,255,0}};
    tPixel pixel_36 = {255,512,{255,255,255,0}};
    DrawLine(pixel_35.x,pixel_35.y,pixel_36.x,pixel_36.y, pixel_35.cor,pixel_36.cor);

    //  teste
	tPixel pixel_37 = {384,0,{255,255,255,0}};
    tPixel pixel_38 = {255,512,{255,255,255,0}};
    DrawLine(pixel_37.x,pixel_37.y,pixel_38.x,pixel_38.y, pixel_37.cor,pixel_38.cor);

    //  teste
	tPixel pixel_39 = {255,0,{255,255,255,0}};
    tPixel pixel_40 = {128,512,{255,255,255,0}};
    DrawLine(pixel_39.x,pixel_39.y,pixel_40.x,pixel_40.y, pixel_39.cor,pixel_40.cor);
    */

    // 1-6-4 configuracao
    tPixel pixel_100 = {10,10,{255,0,0,0}};    //vermelho
    tPixel pixel_101 = {200,50,{0,255,0,0}};   //verde
    tPixel pixel_102 = {30,80,{0,0,255,0}};    //azul
    DrawTriangle(pixel_100.x, pixel_100.y,
                 pixel_101.x, pixel_101.y,
                 pixel_102.x, pixel_102.y,
                 pixel_100.cor, pixel_101.cor, pixel_102.cor);

    // 2-3-5 configuracao
    tPixel pixel_103 = {500,200,{255,0,0,0}};    //vermelho
    tPixel pixel_104 = {300,100,{0,255,0,0}};   //verde
    tPixel pixel_105 = {350,250,{0,0,255,0}};    //azul
    DrawTriangle(pixel_103.x, pixel_103.y,
                 pixel_104.x, pixel_104.y,
                 pixel_105.x, pixel_105.y,
                 pixel_103.cor, pixel_104.cor, pixel_105.cor);

    // 1-7-8 configuracao
    tPixel pixel_106 = {20,500,{255,0,0,0}};    //vermelho
    tPixel pixel_107 = {100,300,{0,255,0,0}};   //verde
    tPixel pixel_108 = {200,300,{0,0,255,0}};    //azul
    DrawTriangle(pixel_106.x, pixel_106.y,
                 pixel_107.x, pixel_107.y,
                 pixel_108.x, pixel_108.y,
                 pixel_106.cor, pixel_107.cor, pixel_108.cor);

}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
	// Inicializações.
	InitOpenGL(&argc, argv);
	InitCallBacks();
	InitDataStructures();

	// Ajusta a função que chama as funções do mygl.h
	DrawFunc = MyGlDraw;

	// Framebuffer scan loop.
	glutMainLoop();

	return 0;
}

