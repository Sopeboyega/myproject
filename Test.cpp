#include <iostream>
#include <stdlib.h>

int main() {

  double number;


std::cout << "Pls input a number of your choice == "   "\n";



std::cin >> number;

if(number > 11) {

while (number > 11 || number < 1 ) {


std::cout << " Invalid Input!!!.  Pls input a number between 1- 11\n\n";


std::cin >> number;
}
std::cout << " This number is accepted 😁 \n\n";

for (int i = 0; i < number; i++) {
        
        std::cout << rand()%10+1 << " ";
  

}

}

else if(number < 1) {



while (number < 1 || number > 11 ) {


std::cout << "This number is not allowed , Pls input a number between 1-11\n\n";


std::cin >> number;
}
std::cout << " This number is accepted 😁\n\n";

for (int i = 0; i < number; i++) {
        
        std::cout << rand()%10+1 << " ";
  
}


}

else {


std::cout << " This number is accepted 😁 \n\n";

for (int i = 0; i < number; i++)
        
        std::cout << rand()%10+1 << " ";
  
   


}

}







