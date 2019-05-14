//GreedyAlgorithm.h   
#include<iostream>   
using namespace std;   
  
class GreedyAlgorithm{   
public:   
    GreedyAlgorithm(int _weight[],int _value[],int capacity);   
    double *ComputeRatio();   
    void SortRatio(double _Ratio[]);   
    double ComputeProfit();   
private:   
    int *weight;   
    int *value;   
    int capacity;   
    double profit;   
};   
//GreedyAlgorithm.cpp   
//#include"GreedyAlgorithm.h"   
  
//================================   
//�������ƣ�GreedyAlgorithm   
//�������ܣ���ʼ������   
//��������˵��:_weight[] ��Ʒ����,_value[] ��Ʒ��ֵ,_capacity ��������   
//��������ֵ��void   
//����ʱ�䣺2009-04-28   
//���£�   
//================================   
GreedyAlgorithm::GreedyAlgorithm(int _weight[],int _value[],int _capacity){   
       
    this->weight=_weight;   
    this->value=_value;   
    this->capacity=_capacity;   
    this->profit=0;   
    return;   
}   
  
//================================   
//�������ƣ�ComputeRatio   
//�������ܣ��������Ʒ�ĵ�λ��ֵ   
//��������˵��:   
//��������ֵ��double *   
//����ʱ�䣺2009-04-28   
//���£�   
//================================   
double *GreedyAlgorithm::ComputeRatio(){   
    double *Ratio=new double[5];   
    for(int i=0;i<5;i++)   
        Ratio[i]=(double)value[i]/weight[i];   
    return Ratio;   
}   
  
//================================   
//�������ƣ�SortRatio   
//�������ܣ����ݵ�λ��ֵ�ȴ�С������Ʒ�ļ�ֵ��������������   
//��������˵��:   
//��������ֵ��void   
//����ʱ�䣺2009-04-28   
//���£�   
//================================   
void GreedyAlgorithm::SortRatio(double _Ratio[]){   
    for(int i=0;i<5;i++)   
        for(int j=i+1;j<5;j++)   
        {   
            if(_Ratio[j]>_Ratio[i]){   
                int temp=weight[i];   
                weight[i]=weight[j];   
                weight[j]=temp;   
                temp=value[i];   
                value[i]=value[j];   
                value[j]=temp;   
            }   
        }   
        return;   
}   
//================================   
//�������ƣ�ComputeProfit   
//�������ܣ����㱳������������Ʒ������ֵ   
//��������˵��:   
//��������ֵ��double   
//����ʱ�䣺2009-04-28   
//���£�   
//================================   
double GreedyAlgorithm::ComputeProfit()   
{   
    int temp=0;   
    int i=0;   
    while(temp<=capacity){   
        if(i==5)    break;   
        else{   
            if((weight[i]+temp)<=capacity){   
                profit+=value[i];   
                temp+=weight[i];   
                }   
            else if((weight[i]+temp)>capacity){   
                int _weight=capacity-temp;   
                double _Ratio=(double)value[i]/weight[i];   
                profit+=_Ratio*_weight;   
                temp+=_weight;   
            }   
               
        }   
        i++;   
    }   
    return profit;   
}   
  
//main.cpp   
#include<iostream>   
#include"GreedyAlgorithm.h"   
using namespace std;   
  
int main(){   
    int _weight[5]={1,2,3,4,5};   
    int _value[5]={3,10,6,3,5};   
    int _capacity=7;   
    GreedyAlgorithm *greedy=new GreedyAlgorithm(_weight,_value,_capacity);   
    greedy->SortRatio(greedy->ComputeRatio());   
    cout<<"The Maximum Profit is:     "<<greedy->ComputeProfit()<<endl;   
    return 0;   
}  


