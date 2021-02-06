#include <iostream>
#include <iomanip>
 
int main()
{
   char buffer[256];
 
   // read white-space delimted word
   std::cin >> buffer;
 
   // as above with buffer overflow check
   std::cin >> std::setw(2) >> buffer;
 
   // reads until buffer full or delimiter found or end-of-file
   std::cin.getline (buffer, sizeof(buffer));
 
   // as above but specify delimiter - reads & discards delimiter
   std::cin.getline (buffer, sizeof(buffer), '.');
 
   // as above - leaves delimiter in stream
   std::cin.get (buffer, sizeof(buffer), '.');
 
   // read & parse by character, reads
   for (int i=0; i<sizeof(buffer); ++i)
      std::cin.get(buffer[i]);
}