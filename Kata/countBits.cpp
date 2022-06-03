//Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary 
//representation of that number. You can guarantee that input is non-negative.

unsigned int countBits(unsigned long long n){
  std::string buffer; 
    buffer.reserve(std::numeric_limits<unsigned int>::digits);
    do
    {
        buffer += char('0' + n % 2);
        n = n / 2;
    } while (n > 0);
    int i = 0;
  int result = 0;
  while (buffer[i])
    {
    if (buffer[i++] == '1')
      result++;
  }
  return result;
}