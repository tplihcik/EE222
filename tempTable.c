// headers
#include <stdio.h>

//Version 2


//prototypes
void calcTemp() ;


//Driver Function
int main()
{
	calcTemp() ;  
}

//Helper funciton to calculate the temperatures, and print them to the user.
void calcTemp()
{
	int farenheight = 0 ;
	int celsius ; 
	int step = 20 ;
	int upperLimit = 300 ; 

	while( farenheight <= upperLimit )
	{
		celsius = ( 5 * ( farenheight - 32 ) / 9 ) ;
			
		printf( "%d \t %d\n" , farenheight , celsius ) ; 
		
		farenheight += step ;  
	} 
}












//Version 1
/*
int main()
{
	int farenheight = 0 ;
	int celsius ; 
	int step = 20 ;
	int upperLimit = 300 ; 

	while( farenheight <= upperLimit )
	{
		celsius = ( 5 * ( farenheight - 32 ) / 9 ) ;
			
		printf( "%d \t %d\n" , farenheight , celsius ) ; 
		
		farenheight += step ;  
	} 

}

*/


