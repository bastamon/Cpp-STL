#include <iostream>
//列表list的仿真MyList
//编写程序对上述MyList进行测试，并注意观察begin()和end()两个返回值的变化
using namespace std;

template<typename T>
struct MyList_node
{
    MyList_node<T> * prev;
    MyList_node<T> * next;
    T data；
};


template<typename T>
class MyList
{
public:
    MyList():length(0)
    {
        node=new MyList_node<T>;
        node->next=node;
        node->prev=node;
    }
    ~MyList(){}
    //返回链表头
    link_type begin()
    {
        return node->next;
    }
    //返回链表尾地址函数
    link_type end()
    {
        return node;
    }
    //向MyList头加入节点
    void push_front(T x)
    {
        insert(begin(),x);
    }
    //向MyList尾加入节点
    void push_back(T x)
    {
        insert(end(),x);
    }
    void pop_front()
    {
        erase(begin());
    }
    void pop_back()
    {
        erase(end()->prev);
    }
    //插入节点操作
    link_type insert(link_type position,T &x)
    {
        MyList_node<T> *tmp=new MyList_node<T>;

        tmp->data=x;

        tmp->prev=position->prev;

        tmp->next=position;

        position->prev->next=tmp;

        position->prev=tmp;

        ++length;

        return tmp;
    }

    void erase(const link_type &position)
    {
        position->prev->next=position->next;
        position->next->prev=position->prev;
        --length;
    }
    //重载operator[]
    T& operator[](size_t n)
    {
        if(n<0|| n>=length)
            cerr<<"out of range";
        //设置查找结果指正
        link_type current=NULL;
        //n处于链表前半区
        if(n<length/2)
        {
            current=node->next;
            for(size_t i=0;i<n;i++)
                current=current->next;                
        }
        else
        {
            //修改n的值
            n=length-n-1;
            //从链表尾沿前驱指向查询n次
            current=node->prev;
            for(size_t i=0;i<n;i++)
                current=current->prev;
        }
        //返回数据域引用
        return current->data;
    }
};

int main()
{
    MyList<int>MyList1;

    
    return 0;
}
