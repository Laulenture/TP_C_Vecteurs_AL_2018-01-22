#include <stdlib.h>
#include "vector.h"
#include "point.h"
#include "additionVector.h"

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

///PCT/FCT

void additionVectorielle(tVector *vector1,tVector *vector2, tVector *vectorRes){

    float vector1Abscisse;
    float vector1Ordonnee;
    float vector2Abscisse;
    float vector2Ordonnee;
    float vectorResAbscisse;
    float vectorResOrdonnee;


    vector1Abscisse = vector1.vCoord_b.nX - vector1.vCoord_a.nX;
    vector1Ordonnee = vector1.vCoord_b.nY - vector1.vCoord_a.nY;
    vector2Abscisse = vector1.vCoord_b.nX - vector1.vCoord_a.nX;
    vector2Ordonnee = vector1.vCoord_b.nY - vector1.vCoord_a.nY;

    vectorResAbscisse = vector1Abscisse + vector2Abscisse;
    vectorResOrdonnee = vector1Ordonnee + vector2Ordonnee;

    vectorRes.vCoord_a.nX = vector1.vCoord_a.nX;
    vectorRes.vCoord_a.nY = vector1.vCoord_a.nY;
    vectorRes.vCoord_b.nX = vectorRes.vCoord_b.nX + vectorResOrdonnee;
    vectorRes.vCoord_b.nY = vectorRes.vCoord_b.nY + vectorResOrdonnee;

}
