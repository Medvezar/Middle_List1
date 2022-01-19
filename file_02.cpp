#include "middle_list.h"


long long ft_sum_even_lst(const vector <int> &vect){
    long long numRes = 0;
    for (int n1 = 0; n1 < vect.size(); n1++)
        if ((n1 + 1) % 2 == 0)
            numRes += vect[n1];
    return numRes;
}
