#include "help.h"


list :: list()
{
  head = NULL;
  return;
}

list :: ~list()
{
  if(!head)
    return;

  while(head)
  {
      node * temp = head;
      head = head->next;
      delete temp;
  }

  head = NULL;
  return;

}


void list :: add()
{
  // In case the LLL is empty
  if(!head)
  {
    // allocate head pointer as a new node
    head = new node;

    // get the data from user input
    int data_holder;

    cout << "Enter data for new node" << endl;
    cin >> data_holder;
    cin.ignore(100, '\n');

    // set head's data to the user input
    head->data = data_holder;

    // set head's next pointer to NULL
    head->next = NULL;
    return;
  }


  // If the LLL has data, traverse to last node
  node * current = head;
  while(current->next)
  {
    current = current->next;
  }

  // to_add represents the new node we will attach to the end of the list
  node * to_add = new node;

  // a temporary integer to hold the user input
  int data_holder;

  cout << "Enter data for new node" << endl;
  cin >> data_holder;
  cin.ignore(100, '\n');

  to_add->data = data_holder;

  // time to attach to_add to the rest of the list
  current->next = to_add;

  // set this new node's next to NULL
  to_add->next = NULL;

  return;

}


void list :: display()
{
  if(!head)
  {
    cout << "LLL is empty" << endl;
    return;
  }

  node * current = head;

  // This traverses all the way through the list, even past the end of the LLL
  while(current)
  {
    cout << current->data << endl;
    current = current->next;
  }

  return;


}
