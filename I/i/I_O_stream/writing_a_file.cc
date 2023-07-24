#include<fstream>
using namespace std;

int main()
{
    ofstream ofs("My.txt");

    ofs << "Alam" <<endl;
    ofs << 25 << endl;
    ofs << "CSE"<<endl;
    ofs.close();
}