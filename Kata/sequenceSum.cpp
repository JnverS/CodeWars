//Your task is to make function, which returns the sum of a sequence of integers.
//The sequence is defined by 3 non-negative values: begin, end, step (inclusive).
//If begin value is greater than the end, function should returns 0

int sequenceSum(int start, int end, int step)
{
  int sum = 0;
  if (end < start) return 0;
  for (int i = start; i <= end; i+=step)
    {
    sum +=i;
  }
  return sum;
}