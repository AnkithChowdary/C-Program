#include<stdio.h>
#define size 10
int ht[size];
int main()
{
	int i,index;
	for(i=0;i<size;i++)
	{
		ht[i]=0;
	}
	insert(3);
	insert(2);
	insert(9);
	insert(6);
	insert(11);
	insert(13);
	insert(7);
	insert(12);
	display();
}
void insert(int value)
{
	int index1,index2,i;
	
	index1=value%size;
	if(ht[index1]==0)
	{
		ht[index1]=value;
	}
	else
	{
		for(i=0;i<size;i++)
		{
		index2=(index1+i)%size;//for quadratic i*i
		if(ht[index2]==0)
		{
			ht[index2]=value;
			break;
		}
		else
		{
			continue;
		}
	    }
		
	}
}
void display()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d->",ht[i]);
	}
}