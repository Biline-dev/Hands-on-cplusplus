#include "Etudiant.h"

//--
Etudiant::Etudiant( /* ### */ ) : Personne( /* ### */ ){}

//--
Etudiant::Etudiant(const Etudiant& anE) : Personne(anE){
        _copy(anE);
}


//--
Etudiant:: Etudiant(const Personne& p, const double n1, const double n2) {
        this->setAnneNaiss(p.getAnneNaiss());
        this->setNom(p.getNom());
        this->setPrenom(p.getPrenom());
        note1 = n1;
        note2 = n2;
}

//--
Etudiant& Etudiant::operator=(const Etudiant& anE){
    if (this != &anE){
        Personne::operator=(anE);
        /* The "destroy" instruction is utilized here to manage memory deallocation. 
        Assuming an initial assignment of variable 'a' to the same memory address as 'b' through 
        the statement 'a = b', the need to reassign 'a' to another value, for instance, 'a = c', 
        necessitates the prior release of allocated memory. This practice is crucial to prevent 
        memory leaks and ensure efficient management of dynamic resources during program execution.
        */
        _destroy(); 
        _copy(anE);
    }
 return *this;
}

//--
Etudiant::~Etudiant(void){
 _destroy();
}

//--
bool operator==(const Etudiant& anE1, const Etudiant& anE2){
 return anE1.isEqualTo(anE2);
}

//--
bool operator!=(const Etudiant& anE1, const Etudiant& anE2)
{
 return !(anE1==anE2);
}

//--
ostream& operator<<(ostream& os, const Etudiant& anE){
    anE.display(os);
    return os;
}


//--
istream& operator>>(istream& i,  Etudiant& anE)   {

    anE.input(i);
    return i;
}


//--
void Etudiant::display(ostream& os) const
{
    (void)os; // prevent warning if it is not used.
    Personne::display(os);
    os << " Note1: " << getNote1() << " Note2: " << getNote2() << " La moyenne: " << calculeMoyenneEtudiant();

}

//--
void Etudiant::input(istream& i) 
{
    (void)i; 
    Personne::input(i);
    cout << "faites entrer la note numero 1: ";
    i >> this->note1;
    cout << "faites entrer la note numero 2: ";
    i >> this->note2;

}
//--
bool Etudiant::isEqualTo(const Etudiant& anE) const
{
 (void)anE; 
 if (!(Personne::isEqualTo(anE))) return false;
 if (note1 != anE.getNote1()) return false;
 if (note2 != anE.getNote2()) return false;
 return true;
}


double Etudiant::calculeMoyenneEtudiant() const{
    return (note1+note2)/2;
}


//--
void Etudiant::_copy(const Etudiant& anE){
    (void)anE;
    note1 = anE.getNote1();
    note2 = anE.getNote2();
}

//--
void Etudiant::_destroy(void)
{}

double Etudiant::getNote1()const{ return note1; }
double Etudiant:: getNote2()const{ return note2; }

void Etudiant::setNote1(const double note1){ this->note1 = note1; }
void Etudiant::setNote2(const double note2){ this->note2 = note2; }
