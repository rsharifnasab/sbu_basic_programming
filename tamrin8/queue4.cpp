#include <iostream>

const int size = 5;
char a[size];
char* r=a,*f = a;
int t=0;



int front_pos()
{
  return f-a;
}

int rear_pos()
{
  return r-a;
}



void ful_print(bool t = true)
{
  for (int i = 0; i < size; i++)
  {
    std::cerr <<(char) a[i];
  }
    std::cerr << "|" ;
    for (int i = 0; i < size; i++)
    {
      std::cerr <<(char) a[i];
    }
    std::cerr <<"\n";

    for (int i = 0; i < size; i++) {
        if ( i==front_pos() && i==rear_pos() )std::cerr <<'z';
        else if(i==rear_pos()) std::cerr <<'r';
        else if (i==front_pos()) std::cerr <<'f';
        else std::cerr <<'-';
      }


      std::cerr << "|" ;
      for (int i = 0; i < size; i++) {
          if ( i==front_pos() && i==rear_pos() )std::cerr <<'z';
          else if(i==rear_pos()) std::cerr <<'r';
          else if (i==front_pos()) std::cerr <<'f';
          else std::cerr <<'-';
        }

          std::cerr <<"\n";

}


void enqueue( char element )
{
  t++;
  *(f) = element;
  if (front_pos()+1 ==size) f=a;
  else f++;
}

char dequeue()
{
  t--;
  char* temp = r;
  if (rear_pos()+1 ==size) r=a;
  else r++;
  return *(temp);
}

void print() // ToDo
{
  for (int i = 0; i < t; i++)
  {
    char* h= r+i;
    if(h >= a + size)
      h-=size;
    std::cout << *h << " ";
    //std::cerr << "\n*a =" <<  *a << "\n";
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
      ful_print();
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
  return 0;
}
