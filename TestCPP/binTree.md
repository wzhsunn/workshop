
##二叉树

###链式存储

```C++
struct BinNode
{
    int data;
    BinNode* left;
    BinNode* right;
};
```

###遍历

####前序遍历

```C++
void PreOrder(BinNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    cout << root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
```
####中序遍历
```C++
void InOrder(BinNode* root)
{
    if(root == nullptr)
    {
        return
    }
    InOrder(root->left);
    cout << root->data;
    InOrder(root->right);
}
```
####后续遍历

```C++
void PostOrder(BinNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data;
}
```

