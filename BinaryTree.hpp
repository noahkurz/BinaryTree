class BinaryTree
{
    private:
        int payload;
        BinaryTree* leftChild;
        BinaryTree* rightChild;
    public:
        BinaryTree(int payload);
        void add(int payload);
        void displayInOrder();
        void displayPreOrder();
        void displayPostOrder();
        int getPayload();
        BinaryTree* getLeftChild();
        BinaryTree* getRightChild();
};