#include<iostream>
using namespace std;
// node bna lo pehlan
void delstrt()
{
struct node *temp;
//initialise krdo pointer

temp = start;
// temp start pointer bn gya
start = start->next;
// start pointer naye wala ... start te agle wala bn gya
delete(temp);
//pichla jehda temp reh gya us nu chk do
cout <<"first element deleted";
}
