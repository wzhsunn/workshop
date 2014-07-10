
##������

###��ʽ�洢

```C++
struct BinNode
{
    int data;
    BinNode* left;
    BinNode* right;
};
```

###����

####ǰ�����

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
####�������
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
####��������

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

