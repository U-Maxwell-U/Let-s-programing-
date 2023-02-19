#include <iostream>

void include3(int i, int original)
{
    int x = i;
    if (x % 10 == 3)
    {
        std::cout << " " << original;
        return;
    }
  x /= 10;
  if ( x ) include3(x,original);
}
void checknum(int i){
  int x = i;
  if (x % 3 == 0)
  {
        std::cout << " " << x;
        return;
  }
      include3(x,i);
}

int main(){
    int a;
    std::cin >> a;
    for (int i = 1; i <= a;i++)
        checknum(i);

    std::cout <<std::endl;


}
