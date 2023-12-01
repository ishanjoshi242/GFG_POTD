/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
class Solution{
  public:
    bool helper(Node * node, int MIN, int MAX){
        if(!node)
            return 0;
            
        if(node -> data == MIN and node -> data == MAX)
            return 1;
            
        return helper(node -> left, MIN, node -> data - 1) or helper(node -> right, node -> data + 1, MAX);    
    }
    
    bool isDeadEnd(Node *root)
    {
        return helper(root, 1, 1e8);
    }
};


//{ Driver Code Starts.
// bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

     Solution ob;
     cout<<ob.isDeadEnd(root);
     cout<<endl;
    }
}

