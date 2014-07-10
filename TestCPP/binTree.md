
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

####�������

```C++
void LevelTree(BinNode* root)
{
    if(root == nullptr)
    {
        return;
    }    
    //stl queue 
    queue q;
    q.push(root);
    while(!q.empty())
    {
        BinNode* node = q.front();
        cout << node->data;
        if(node->left != nullptr)
        {
            q.push(node->left);
        }
        if(node->right != nullptr)
        {
            q.push(node->right);
        }
        q.pop();
    }
}
````

####�ǵݹ�ǰ�����

```C++
void PreOrder(BinNode* root)
{
    if(root ==nullptr)
    {
        return;
    }
    //stl stack
    stack s;
    s.push(root);
    while(root || !s.empty())
    {
        while(root)
        {
            cout << root->data;
            s.push(root);
            root = root->left;
        }
        root = s.top();
        s.pop();
        root = root->right;
    }
}
```