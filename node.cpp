#include"node.h"
using namespace std;

node::node()
{
	name="";
	id=0;
	next=NULL;
}
node::node(const std::string& str , const int nid )
{
	name=str;
	id=nid;
	next=NULL;
}
node::~node() { }