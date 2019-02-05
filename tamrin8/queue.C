#include <iostream>

const int size = 5000;
char a[size];
int r=0,f = 0;


void ful_print(bool t = true)
{
  for (int i = 0; i < size; i++) {
    std::cerr <<(char) a[i];
  }
    std::cerr << "|" ;
    for (int i = 0; i < size; i++) {
      std::cerr <<(char) a[i];
    }
    std::cerr <<"\n";

    for (int i = 0; i < size; i++) {
        if ( i==f && i==r )std::cerr <<'z';
        else if(i==r) std::cerr <<'r';
        else if (i==f) std::cerr <<'f';
        else std::cerr <<'-';
      }


      std::cerr << "|" ;
                for (int i = 0; i < size; i++) {
                    if ( i==f && i==r )std::cerr <<'z';
                    else if(i==r) std::cerr <<'r';
                    else if (i==f) std::cerr <<'f';
                    else std::cerr <<'-';
              }
          std::cerr <<"\n";

}

void enqueue( char element )
{
  const int zero = 0;
//  if(   ( (f)%size) == r) { ful_print(); int temp = 1/zero; }
  a[f] = element;
  f = (f+1) % size;


}

char dequeue()
{
  int temp = r;
  r = (r+1) % size;
  return a[temp];
}

int front_pos()
{
  return f;
}

int rear_pos()
{
  return r;
}


void print() // nmeed to work
{
  //std::cout <<(char) a[i]<<" ";
  for (int i = r; i < f; i=(i+1)%size) {
    std::cout <<(char) a[i]<<" ";
  }
  std::cout << "\n";

}




int main()
{
  for (int i = 0; i < size; i++) {
    a[i]= '-';
  }
  while (1==1)
  {
    char inp;
    std::cin >> inp;

  if(inp == 'p')
  {
      print();
    //  ful_print();
  }
    else if(inp == 'e')
      {
        char c;
        std::cin >> c;
        enqueue(c);
      }
    else if (inp=='d')
        {std::cout << dequeue()<< "\n";}
    else if (inp=='f')
        {std::cout << front_pos()<< "\n";}
    else if (inp=='r')
        {std::cout << rear_pos()<< "\n";}
    else if (inp=='q')
      return 0;


  }


  //std::cout << std::endl;




  return 0;
}
