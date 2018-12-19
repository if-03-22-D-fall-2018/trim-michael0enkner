/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <stdio.h>
 #include <string.h>

 void trim(const char* source, char* trimmed_string)
 {
   if (strcmp(source,"") == 0)
    {
      strcpy(trimmed_string,"");
    }
    else
    {
      int beginning = 0;
      int count = 0;
      int ending = strlen(source)-1;
      while (source[beginning] == ' ')
      {
        beginning++;
      }
      while(ending >= beginning && source[ending] == ' ')
      {
        ending--;
      }
      for (int i = beginning; i <= ending; i++) {
        trimmed_string[count] = source[i];
        count++;
      }
  }
 }
