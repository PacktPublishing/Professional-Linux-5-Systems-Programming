#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>

void main()
  {
    struct passwd *pw;
    char    buf[80];

    setpwent( );
    while( gets( buf ) != NULL ) {
      if( ( pw = getpwnam( buf ) ) != ( struct passwd * )0 ) {
        printf( "Valid login name is: %s\n", pw->pw_name );
      } else {
        setpwent( );
        while( ( pw=getpwent( ) ) != ( struct passwd * )0 )
          printf( "%s\n", pw->pw_name );
      }
    }
    endpwent();
  }
