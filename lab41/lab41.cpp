// Alekzandr Zablockis
// 11/4/17
// Desc

#include <iostream>
using namespace std;


class ArrayTools
{
 public:
 int Print();
 int Find_min();
 int Find_max();
 int Find_sum();
 int Num_even_odd();
 int Search(int x);
 int Is_sorted();
 private:
 int i = 0;
 int min_val = 0;
 int max_val = 0;
 int sum = 0;
 int total_even = 0;
 int total_odd = 0;
 int specific_value = 0;
 int flag = 0;
 int flag_2 = 0;        // Put all above in functions or default constructor
 int my_array[10] = {1,2,3,4,5,6,7,8,9,10}; // should be int my_array[]
};

int ArrayTools::Print()
{
 for (i = 0; i < 10; ++i)
 {
  cout << my_array[i] << ", ";
 }
}

int ArrayTools::Find_min()
{
 min_val = my_array[0];
 for (i = 0; i < 10; ++i)
 {
  if (min_val > my_array[i])
  {
   min_val = my_array[i];
  }
 }
 cout << min_val;
}

int ArrayTools::Find_max()
{
 min_val = my_array[0];
 for (i = 0; i < 10; ++i)
 {
  if (max_val < my_array[i])
  {
   max_val = my_array[i];
  }
 }
 cout << max_val;
}

int ArrayTools::Find_sum()
{
 for (i = 0; i < 10; ++i)
 {
  sum = sum + my_array[i];
 }
 cout << sum;
}

int ArrayTools::Num_even_odd()
{
 for (i = 0; i < 10; ++i)
 {
  if (my_array[i] % 2 == 1)
  {
   total_odd = total_odd + 1;
  }
  else
  {
  total_even = total_even + 1;
  }
 }
 cout << "Total Even: " << total_even << endl << "Total Odd: " << total_odd << endl;
}

int ArrayTools::Search(int x)
{
 specific_value = x;
 for (i = 0; i < 10; ++i)
 {
  if (specific_value == my_array[i])
  {
   specific_value = my_array[i];
   flag = 1;
   break;
  }
 }
 if (flag == 1)
 {
  cout << specific_value;
 }
 else 
 {
  cout << "-1";
 }
}

int ArrayTools::Is_sorted()
{
 int flag1 = 1;
 for(i = 0; i < 10; ++i)
 {
  if (my_array[i] > my_array[i+1])
  {
   cout<<my_array[i]<<" i: " <<i<<endl;
   flag1 = 2;
  }
 }
 
 cout<<flag1<<endl;
 if (flag1 == 1)
 {
  cout << "Yes";
 }
 else if (flag1 == 2)
 {
  cout << "No";
 }
}


int main() 
{
 ArrayTools a;
 
 a.Is_sorted();
 
 
 
 
 
}