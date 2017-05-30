#include <iostream>
#include "itemtype.h"
using namespace std;

ItemType::ItemType()
{
  value = 0;
}

void ItemType::Initialize(int number)
{
  value = number;
}

void ItemType::Print() const
{
  cout << value << " ";
}
