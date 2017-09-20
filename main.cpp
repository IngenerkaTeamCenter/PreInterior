#include <iostream>
#include "TXLib.h"
using namespace std;


int main()
    {

    char str[20];
    cout << "Выберите квартиру\n1-большая\n2-средняя\n3-маленькая" << endl;
    cin >> str;

    HDC background_FromTXLibHelp;

    if (strcmp(str, "1") == 0) {
            txCreateWindow(1000, 700);
       background_FromTXLibHelp = txLoadImage ("b.bmp");
           txBitBlt(txDC(), 0, 0, 1000, 700, background_FromTXLibHelp, 0, 0);


    } else if (strcmp(str, "2") == 0){
            txCreateWindow(1000, 700);
       background_FromTXLibHelp = txLoadImage ("m.bmp");
           txBitBlt(txDC(), 0, 0, 1000, 700, background_FromTXLibHelp, 0, 0);


    } else if (strcmp(str, "3") == 0){
            txCreateWindow(1000, 700);
       background_FromTXLibHelp = txLoadImage ("s.bmp");
           txBitBlt(txDC(), 0, 0, 1000, 700, background_FromTXLibHelp, 0, 0);
    }
    int xq;//вопрос, куда поставить шкаф
    printf("Выберите расположение шкафа\n1-левый бок\n2-середина\n3-правый бок\n");
    scanf("%d", &xq);

    if(xq == 1){
        int x  = 160;
        int y  = 480;
        int x2 = 310;
        int y2 = 440;
        txSetColour(TX_GREEN);
        txSetFillColour(TX_GREEN);
        txRectangle(x, y, x2, y2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(x, y, x2, y2, "шкаф");
    }
    if(xq == 2){
        int x  = 360;
        int y  = 480;
        int x2 = 510;
        int y2 = 440;
        txSetColour(TX_GREEN);
        txSetFillColour(TX_GREEN);
        txRectangle(x, y, x2, y2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(x, y, x2, y2, "шкаф");
    }
    if(xq == 3){
        int x  = 560;
        int y  = 480;
        int x2 = 710;
        int y2 = 440;
        txSetColour(TX_GREEN);
        txSetFillColour(TX_GREEN);
        txRectangle(x, y, x2, y2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(x, y, x2, y2, "шкаф");
    }
    int xw;//, вопрос, куда поставить ванну
    printf("Выберите расположение ванной\n1-левый бок\n2-середина\n3-правый бок\n");
    scanf("%d", &xw);

    if(xw == 1){

        int yv = 380;
        int xv = 240;
        int xv2= 440;
        int yv2= 440;
        txSetColour(TX_LIGHTBLUE);
        txSetFillColour(TX_LIGHTBLUE);
        txRectangle(xv, yv, xv2, yv2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(xv+50, yv-20, xv2-40, yv2, "ванная");
    }

    if(xw == 2){

        int yv = 380;
        int xv = 440;
        int xv2= 640;
        int yv2= 440;
        txSetColour(TX_LIGHTBLUE);
        txSetFillColour(TX_LIGHTBLUE);
        txRectangle(xv, yv, xv2, yv2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(xv+50, yv-20, xv2-40, yv2, "ванная");
    }

    if(xw == 3){

        int yv = 380;
        int xv = 640;
        int xv2= 840;
        int yv2= 440;
        txSetColour(TX_LIGHTBLUE);
        txSetFillColour(TX_LIGHTBLUE);
        txRectangle(xv, yv, xv2, yv2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(xv+50, yv-20, xv2-40, yv2, "ванная");
    }

        txDeleteDC (background_FromTXLibHelp);


    return 0;

    }
