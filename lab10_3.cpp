#include<fstream>
#include<iomanip>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ifstream source;

    source.open("score.txt");
    string temp;
    double score, sum = 0, average, SD = 0; 
    int count = 0;

    while(getline(source, temp)){
        score = stod(temp);
        sum += score;
        SD += score*score;

        ++count;   
    }

    average = sum/count;
    SD = sqrt((1.0/count)*SD - average*average);

    cout << setprecision(3) ;

    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << average << "\n";
    cout << "Standard deviation = " << SD<< "\n";
    return 0;
}