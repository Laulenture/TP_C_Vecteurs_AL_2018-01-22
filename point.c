#include <stdio.h>
#include <stdlib.h>

/**
    i : int             :nNom
    f : float           :flNom
    d : double          :dblNom
    c : char            :cNom
    l : long            :lnNom
    ui: unsigned int    : unNomVar
    uf: unsigned float  : unfNomVar
    s : *STRING*
*/

void initPoint(tPoint *coord,int n1,int n2){

    (*coord).nX = n1;
    (*coord).nY = n2;

}
