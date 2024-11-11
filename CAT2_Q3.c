//program for hours worked in a week and the hourly wage

int main() {

   float hoursworked, hourlywage, grosspay, overtime, regularpay, overtimepay, taxes, netpay;

//prompt the user

printf("Enter hours worked in a week:");

scanf("%f",&hoursworked);

printf("Enter hourly wage:");

scanf("%f",&hourlywage);



//calculate wages

if (hoursworked>40){

         overtime= hoursworked-40;

         regularpay= 40 *hourlywage;

         overtimepay= overtime * hourlywage*1.5;

         grosspay = regularpay + overtimepay;

    } else {

         overtime=0;

         regularpay=hoursworked *hourlywage;

         grosspay=regularpay;

         overtimepay=0;

}

//taxes

if (grosspay <= 600) {

     taxes = grosspay * 0.15 + (grosspay - 600)*0.20;

}else {

    taxes=600*0.15 + (grosspay - 600) * 0.20;

}

//netpay

netpay = grosspay - taxes;

//results

printf("Regular Pay:$%.2f\n",regularpay);

printf("Overtime Pay:$%.2f\n",overtimepay);

printf("Grosspay:$%.2f\n",grosspay);

printf("Taxes:$%.2f\n",taxes);

printf("Net pay:$%.2f\n",netpay);

return 0;

}