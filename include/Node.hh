/* #pragma once
#include "Data.hh"

class Node
{
private:
  Data* data; //Eso guarda lo que sea que tiene el nodo
  Node* nextNode; //Apuntador
public:
  Node(Data*& data);
  ~Node();
  Data* GetData()
};
*/

#pragma once
#include "Data.hh"

class Node
{
private:
  Data* data{nullptr};
public:
  Node* nextNode{nullptr};
  Node(Data*& data);
  ~Node();
  Data* GetData() const;
};


