
// LAURA 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PATH_MAX 2500

int main()
{  system( " clear " );

   char str1[200], str2[300];
   int gameover = 0;
   while( gameover == 0 )
   {
     printf("Please enter your command or name: ");
     scanf("%s", str2);

     if ( strcmp( str2 , "quit" ) == 0 ) gameover = 1;

     else 
     {

      if ( strcmp( str2 , "john" ) == 0 )
       printf( "HELLO MY FRIEND \n ");
     else
       printf( " I DO NOT KNOW YOU \n" );

     }
     printf( "\n" );
 
  }
  return 0;
}



   
