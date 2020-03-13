//
//  main.c
//  EE222HW6
//
//  Created by Tyler Plihcik on 3/12/20.
//  Copyright © 2020 Tyler Plihcik. All rights reserved.
//

#include <stdio.h>

/*
 Problem 7: Write a function that returns the largest value stored in an array of int:
 { 7 , 25 , -30 , 4 , 12 , 6 , 17 , -8 , 0 , 10 }
 */

int main()
{
    //declare the array
    int array[] = { 7 , 25 , -30 , 4 , 12 , 6 , 17 , -8 , 0 , 10 } ;

    //declare variables to find the arraySize of the array
    int arraySize ;
    int placeHolder ;
    
    int index ;
    int largestElement  = array[ 0 ] ;
    
    
    /*
    calculate the arraySize of the array by using sizeof
    get the memory size of the array, and divide by
    the size of type int
    */
    placeHolder = sizeof( array ) ;
    
    arraySize = placeHolder / sizeof( int ) ;
    
    //diagnostic display
    printf( "The size of the array is: %d\n" , arraySize ) ;

    //loop through array from index 1 to size of array
    for( index = 1 ; index < arraySize ; index++ )
    {
        //if the array at the index is greater than the largest element
        if( array[ index ] > largestElement )
        {
            //set the new largest element of the array to array at index
            largestElement = array[ index ]  ;
        }
    }
    
    //print largest element in array
    printf( "The largest element in the array is: %d\n" , largestElement ) ;
    
    //return largest element in array
    return largestElement ;
}
