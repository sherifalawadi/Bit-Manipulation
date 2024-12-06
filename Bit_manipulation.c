#include <stdio.h>
#include <stdlib.h>

void Clear_Bit(void) ;
void Set_Bit(void);
void Toggle_Bit(void);
void Read_Bit(void);

int main(){

    int type ;
    while (1){
     printf("Enter 1 to set a bit\nEnter 2 to clear a bit \n");
     printf("Enter 3 to toggle a bit\nEnter 4 to read a bit \n");
     printf("Enter 5 to exit \n");
     scanf("%d", &type);

    if (type==5)  { break ;     }
    if (type==1)  {Set_Bit();     }
    if (type==2)  {Clear_Bit();   }
    if (type==3)  {Toggle_Bit();  }
    if (type==4)  {Read_Bit();   }

    }

    return 0;
}


 void Clear_Bit(void) {

     int value ,Bit_Position ;
     printf("Enter the Integer number and the Bit Position\n");
     scanf("%d %d",&value ,&Bit_Position);

     if ( (Bit_Position < 0 ) || (Bit_Position > 31)) {
        printf("invalid Bit Position\n");
     }
     else {
     value &= ~( 1 << Bit_Position);
     printf("The value after clearing the bit %d is = %d \n" ,Bit_Position, value );
     }
 }

 void Set_Bit(void) {

     int value ,Bit_Position ;
     printf("Enter the Integer number and the Bit Position\n");
     scanf("%d %d",&value ,&Bit_Position);
      if ( (Bit_Position < 0 ) || (Bit_Position > 31)) {
        printf("invalid Bit Position\n");
     }
     else{
     value |= ( 1 << Bit_Position);
     printf("The value after setting the bit %d is = %d \n\n" ,Bit_Position, value );
     }
 }

 void Toggle_Bit(void) {

     int value ,Bit_Position ;
     printf("Enter the Integer number and the Bit Position\n");
     scanf("%d %d",&value ,&Bit_Position);
       if ( (Bit_Position < 0 ) || (Bit_Position > 31)) {
        printf("invalid Bit Position\n");
     }

     else {
            value ^= ( 1 << Bit_Position);
     printf("The value after toggling the bit %d is = %d \n" ,Bit_Position, value );
     }
 }

void Read_Bit(void){

     int value ,Bit_Position ;
     printf("Enter the Integer number and the Bit Position\n");
     scanf("%d %d",&value ,&Bit_Position);
       if ( (Bit_Position < 0 ) || (Bit_Position > 31)) {
        printf("invalid Bit Position\n");
     }
    else {
            value &= (1 << Bit_Position);
    if (value){
            printf("The bit %d is = %d \n" ,Bit_Position, 1 );
    }
    else {
        printf("The bit %d is = %d \n" ,Bit_Position, 0);
    }
    }
}
