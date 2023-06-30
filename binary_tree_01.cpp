#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define mod 1000000007
#define int long long

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		this->data = d;
		this->right = NULL;
		this->left = NULL;
	}
	
	
};

node* buildTree(node* root){
      
       cout<<"Enter the data"<<endl;
       int data;
       cin>>data;
       root = new node(data);

       if (data==-1)
       {
       	return NULL;
       }

       cout<<"Enter the data for inserting in left of "<<data<<endl;
       root->left = buildTree(root->left);
       cout<<"Enter the data for inserting in right of "<<data<<endl;
       root->right = buildTree(root->right);

       return root;
}

int32_t main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   node* root=NULL;

   root=buildTree(root);

    
    return 0;
}
