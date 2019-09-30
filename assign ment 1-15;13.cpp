#include<iostream>
using namespace std;
class publication
{
public:
char title[20];
float price;
void getda()
{
cout<<" \nenter the title \t";
cin>>title;
cout<<" \nenter the price \t";
cin>>price;

}
void putda()
{
cout<<"  \nbook title \t"<<title;
cout<<" \nbook price \t"<<price;
}
};
class book: public publication
{
public:
int page;
void getdat()
{
cout<<" \nenter the page numbers \t \t";
cin>>page;
}
void putdat()
{
cout<<" \n no.of page numbers \t"<<page;
}

};
class tape:public publication
{
public:
int dim1,dim2;
void getdata()
{
cout<<"\nenter dimensions \n ";
cin>>dim1>>dim2;
}
void putdata()
{
cout<<"  \nthe dimensions of the book are\n ";
cout<<dim1<<" x "<<dim2;
}
};
int main()
{
tape t;
book b;
publication p;
cout<<" \n enter the details of book";
b.getda();
b.getdat();
t.getdata();
b.putda();
b.putdat();
t.putdata();
return 0;
}
