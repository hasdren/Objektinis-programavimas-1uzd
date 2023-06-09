#ifndef VEKTORIAI_H
#define VEKTORIAI_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <chrono>
#include <deque>
#include <list>
#include <string>
#include <cctype>
using namespace std;

struct studentas
{
    int n;         
    vector<int> nd; 
    string vardas;
    string pavarde;
    double final;
    int egzaminas;
};

void Container(int);
void GenerateFile(int);
template <typename Container>
void Generatefromfile(Container&, Container&, Container&, int);
bool correctstring(string name);
string correctName();
bool comparePagalPavarde(const studentas&x, const studentas&y);
void Random(int n, vector<int>&nd, int i);
void Random(int i, vector<int>&nd);
template <typename Container>
double Average(vector <int> &nd, int egz);
double Median(vector <int> &nd, int egz);
template <typename Container>
void printmed(Container&, int);
template <typename Container>
void printave(Container&, int);
int studentEntry();
int ManualEntry();
int HomeworkKnown();
int SA();
int Choosefile();
int File();
void printheaderAverage();
void printheaderMedian();
template <typename Container>
void Manualnotknown(int , vector<int> &);
template <typename Container>
void assignHomeworksize(int &, int);
template <typename Container>
void IvestisSK(int c, vector<int> &nd);
void IvestisSk(int n, vector<int> &nd, int i);
void printheaderAverage();
void printheaderMedian();
void Galutinisheader(int showaverage, std::ofstream& out);
void Randomnotknown(int i, vector<int>&nd);



#endif