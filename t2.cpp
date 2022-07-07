 #include <iostream>
  using namespace std;
  
  class Date
  {
 
  private:
    int year;
    int month;
    int day;
  };
  
  void p()
  {
    Date date;
    date.year = 2000;
    cout << date.year;
  }
  
  int main()
  {
    p();
    return 0;
  }