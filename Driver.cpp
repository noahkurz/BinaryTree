#include "iostream" 
#include "BinaryTree.hpp"
using namespace std;
int main()
{


BinaryTree* theTree = new BinaryTree(20);
theTree->add(3);
theTree->add(1);
theTree->add(4);
theTree->add(22);
theTree->add(25);







//cout << theTree->getPayload()<<"\n";
theTree->displayPostOrder();
}
