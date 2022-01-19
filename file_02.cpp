#include "middle_list.h"


long double ft_sum_even_lst(const vector <long double> &vect){
    long double numRes = 0.0;
    for (int n1 = 0; n1 < vect.size(); n1++)
        if ((n1 + 1) % 2 == 0)
            numRes += vect[n1];
    return numRes;
}

long double ft_sum_even_part_list(const vector <long double>& vect) {
    long double sumNum = 0.0
        for (int n1 = 0; n1 < vect.size(); n1++)
            if ((n1 + 1) % 2 == 0)
                sumNum += vect[n1];
    return sumNum;
}

vector <int> ft_odd_even_separator_lst(const vector <long double>& vect) {
    vector <long double> vectEven;
    vector <long double> vectNotEven;
    vector <long double> res;
    for (int n1 = 0; n1 < vect.size(); n1++) {
        if ((n1 + 1) % 2 == 0)
            vectEven.push_back(n1);
        else
            vectNotEven.push_back(n1);
    }
    res.push_back(vectEven);
    res.push_back(vectNotEven);
    return res;
}

vector <int> ft_pos_neg_separator_lst(const vector <long double>& vect) {
    vector <long double> vect1;
    vector <long double> vect2;
    vector <long double> vect3;
    vector <long double> res;
    for (int n1 = 0; n1 < vect.size(); n1++) {
        if (n1 < 0)
            vect1.push_back(n1);
        else if (n1 == 0)
            vect2.push_back(n1);
        else
            vect3.push_back(n1);
    }
    res.push_back(vect1);
    res.push_back(vect2);
    res.push_back(vect3);
    return res;
}


void ft_odd_even_analysis_lst(const vector <long double>& vect) {
    long double sumEven = 0.0;
    long double sumNotEven = 0.0;
    int timesEven = 0;
    int timesNotEven = 0;
    long double numMinEven = 999.999;
    long double numMinNotEven = 999.999;
    long double numMaxEven = -999.999;
    long double numMaxNotEven = -999.999;
    for (int n1 = 0; n1 < vect.size(); n1++) {
        if ((n1 + 1) % 2 == 0) {
            timesEven++;
            if (vect[n1] < numMinEven)
                numMinEven = vect[n1];
            if (vect[n1] > numMaxEven)
                numMaxEven = vect[n1];
            sumEven += vect[n1];
        }
        else {
            timesNotEven++;
            if (vect[n1] < numMinNotEven)
                numMinNotEven = vect[n1];
            if (vect[n1] > numMaxNotEven)
                numMaxNotEven = vect[n1];
            sumNotEven += vect[n1];
        }
    }
    cout << "Even:\tNot even:" << endl;
    cout << "count: " << timesEven << "\tcount: " << timesNotEven << endl;
    cout << "max: " << numMaxEven << "\tmax: " << numMaxNotEven<< endl;
    cout << "min: " << numMinEven << "\tmin: " << numMinNotEven << endl;
    cout << "sum: " << sumEven << "\tsum: " << sumNotEven << endl;
}









int main() {
    vect <long double> vect = { 0, 2, 5, 3, 2, 1 };
    cout << ft_odd_even_analysis_lst(vect) << endl;
}
