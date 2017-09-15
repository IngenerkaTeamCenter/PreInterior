#include <iostream>
#include "TXLib.h"
using namespace std;


int main()
    {

    char str[20];
    cout << "¬Â‰ËÚÂ ˆËÙÛ\n" << endl;
    cin >> str;

    HDC background_FromTXLibHelp;

    if (strcmp(str, "1") == 0) {
            txCreateWindow(800, 800);
       background_FromTXLibHelp = txLoadImage ("1.bmp");
           txBitBlt(txDC(), 0, 0, 800, 800, background_FromTXLibHelp, 0, 0);


        txSetColour(TX_GREEN);
        txSetFillColour(TX_GREEN);
        txRectangle(460, 580, 510, 740);
                txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(410, 570, 530, 620, "ÿ ¿‘");

        txSetColour(TX_RED);
        txSetFillColour(TX_RED);
        txRectangle(540, 680, 740, 740);
                txSetFillColour(TX_ORANGE);
        txSetColour(TX_ORANGE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(590, 660, 700, 740, " –Œ¬¿“‹");

        txSetColour(TX_WHITE);
        txSetFillColour(TX_WHITE);
        txRectangle(40, 500, 105, 550);
        txRectangle(40, 580, 115, 740);
        txRectangle(135, 580, 200, 610);

        txDeleteDC (background_FromTXLibHelp);

    } else if (strcmp(str, "2") == 0){
            txCreateWindow(820, 579);
       background_FromTXLibHelp = txLoadImage ("2.bmp");
           txBitBlt(txDC(), 0, 0, 820, 579, background_FromTXLibHelp, 0, 0);

        txDeleteDC (background_FromTXLibHelp);

    } else if (strcmp(str, "3") == 0){
            txCreateWindow(500, 590);
       background_FromTXLibHelp = txLoadImage ("3.bmp");
           txBitBlt(txDC(), 0, 0, 500, 590, background_FromTXLibHelp, 0, 0);

        txDeleteDC (background_FromTXLibHelp);
    }

    return 0;

    }
