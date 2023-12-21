                   // Fichier genere avec ./genere Personne
#ifndef _PERSONNE_H_
#define _PERSONNE_H_

#include <iostream>

using namespace std;

class Personne{

   friend ostream& operator<<(ostream& os, const Personne& aP);
   friend istream& operator>>(istream& i, Personne& aP);
    
   public :

   // Allocateurs/Desallocateurs

      Personne( /* ### */ );
      Personne (const int anne_naiss, const string nom, const string prenom);
      Personne(const Personne& aP);
      Personne& operator=(const Personne& aP);
      virtual ~Personne(void) ;
      /* The use of "const" in this context indicates that the application of this method 
      does not alter the content of this class.*/

      int getAnneNaiss() const; 
      string getNom() const;
      string getPrenom() const;

      void setAnneNaiss(const int anne_naiss);
      void setNom(const string nom);
      void setPrenom(const string prenom);
   // Comparaisons

      friend  bool operator==(const Personne& aP1, const Personne& aP2);
      friend  bool operator!=(const Personne& aP1, const Personne& aP2);
      friend  bool operator<(const Personne& aP1, const Personne& aP2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<
   
   // input: a appeler dans ue classe derivee         // input est une 
   virtual void input(istream& i) ;                   // methode appelee
                                                      // dans operator>>


   // isEqualTo: a appeler dans une classe derivee (dans operator==)
   bool isEqualTo(const Personne& aP) const;
   bool isInferior(const Personne& aP) const;

 protected :

             // ###

 private :

    // Attributs

    string nom;
    string prenom;
    int anne_naiss;


 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Personne& aP);
   void _destroy(void);
};

#endif // _PERSONNE_H_
