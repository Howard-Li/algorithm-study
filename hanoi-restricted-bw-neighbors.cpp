//Towers of hanoi using recursion
// adding one more restriction: only moves between neighbors are allowed 
//
//    ||source||         ||intermediate||         ||destination||
//    ||tower ||         ||   tower    ||         ||  tower    ||
//    ||======||_________||============||_________||===========||
//
// For example: moves between the source tower and the destination tower are not allowed.
// You have to move the plate from the source tower to the intermediate tower , and then to the destination tower.
 
 
#include <iostream>
#include <string>
using namespace std;
 
void move(int n,string src, string itm, string des,  int & count)
{
	if (n>0){
		move((n-1),src,itm,des, count);
		++count;
		cout<<"step " <<count<< ": Move Plate from "<<src <<" to "<<itm<<"\n";
		move((n-1),des,itm,src, count);
		++count;
		cout<<"step " <<count<< ": Move Plate from "<<itm <<" to "<<des<<"\n";
		move((n-1),src,itm,des, count);
	}
}
 
int main( )
{
	int count = 0;
	string src = "sourceTower ";
	string itm = "intermediate";
	string des = "destination ";
	move(3,src,itm,des,count);  // the total number of moves(steps) should be 3^n-1.
	return 0;
}