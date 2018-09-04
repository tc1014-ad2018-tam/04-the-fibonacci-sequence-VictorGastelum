/*   	
  This program will print the fibonacci sequence depending on the user input
  Autor: Victor Manuel Gastelum Huitzil
  Fecha: 03/09/18
  e-mail: a01411985@itesm.mx
*/

#include <stdio.h>

int main() {
	
	//I declare the variables
        int k;
        int num1 = 0; // The first number of the Fibonacci sequence is 0
        int num2 = 1; // The second number of the sequence is 1
        int f; 

        printf("How many numbers do you want in your Fibonacci sequence? \n");  //the user enters how big the sequence wants
        scanf("%i", &k);

        printf("The fibonacci sequence is: \n");

        // I start the loop with "for" and declare the i variable, then it will run until it have reached the limit n
        //finally it will increase by 1 each time the cycle is repeated
        for (int i=1; i<=k; i++) {
            printf("%i, ", num1);
            f=num1+num2; //Change the value with the variables by summing the variables that we stablish before
            num1=num2; // The value of num1 will pass with the values of the num2
            num2=f; //Then the value will be passed once again
        }
return 0;
}
