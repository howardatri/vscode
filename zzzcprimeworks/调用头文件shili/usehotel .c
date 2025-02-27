#include<stdio.h>
#include "hotel.h"
int menu(void);
int getnights(void);
void showprice(double rate,int nights);
int main(void){
    int nights;
    double hotelrate;
    int code;
    while((code = menu())!=QUIT){
        switch(code)
        {
            case 1: hotelrate = HOTEL1;
            break;
            case 2: hotelrate = HOTEL2;
            break;
            case 3:hotelrate =HOTEL3;
            break;
            case 4 : hotelrate=HOTEL4;
            break;
            default:hotelrate = 0.0;
            printf("oops!\n");
            break;

        }
        nights = getnights();
       showprice(hotelrate,nights);

    }
    printf("thank you and goodebye\n");
    return 0; 
}