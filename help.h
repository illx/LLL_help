#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
struct node
{
  int data;
  node * next;
};

class list
{
  public:
    list();
    ~list();

    void add();
    void display();
  private:
    node * head;
};
