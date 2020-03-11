#include "help.h"

int main()
{
  list the_list;
  char response = 'y';


  // keep adding to the LLL until user enters "n"

  while(response == 'y')
  {
    the_list.add();
    the_list.display();

    cout << "Go again? y/n" << endl;
    cin >> response;
    response = tolower(response);
    cin.ignore(100, '\n');
  }

  cout << "Final LLL" << endl << endl;
  the_list.display();

  return 0;
}
