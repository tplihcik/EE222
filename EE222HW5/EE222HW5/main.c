//
//  numberGuesser
//
//  The user of the program will pick a number,
//  between 0 and 1000, inclusive.
//  The program will ask a series of yes / no questions
//  and in no more than 10 questions, guess the number.
//
//  EE222HW5
//
//  Created by Tyler Plihcik on 2/21/20.
//  Copyright © 2020 Tyler Plihcik. All rights reserved.
//

#include <stdio.h>

int main(  )
{
    
    printf( "Pick a number and I will guess it!\n\n " ) ;
    
    // ask if less than - if yes then subtract range value, if no, then add range value, range is cut in half
    //every loop, starting at 1000 / 2 = 500 / 2 = 250
    
    //midpoint variable is updated every time a question is answered to narrow the range
    double midpoint = 500 ;
    
    
    //required to put in constant for 1000 by HW specs
    const int MAX = 1000 ;
    
    //the range variable is used to add or subtract to the midpoint after every question based off of the answer
    double range = 250;
    
    //counter variable for the for loop
    int counter ;
    
    //variable to store the answer to each quesiton (y or n)
    char answer ;
    
    //further variable for assignment once the number has been guessed so it can be printed, mainly for //readablilty
    int result ;
    
    
    //master loop - to execute no more than 10 times
    for( counter = 0 ; counter < 10 ; counter++ )
    {
        //ask the question, get the answer, and omit the return character with getchar()
        printf( "Is your number less than %3.0f? (Answer y / n)\n" , midpoint ) ;
        scanf( "%c" , &answer ) ;
        getchar(  ) ;
        
        //if the answer is n, then we will update the midpoint by adding the range to it
        if( answer == 'n' )
        {
            midpoint = ( midpoint + range) ;
        }
        //else if the answer is y we will update the midpoint by subtracting the range from it
        else if( answer == 'y' )
        {
            midpoint = ( midpoint - range) ;
        }
        //edge case if the user enters an invalid character (anything other than y or n)
        else
        {
            printf("\nEnter either y or n or ELSE");
            counter--;
        }
        
        //this if else to fix the an off by one error I was getting with the range, due to the computer rounding
        if( range == 1 && answer == 'n' )
           {
               result = midpoint - 1 ;
               break ;
           }
        else if( range == 1 && answer == 'y' )
        {
            result = midpoint + 1 ;
            break ;
            
        }
        
        //finaly, continuously decrement our range to narrow the possible answers
        range /= 2 ;
        
       
        
    }
    
    //assign the result to the midpoint since that has now become our answer
    result = midpoint ;
    
    //display the answer to the user
    printf( "Your number is %d\n" , result ) ;

    //return 0 upon successful program execution
    return 0;
}
