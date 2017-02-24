#ifndef _MYGL_H_
#define _MYGL_H_

#include<math.h>
#include "definitions.h"

//*****************************************************************************
// Defina aqui as suas funções gráficas
//*****************************************************************************
typedef struct {
    float R, G, B, A;   //cor
} tCor;

typedef struct {
    int x, y;   //posicao
    tCor cor;
} tPixel;

void PutPixel( int x, int y, tCor cor) {
    unsigned int offset = (4*x)+(4*y*IMAGE_WIDTH);
    FBptr[offset+0]=cor.R;
    FBptr[offset+1]=cor.G;
    FBptr[offset+2]=cor.B;
    FBptr[offset+3]=cor.A;
}

void DrawLine(int x0, int y0, int x1, int y1, tCor cor0, tCor cor1 ) {
    int dx = x1-x0;
    int dy = y1-y0;
    float m = (float)dy/dx;

    if((m>=0.0) and (m<=1.0) and (x1>x0)) {     // 1 configuracao
        //interpolacao linear em x
        float vR = (float)(cor1.R-cor0.R)/dx;
        float vG = (float)(cor1.G-cor0.G)/dx;
        float vB = (float)(cor1.B-cor0.B)/dx;
        float vA = (float)(cor1.A-cor0.A)/dx;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(x_aux < x1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Nordeste
                x_aux++;
                y_aux++;
            } else {        //a esccolha atual serah Leste
                x_aux++;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    } //fim do if
    else if((m>=0.0) and (m<=1.0) and (x1<x0)) {     // 2 configuracao
        dx = dx*(-1);
        dy = dy*(-1);

        //interpolacao linear em x
        float vR = (float)(cor1.R-cor0.R)/dx;
        float vG = (float)(cor1.G-cor0.G)/dx;
        float vB = (float)(cor1.B-cor0.B)/dx;
        float vA = (float)(cor1.A-cor0.A)/dx;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(x_aux > x1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Sudoeste
                x_aux--;
                y_aux--;
            } else {        //a esccolha atual serah Oeste
                x_aux--;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    } //fim do if
    else if((m>1.0) and (y1>y0)) {      // 3 configuracao
        //interpolacao linear em y
        float vR = (float)(cor1.R-cor0.R)/dy;
        float vG = (float)(cor1.G-cor0.G)/dy;
        float vB = (float)(cor1.B-cor0.B)/dy;
        float vA = (float)(cor1.A-cor0.A)/dy;

        //simulando o espelhamento da reta em torno da reta x=y
        int aux = dx;
        dx = dy;
        dy = aux;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(y_aux < y1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Nordeste
                x_aux++;
                y_aux++;
            } else {        //a esccolha atual serah Norte
                y_aux++;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    }
    else if((m>1.0) and (y1<y0)) {  // 4 configuracao
        dx = dx*(-1);
        dy = dy*(-1);

        //interpolacao linear em y
        float vR = (float)(cor1.R-cor0.R)/dy;
        float vG = (float)(cor1.G-cor0.G)/dy;
        float vB = (float)(cor1.B-cor0.B)/dy;
        float vA = (float)(cor1.A-cor0.A)/dy;

        //simulando o espelhamento da reta em torno da reta x=y
        int aux = dx;
        dx = dy;
        dy = aux;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(y_aux > y1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Sudoeste
                x_aux--;
                y_aux--;
            } else {        //a esccolha atual serah Sul
                y_aux--;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    }
    else if((m<0.0) and (m>=-1.0) and (x0<x1)) {    // 5 configuracao
        dy = dy*(-1);

        //interpolacao linear em x
        float vR = (float)(cor1.R-cor0.R)/dx;
        float vG = (float)(cor1.G-cor0.G)/dx;
        float vB = (float)(cor1.B-cor0.B)/dx;
        float vA = (float)(cor1.A-cor0.A)/dx;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(x_aux < x1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Sudeste
                x_aux++;
                y_aux--;
            } else {        //a esccolha atual serah Leste
                x_aux++;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    }
    else if((m<0.0) and (m>=-1.0) and (x0>x1)) {    // 6 configuracao
        dx = dx*(-1);

        //interpolacao linear em x
        float vR = (float)(cor1.R-cor0.R)/dx;
        float vG = (float)(cor1.G-cor0.G)/dx;
        float vB = (float)(cor1.B-cor0.B)/dx;
        float vA = (float)(cor1.A-cor0.A)/dx;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(x_aux > x1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Noroeste
                x_aux--;
                y_aux++;
            } else {        //a esccolha atual serah Oeste
                x_aux--;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    }
    else if((m<-1.0) and (y1<y0)) {     // 7 configuracao
        dy = dy*(-1);

        //interpolacao linear em y
        float vR = (float)(cor1.R-cor0.R)/dy;
        float vG = (float)(cor1.G-cor0.G)/dy;
        float vB = (float)(cor1.B-cor0.B)/dy;
        float vA = (float)(cor1.A-cor0.A)/dy;

        //simulando o espelhamento da reta em torno da reta x=y
        int aux = dx;
        dx = dy;
        dy = aux;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(y_aux > y1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Sudeste
                x_aux++;
                y_aux--;
            } else {        //a esccolha atual serah Sul
                y_aux--;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    }
    else if((m<-1.0) and (y1>y0)) {     // 8 configuracao
        dx = dx*(-1);

        //interpolacao linear em y
        float vR = (float)(cor1.R-cor0.R)/dy;
        float vG = (float)(cor1.G-cor0.G)/dy;
        float vB = (float)(cor1.B-cor0.B)/dy;
        float vA = (float)(cor1.A-cor0.A)/dy;

        //simulando o espelhamento da reta em torno da reta x=y
        int aux = dx;
        dx = dy;
        dy = aux;

        int alpha = dy;
        int beta = -dx;
        int d = 2*dy-dx;
        int x_aux = x0;
        int y_aux = y0;
        PutPixel(x_aux,y_aux,cor0);
        int d_old = d;
        int d_new=0;
        while(y_aux < y1) {
            if(d_old > 0) { //a esccolha anterior foi Nordeste
                d_new = d_old+alpha+beta;
            } else {     //a esccolha anterior foi Leste
                d_new = d_old+alpha;
            }
            if(d_new > 0) { //a esccolha atual serah Noroeste
                x_aux--;
                y_aux++;
            } else {        //a esccolha atual serah Norte
                y_aux++;
            }
            cor0.R+=vR;
            cor0.G+=vG;
            cor0.B+=vB;
            cor0.A+=vA;
            PutPixel(x_aux,y_aux,cor0);
            d_old = d_new;
        } // fim do while
    }
}

void DrawTriangle(int x0, int y0, int x1, int y1, int x2, int y2,
                   tCor cor0, tCor cor1, tCor cor2 ) {
    DrawLine(x0, y0, x1, y1, cor0, cor1 );
    DrawLine(x1, y1, x2, y2, cor1, cor2 );
    DrawLine(x2, y2, x0, y0, cor2, cor0 );
}

#endif // _MYGL_H_

