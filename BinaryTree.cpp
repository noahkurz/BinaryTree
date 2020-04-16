#include "BinaryTree.hpp"
#include "iostream"
using namespace std;

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild =0;
    this->rightChild =0;

}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        if(!this-> leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }

    }
    else
    {
        if(!this-> rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        }
        
    }
    
}
void BinaryTree::displayInOrder()
{
    if(this->leftChild->leftChild)
    {
        this->leftChild->displayInOrder();
        cout << this-> payload << "\n";

         

    }
    else if(this->leftChild)
    {
    cout << this -> leftChild ->payload << "\n";
    cout << this->payload <<"\n";
    if(this->rightChild)
    {
        cout << this ->rightChild ->payload << "\n";
    }
    }
    if(this->rightChild)
    {
        if(this->rightChild-> leftChild)
        {
            this->rightChild->displayInOrder();
            //cout << this->rightChild->payload << "\n";
        }
        
        
    }
    
    

}

void BinaryTree::displayPreOrder()
{
    /*
    cout << this->payload << "\n";
    cout << leftChild->payload << "\n";
    cout << rightChild->payload << "\n";
    //basic logic of what preorder has to do,
    // it has to print self,left,right. 
    */
   //we will start by writing the case of no children. 
   if(!leftChild)
   {
       if(!rightChild)
       {
           cout << this->payload <<"\n";
           //if you have no children and the tree is 
           //a single child then print yourself
       }
       else 
       {
           //right DOES exist 
           cout << this->payload << "\n";
           this->rightChild->displayPreOrder();
       }
   }
   else
   {

       //Left DOES exist 
       if(!rightChild)
       {
           //right does NOT exist 
       cout << this->payload <<"\n";
       this->leftChild->displayPreOrder();
       }
       else
       {
           //BOTH right and left child exist 
           cout << this->payload << "\n";
           this->leftChild->displayPreOrder();
           this->rightChild->displayPreOrder();
       }
       

   }
}
void BinaryTree::displayPostOrder()
{
    /*
    cout << this->leftChild->payload << "\n";
    cout << this->rightChild->payload << "\n";
    cout << this->payload << "\n";
    //this is the base case of this problem 
    //the hard part is that we have to traverse
    //to the end of the tree. 
    */
    //lets start by checking to see if there is a 
    //left side since that is the side we will have to 
    //traverse down first 
    /*
    if(this->leftChild||this->rightChild)
    {
        
        
        if(this->leftChild->leftChild && this->leftChild->rightChild)
        {
            
            //if this left child has both a left 
            //and a right child lets traverse there
            this->leftChild->displayPostOrder();
            //then we do not want to lose track of the left
            //child we are traversing to, so lets print that after 
            //the recursive statement 

            cout << this->payload << "\n";
        }
        else if(this->leftChild->leftChild && !this->leftChild->rightChild)
        {
            
            //case number 2, if the left goes deeper 
            //but the right does not 
            this->leftChild->displayPostOrder();
            cout << this->payload << "\n";

        }
        else if(!this->leftChild->leftChild && this->leftChild->rightChild)
        {
            //if the left left child is not a thing but the left right is
            //then we should go down the left side 
            this->leftChild->displayPostOrder();
            cout << this->leftChild->payload << "\n";
            cout << this->rightChild->payload << "/n";
            cout << this->payload << "\n";            

        }
        else if(!this->leftChild->leftChild || !this->leftChild->rightChild)
        {
            //if you are one away from the bottom 
            if(this->leftChild)
            {
            cout << this->leftChild->payload << "\n";
            }
            if(this->rightChild)
            {
            cout << this->rightChild->payload << "\n";
            }
            cout << this->payload << "\n"; 

        }


        //NOW WE HAVE TO DO THE RIGHT SIDE
        


    }*/
    //we will start by writing the case of no children. 
   if(!leftChild)
   {
       if(!rightChild)
       {
           cout << this->payload <<"\n";
           //if you have no children and the tree is 
           //a single child then print yourself
       }
       else 
       {
           //right DOES exist 
           this->rightChild->displayPostOrder();
           cout << this->payload << "\n";
       }
   }
   else
   {

       //Left DOES exist 
       if(!rightChild)
       {
           //right does NOT exist 
       
       this->leftChild->displayPostOrder();
       cout << this->payload <<"\n";
       }
       else
       {
           //BOTH right and left child exist 
           this->leftChild->displayPostOrder();
           this->rightChild->displayPostOrder();
           cout << this->payload << "\n";
           
       }
       

   }

}
BinaryTree* BinaryTree:: getLeftChild()
{
    return this->leftChild;

}
BinaryTree* BinaryTree:: getRightChild()
{
    return this->rightChild;
    
}
int BinaryTree:: getPayload()
{
    return this->payload;
}