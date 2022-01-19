#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector <char> ft_strlist(string str);
string ft_join(vector <char> vect, string sep);
string ft_rmstrspc(string str);
string ft_rmstrchar(string str, string str2);
long double ft_sumlst(const vector <int> &vect);
long double ft_sum_even_lst(const vector <int> &vect);
long double ft_sum_even_part_list(const vector <int>& vect);
vector <int> ft_odd_even_separator_lst(const vector <long double>& vect);
vector <int> ft_pos_neg_separator_lst(const vector <long double>& vect);
void ft_odd_even_analysis_lst(const vector <long double>& vect);