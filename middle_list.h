#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector <char> itc_strtlist(string str);
string itc_join(vector <char> vect, string sep);
string itc_rmstrspc(string str);
string itc_rmstrchar(string str, string str2);
long itc_sumlst(const vector <int>& vect);
long itc_sum_even_lst(const vector <int>& vect);
long itc_sum_even_part_lst(const vector <int>& vect);
void itc_odd_even_separator_lst(const vector <int>& vect, vector <int>& lst1, vector <int>& lst2);
void itc_pos_neg_separator_lst(const vector <int>& vect, vector <int>& lst1, vector <int>& lst2, vector <int>& lst3);
void itc_odd_even_analysis_lst(const vector <int>& vect);
void itc_pos_neg_analysis_lst(const vector <int>& vect);
