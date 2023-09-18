//
//  main.c
//  asal_mı_degil_mi ( prime or not? )
//
//  Created by Emre Dikici on 18.09.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int number = 0;
    int i = 0;
    char control = 'C';
        
    // I took a number from user
    printf("\n Please enter a number : ");
    scanf("%i",&number);
    
    
    for(i=2;i<number;i++)
    {
     if( number % i == 0 )
     {
      control = 'X'; // I add a control code. If control equals x number is not prime number
      break;
     }
    }
    
   
    // prime number examples: 2,3,5,7,11..
    // even number examples : 2,4,6,8,10,12..
    // odd number examples : 1,3,5,7,9,11,13..
    // Control code is here.
    if( control == 'C' ){
        printf("\nThe number %i is a prime number.",number);
    }else if(control == 'X'){
        printf("\nThe number %i is not a prime number.",number);
        if(number % 2 == 0){
            printf("\nThe number is an even number that is not prime.\n");
        }else{
            printf("\nYour number is an odd number that is not prime.\n");
        }
    }else{
        printf("\nPlease check your entry");
    }
    
    return 0;
}
