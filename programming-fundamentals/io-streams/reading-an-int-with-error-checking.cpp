#include <iostream>

int main()
{
   // reading an int with error checking
   int i;
   while ( !std::cin ) {
      std::cin.clear();
      std::cin.ignore (256, '\n');
   }
   std::cout << "num - "<< i;
}
 
// to be more precise, clear stream up to limit of how much could be there or end of line
// std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');