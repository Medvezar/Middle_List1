#include "middle_list.h"


long itc_sum_even_lst(const vector <long>& vect) {
    long numRes = 0;
    for (int n1 = 0; n1 < vect.size(); n1++)
        if (n1 % 2 == 0)
            numRes += vect[n1];
    return numRes;
}

long itc_sum_even_part_lst(const vector <long>& vect) {
    long sumNum = 0;
    for (int n1 = 0; n1 < vect.size(); n1++)
        if (vect[n1] % 2 == 0)
            sumNum += vect[n1];
    return sumNum;
}

void itc_odd_even_separator_lst(const vector <long>& vect, vector <int>& lst1, vector <int>& lst2) {
    for (int n1 = 0; n1 < vect.size(); n1++) {
        if (vect[n1] % 2 == 0)
            lst1.push_back(n1);
        else
            lst2.push_back(n1);
    }
}

void itc_pos_neg_separator_lst(const vector <long>& vect, vector <int>& lst1, vector <int>& lst2, vector <int>& lst3) {
    for (int n1 = 0; n1 < vect.size(); n1++) {
        if (n1 < 0)
            lst1.push_back(n1);
        else if (n1 == 0)
            lst2.push_back(n1);
        else
            lst3.push_back(n1);
    }
}


void itc_odd_even_analysis_lst(const vector <long>& vect) {
    long sumEven = 0;
    long sumNotEven = 0;
    int timesEven = 0;
    int timesNotEven = 0;
    long numMinEven = 999;
    long numMinNotEven = 999;
    long numMaxEven = -999;
    long numMaxNotEven = -999;
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
    cout << "max: " << numMaxEven << "\tmax: " << numMaxNotEven << endl;
    cout << "min: " << numMinEven << "\tmin: " << numMinNotEven << endl;
    cout << "sum: " << sumEven << "\tsum: " << sumNotEven << endl;
}


void itc_pos_neg_analysis_lst(const vector <long>& vect) {
    long sumPos = 0;
    long sumNeg = 0;
    int countPos = 0;
    int nullCount = 0;
    int countNeg = 0;
    long minPos = 999;
    long minNeg = 999;
    long maxPos = -999;
    long maxNeg = -999;
    for (int n1 = 0; n1 < vect.size(); n1++) {
        if (vect[n1] > 0) {
            countPos++;
            if (vect[n1] < minPos)
                minPos = vect[n1];
            if (vect[n1] > maxPos)
                maxPos = vect[n1];
            sumPos += vect[n1];
        }
        else if (vect[n1] < 0) {
            countNeg++;
            if (vect[n1] < minNeg)
                minNeg = vect[n1];
            if (vect[n1] > maxNeg)
                maxNeg = vect[n1];
            sumNeg += vect[n1];
        }
        else
            nullCount++;
    }
    cout << "Positive:\tNegative:" << endl;
    cout << "count: " << countPos << "\tcount: " << countNeg << endl;
    cout << "max: " << maxPos << "\tmax: " << maxNeg << endl;
    cout << "min: " << minPos << "\tmin: " << minNeg << endl;
    cout << "sum: " << sumPos << "\tsum: " << sumNeg << endl;
    cout << "mid: " << sumPos / countPos << "\tmid: " << sumNeg / countNeg << endl;
    cout << "nullCount: " << nullCount << endl;
}                                                                
