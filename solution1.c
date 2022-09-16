
#include "upper_to_lower.h"
char uppercase_to_lowercase(char ch)
{

   if(ch < 'A' || ch > 'Z')
   {
        return '*';
   }
   else{

        return ch+32;
   }

}
