#include <cstring>
#include <cctype>

using namespace std;

int strcmp_case_insensitive(const char *str1, const char *str2, bool skipSpaces = false, int maxChar = -1) {
  int compareChar = 0;
  
   while (*str1 && *str2) {
     
     if (skipSpaces) {
        while (*str1==' ')str1++;
        while (*str2==' ')str2++;
     }
     
     if (tolower(*str1) != tolower(*str2)) {
       return (tolower(*str1) < tolower(*str2)) ? -1 : 1;
     }
     str1++;
     str2++;
     compareChar++;

 }
 
    if (maxChar > 0 && compareChar >= maxChar) {
        return 0;
    }

    if ((maxChar == -1 || compareChar < maxChar) && (*str1 || *str2)) {
        return (*str1 == '\0') ? -1 : 1;
    }
 
 if (*str1 == '\0' && *str2 == '\0') {
    return 0;
 } else if (*str1 == '\0') {
    return -1;
 } else {
    return 1;
 }


}
