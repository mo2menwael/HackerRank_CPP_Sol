#include<bits/stdc++.h>

using namespace std;


class Box{
    private:
        int l,b,h;
    public:
        Box(int a=0,int t=0,int c=0) {l=a; b=t; h=c;}
        Box(Box &B) {l=B.l; b=B.b; h=B.h;}
        int getLength() {return l;}
        int getBreadth() {return b;}
        int getHeight() {return h;}
        long long CalculateVolume() {return (long long)l*b*h;}
        bool operator<(Box& z){                                              //Important function
            if(l<z.l) return true;
            else if(l==z.l && b<z.b) return true;
            else if(l==z.l && b==z.b && h<z.h) return true;
            else return false;
        }
        friend ostream& operator<<(ostream& out, Box& B){                    //Important function
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
