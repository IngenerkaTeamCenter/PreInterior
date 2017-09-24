#include <iostream>
#include "TXLib.h"
using namespace std;

void drawCupboard(int x, int y,int x2,int y2){
        txSetColour(TX_GREEN);
        txSetFillColour(TX_GREEN);
        txRectangle(x, y, x2, y2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(x, y, x2, y2, "шкаф");
}

void drawBathroom(int xv,int yv,int xv2,int yv2){
        txSetColour(TX_LIGHTBLUE);
        txSetFillColour(TX_LIGHTBLUE);
        txRectangle(xv, yv, xv2, yv2);
        txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(xv+50, yv-20, xv2-40, yv2, "ванна€");
}
int main()
    {

    char str[20];
    cout << "¬ыберите квартиру\n1-больша€\n2-средн€€\n3-маленька€" << endl;
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
    printf("¬ыберите расположение шкафа\n1-левый бок\n2-середина\n3-правый бок\n");
    scanf("%d", &xq);

    if(xq == 1){
        drawCupboard(160, 480, 310, 440);
    }
    if(xq == 2){
        drawCupboard(360, 480, 510, 440);
    }
    if(xq == 3){
        drawCupboard(560, 480, 710, 440);
    }
    int xw;//, вопрос, куда поставить ванну
    printf("¬ыберите расположение ванной\n1-левый бок\n2-середина\n3-правый бок\n");
    scanf("%d", &xw);

    if(xw == 1){
        drawBathroom(240, 380, 440, 440);
    }

    if(xw == 2){
        drawBathroom(440, 380, 640, 440);
    }

    if(xw == 3){
        drawBathroom(640, 380, 840, 440);
    }

        txDeleteDC (background_FromTXLibHelp);

    return 0;

    }
