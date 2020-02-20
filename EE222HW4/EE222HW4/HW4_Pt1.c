//
//
//  EE222HW4
//
//  Created by Tyler Plihcik on 2/20/20.
//  Copyright © 2020 Tyler Plihcik. All rights reserved.
//

#include <stdio.h>


//function protoype
double degreeToRadians(int degree) ;


int main(  )
{
    
    //declare variables
    double degree ;
    double result ;
    

    // get degree input from user
    printf( "Enter Degree: " ) ;
    scanf( "%lf" , &degree ) ;
    
    //check to make sure user input is within acceptable range
    if( degree >= -180 && degree <= 180 )
    {
        //call calculation function
        result = degreeToRadians( degree ) ;
        
        //print the result
        printf( "%lf degrees is equal to %lf radians\n\n " , degree , result ) ;
    }
    
    //if the user input was valid..
    else
    {
        //repromt them for a degree in the specified range
        printf( "Please Enter a value between -180 and 180: " ) ;
        scanf( "%lf" , &degree ) ;
        
        //calculate the result
        result = degreeToRadians( degree ) ;
        
        //print the result
        printf( "%lf degrees is equal to %lf radians\n\n " , degree , result ) ;

    }
    
    
    
    return 0;
}


/*
 Funciton: degreesToRadians
 Algorithm: coverts a degree value to a radian value
 */
double degreeToRadians(int degree)
{
    //declare vars
    double pi = 3.14 ;
    
    double radians = 0.0 ;
    
    //degree to radian conversion
    radians = degree * ( pi / 180 ) ;
    
    //return converted value
    return radians ;
}
