/* #include <iostream>
#include "Node.hh"

//El nodo guarda datos y enlaces, un nodo es una estructura con un apuntador
//Dijktra

int main()
{
    Data* data1{new Data(1)};
    std::cout <<"data valu">>data1->GetValue()<<std::endl;
    std::cin.get();
    return 0;
}
*/

#include<iostream>
#include "Node.hh"

int main()
{
  Data* data1{new Data(1)};
  Data* data2{new Data(2)};
  Data* data3{new Data(3)};
  Data* data4{new Data(4)};
  Data* data5{new Data(5)};

  Node* node1{new Node(data1)};
  Node* node2{new Node(data2)};
  Node* node3{new Node(data3)};
  Node* node4{new Node(data4)};
  Node* node5{new Node(data5)};

  node1->nextNode = node2;
  node2->nextNode = node3;
  node3->nextNode = node4;
  node4->nextNode = node5;

  Node* currentNode{node1};

  while (currentNode)
  {
    std::cout << "Node : " << node1->GetData()->GetValue() << std::endl;
  }
  

  //std::cout << "node1: " << node1->GetData()->GetValue() << std::endl;

  //std::cout << "data value: " << data1->GetValue() << std::endl;
  std::cin.get();
  return 0;
}