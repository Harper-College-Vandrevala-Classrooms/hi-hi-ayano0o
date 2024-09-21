#include <cstring>
#include <cctype>

using namespace std;

int strcmp_case_insensitive(const char *str1, const char *str2) {
   while (*str1 && *str2) {
     if (tolower(*str1) != tolower(*str2)) {
       return (tolower(*str1) < tolower(*str2)) ? -1 : 1;
     }
     str1++;
     str2++;

 }
 
 if (*str1 == '\0' && *str2 == '\0') {
    return 0;
 } else if (*str1 == '\0') {
    return -1;
 } else {
    return 1;
 }


}
