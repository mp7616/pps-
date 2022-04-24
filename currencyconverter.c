#include <stdio.h>
int main() {
    int currencyChoice;
    float INRtoUSD;//US dollar
    float INRtoEURO ; // EURO;
    float INRtoHKD;//Hong Kong dollar
    float INRtoCAD;//Canadian dollar
    float INRtoJPY; //Japanese yen ;
    float INRtoAUD;//Australian dollar
    float INRtoRMB; // Renminbi;
    float INRtoGBP;//great britain pound   
  
 

  printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for IND to USD. \n");
      printf("Enter 2 for IND to Euro. \n");
      printf("Enter 3 for IND to HKD. \n");
      printf("Enter 4 for IND to CAD. \n");
      printf("Enter 5 for IND to JPY. \n");
      printf("Enter 6 for IND to AUD. \n");
      printf("Enter 7 for IND to RMB. \n");
      printf("Enter 8 for IND to GBP. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 2){
          printf("Please enter the IND amount: \n");
          scanf("%f",&INRtoEURO);
          INRtoEURO = INRtoEURO * 0.01;
          printf("Euro: %.2f",INRtoEURO); // %.2f = rounds the float to only 2 decimal places;
     }
       else if(currencyChoice ==5 ){
          printf("Please enter the IND amount: \n");
          scanf("%f",&INRtoJPY);
          INRtoJPY = INRtoJPY * 1.68;
          printf("JPY: %.2f",INRtoJPY);
      }
    else if(currencyChoice == 1){
          printf("Please enter the INR amount: \n");
          scanf("%f",&INRtoUSD);
          INRtoUSD = INRtoUSD*0.01308 ;
          printf("USD: %.2f",INRtoUSD);
      }else if(currencyChoice ==3 ){
          printf("Please enter the INR amount: \n");
          scanf("%f",&INRtoHKD);
          INRtoHKD = INRtoHKD*0.10260;
          printf("HKD: %.2f",INRtoHKD);
      }else if(currencyChoice ==4 ){
          printf("Please enter the INR amount: \n");
          scanf("%f",&INRtoCAD);
          INRtoCAD = INRtoCAD *0.01662 ;
          printf("CAD: %.2f",INRtoCAD);
      }else if(currencyChoice == 6){
          printf("Please enter the INR amount: \n");
          scanf("%f",&INRtoAUD);
          INRtoAUD = INRtoAUD *0.01805 ;
          printf("AUD: %.2f",INRtoAUD);
      }else if(currencyChoice == 7){
          printf("Please enter the INR amount: \n");
          scanf("%f",&INRtoRMB);
          INRtoRMB = INRtoRMB*0.09 ;
          printf("RMB: %.2f",INRtoRMB);
      }else if(currencyChoice ==8 ){
          printf("Please enter the INR amount: \n");
          scanf("%f",&INRtoGBP);
          INRtoGBP= INRtoGBP *0.01 ;
          printf("GBP: %.2f",INRtoGBP);
      }
      
      return 0;

}