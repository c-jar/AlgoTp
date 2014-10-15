#ifndef LISTECIRCULAIRE_H_INCLUDED
#define LISTECIRCULAIRE_H_INCLUDED

typedef struct m {
    int numero;
    m * suivant;
} maillon;

void initListeCirculaire(maillon **m);
void afficherListe(const maillon *p);
maillon * precedent(const maillon *p);
void rotation(maillon **pp);
void insere(maillon **p, const int numero);


#endif // LISTECIRCULAIRE_H_INCLUDED
