#include <iostream>

using namespace std;

// create
int *aggiungiInFondo(int base[], int lunghezza, int nuovo)
{
    int lunghezzaNuovo = lunghezza + 1;
    int arrayNuovo[lunghezzaNuovo];
    for (int i = 0; i < lunghezzaNuovo + 1; i++)
    {
        arrayNuovo[i] = base[i];
    }
    
    arrayNuovo[lunghezzaNuovo - 1] = nuovo;

    cout << "Aggiungi in fondo il numero " << nuovo << endl;
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int *aggiungiInTesta(int base[], int lunghezza, int nuovo)
{
    int lunghezzaNuovo = lunghezza + 1;
    int arrayNuovo[lunghezzaNuovo];

    arrayNuovo[0] = nuovo;

    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        arrayNuovo[i + 1] = base[i];
    }

    cout << endl
         << "Aggiungi in testa il numero " << nuovo << endl;
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int *aggiungiInPosizione(int base[], int lunghezza, int nuovo, int posizione)
{
    int lunghezzaNuovo = lunghezza + 1;
    int arrayNuovo[lunghezzaNuovo];

    for (int i = 0; i < posizione; i++)
    {
        arrayNuovo[i] = base[i];
    }
    
    arrayNuovo[posizione] = nuovo;

    for ( int i = posizione; i < lunghezzaNuovo; i++)
    {
        arrayNuovo[i + 1] = base[i];
    }

    cout << endl
         << "Aggiungi in posizione " << posizione << " il numero " << nuovo << endl;
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int trovaPosizione(int base[], int lunghezza, int cerca)
{
    int indice=0;
    for (int i=0; i<lunghezza; i++ )
    {
        if(base[i]==cerca)
        {
            indice = i;
        }
    }
    return indice;
}

int *aggiornaInPosizione(int base[], int lunghezza, int valore, int posizione)
{
    int arrayNuovo[lunghezza];
        for (int i = 0; i < posizione; i++)
    {
        arrayNuovo[i] = base[i];
    }
    
    arrayNuovo[posizione] = valore;

    for ( int i = posizione; i < lunghezza; i++)
    {
        arrayNuovo[i + 1] = base[i+1];
    }

    cout << endl
         << "Sostituisci  in posizione " << posizione << " il numero " << valore << endl;
    for (int i = 0; i < lunghezza; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int *rimuovi(int base[], int lunghezza, int indice)
{
}

int main()
{
    int arrayBase[5] = {4, 5, 3, 2, 6};
    int lunghezzaBase = sizeof(arrayBase) / sizeof(arrayBase[0]);
    int numero = 8;
    int posizione = 1;
    int cerca=6; 
    int valore = 7;

    int *arrayAggiungiInFondo = aggiungiInFondo(arrayBase, lunghezzaBase, numero);
    int *arrayAggiungiInTesta = aggiungiInTesta(arrayBase, lunghezzaBase, numero);
    int *arrayAggiungiInPosizione = aggiungiInPosizione(arrayBase, lunghezzaBase, numero, posizione);
    cout <<endl<<"Il numero "<< cerca<<" si trova il posizione "<<  trovaPosizione( arrayBase, lunghezzaBase, cerca );
    int *arrayAggiornaInPosizione = aggiornaInPosizione(arrayBase, lunghezzaBase, valore, posizione);
}