#include "middle_list.h"


vector <char> itc_strtlist(string str) {
    vector <char> res;
    int n1 = 0;
    while (str[n1] != 0) {
        res.push_back(str[n1]);
        n1++;
    }
    return res;
}


string itc_join(vector <char> vect, string sep) {
    string res = "";
    for (int n1 = 0; n1 < vect.size(); n1++) {
        res += vect[n1];
        if (n1 != vect.size() - 1)
            res += sep;
    }
    return res;
}


string itc_rmstrspc(string str) {
    string res = "";
    int n1 = 0;
    while (str[n1] != '\0') {
        if (str[n1] != ' ')
            res += str[n1];
        n1++;
    }
    return res;
}


string itc_rmstrchar(string str, string str2) {
    bool test;
    string res = "";
    int n1 = 0, n2;
    while (str[n1] != '\0') {
        test = false;
        n2 = 0;
        while (str2[n2] != '\0') {
            if (str[n1] == str2[n2])
                test = true;
            n2++;
        }
        if (test == false)
            res += str[n1];
        n1++;
    }
    return res;
}


long itc_sumlst(const vector <int>& vect) {
    long numRes = 0;
    for (int n1 = 0; n1 < vect.size(); n1++)
        numRes += vect[n1];
    return numRes;
}
