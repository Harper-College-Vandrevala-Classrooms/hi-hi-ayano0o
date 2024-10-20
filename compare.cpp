#include <iostream>
#include "compare.hpp"

using namespace std;

   void run_test_case() {
 
     const char *test_cases[][2]= {
       {"Hello", "HELLO"},
       {"byE", "BYe"},
       {"Apple","Apples"},
       {"banana$","bananas"},
       {"apple","@pple"},
       {"Long","John"},
       {"", "Test"},
       {"test",""},
       {"Hold","Hald"},
       {"Big1","B1g"},
       {"E242","D243"},
       {"Hello world", "HELLO WORLD"},  
       {"Little ceasars", "LITTLECEASARS"},   
       {"A C D C", "acdc"},              
       {"ACDC", "a c d c"}   
   };
   
   int num_cases = sizeof(test_cases) / sizeof (test_cases[0]);

   for (int i=0; i < num_cases; i++) {
       const char *str1 = test_cases[i][0];
       const char *str2 = test_cases[i][1];
    
      int result = strcmp_case_insensitive(str1,str2);
      if (result == 0) {
           cout << "The comparison of "<< str1 <<" equals "<< str2 <<" the value returned is 0." << endl;;
      }  else if ( result < 0) {
           cout << "The comparison of "<< str1 <<" is less than "<< str2 <<" the value returned is -1." << endl;
      }  else {
           cout << "The comparison of "<< str1 <<" is greater than "<< str2 <<" the value returned is 1." << endl;
      }
    
     result = strcmp_case_insensitive(str1, str2, true, 4);
     if (result == 0) {
            cout << "The comparison of " << str1 << " equals " << str2 << " (spaces skipped, 4 compared char), returned 0." << endl;
        } else if (result < 0) {
            cout << "The comparison of " << str1 << " is less than " << str2 << " (spaces skipped, 4 compared char), returned -1." << endl;
        } else {
            cout << "The comparison of " << str1 << " is greater than " << str2 << " (spaces skipped, 4 compared char), returned 1." << endl;
        }
    }
   
}

int main() {
  run_test_case();
  return 0;
}
