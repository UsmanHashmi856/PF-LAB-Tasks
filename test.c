
#include<stdio.h>
int main() {
    int salary, taxrate, resalary, tax = 0;
    printf("Enter salary: ");
    scanf("%d", &salary);
    printf("Enter tax rate: ");
    scanf("%d", &taxrate);
    tax=(salary*taxrate)/100;
    resalary=salary-tax;
    printf("Your tax is: %d \n",tax);
    printf("Your remaining salary is: %d \n",resalary);
    return 0;
}

#include <stdio.h>
int main() {
    float fuelavg, totalfuel, totalcost = 0;
    printf("Enter the car's fuel average (must be positive): ");
    scanf("%f", &fuelavg);
    if (fuelavg <= 0) {
        printf("Fuel average must be positive.\n");
        return 1;
    }
    totalfuel = (1207*2)/fuelavg;
    totalcost = (1207/fuelavg)*118 + (1207/fuelavg)*123;
    printf("Total fuel: %f \n", totalfuel);
    printf("Total cost: %f \n", totalcost);
    return 0;
}

#include <stdio.h>
int main() {
    float interest,rate,principal,time = 0;
    printf("Enter the principle price (100-1,000,000): ");
    scanf("%f", &principal);
    printf("Enter the Rate of Interest (5-10 percent): ");
    scanf("%f", &rate);
    printf("Enter the Time Period (1-10 years): ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest: %f \n", interest);
    return 0;
}

#include <stdio.h>
int main() {
    float gradient = 0.0;
    float x1 = 5.0, y1 = 4.0, x2 = 3.0, y2 = 2.0;
    gradient = (y2 - y1) / (x2 - x1);
    printf("%.3f\n", gradient);
    return 0;
}


