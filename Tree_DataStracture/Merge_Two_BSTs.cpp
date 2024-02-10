/*
void inorder(TreeNode *root,vector<int> &in ){
    if(root == NULL){
        return;
    }

    inorder(root -> left, in);
    in.push_back(root -> data);
    inorder( root -> right, in);
}
vector<int> mergeArrays(vector<int> &a, vector<int> &b){
    vector<int> ans(a.size() + b.size());

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }

    while(i < a.size()){
        ans[k++] = a[i];
        i++;
    }

    while(j < b.size()){
        ans[k++] = b[j];
        j++;
    }
    return ans;
}

vector<int> inorderToBST(int s, int e, vector<int> &in){
    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode *root = new TreeNode(in[mid]);

    root -> left = inorderToBST(s, mid-1, in);
    root -> right = inorderToBST(mid+1, e, in);
    return root;
}
*/

void inOrder(TreeNode *root, vector<int> &ans){

    if(root==nullptr){

        return;

    }

    inOrder(root->left,ans);

    ans.push_back(root->data);

    inOrder(root->right,ans);

}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    /*
    //step 1: store inorder in Vectors
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    //step 2 : merge both sorted arrays
    vector<int> mergeArray = mergeArrays(bst1, bst2);

    //step 3: use merged inorder Array to build BST
    int s = 0;
    int e = mergeArray.size() - 1;

    return inorderToBST(s, e, mergeArray);
    */
    // Write your code here.

    vector<int> ans;

    inOrder(root1,ans);

    inOrder(root2,ans);

    sort(ans.begin(),ans.end());

    return ans;
}