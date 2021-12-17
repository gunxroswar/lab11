#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int num=0;
    double sum=0,x=0,std,avg;
    string score;
    ifstream source("score.txt");
    while(getline(source,score)){
        sum += atof(score.c_str());
        num++;
        x += pow(atof(score.c_str()),2);
    }
    avg = sum/num;
    std = sqrt((x/num)-pow(avg,2));
    cout << "Number of data = "<< num << "\n";
    cout << setprecision(3);
    cout << "Mean = " << avg << "\n";
    cout << "Standard deviation = " << std;
}