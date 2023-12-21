#include "File.h"



template<class T>
//--
File<T>::File( /* ### */ ){}

//--
template<class T>
File<T>::File(const File<T>& aG) {
    _copy(aG);
}

//--
template<class T>
File<T>& File<T>::operator=(const File<T>& aG){
    if (this != &aG){
        _destroy();
        _copy(aG);
    }
    return *this;
}

//--
template<class T>
File<T>::~File(void){
    _destroy();
}

//--
template<class T>
bool operator==(const File<T>& aG1, const File<T>& aG2){
    return aG1.isEqualTo(aG2);
}

//--
template<class T>
bool operator!=(const File<T>& aG1, const File<T>& aG2){
    return !(aG1==aG2);
}

//--
template<class T>
ostream& operator<<(ostream& os, const File<T>& aG){
    aG.display(os);
    return os;
}

//--
template<class T>
void File<T>::display(ostream& os) const{
    (void)os; // Pour eviter un warning si pas utilise
    if(file.size()!=0){
        os << file[0];
        for(int i=1; i<file.size(); i++){
            os << " " << file[i];
        }
    }
    os << endl;
}

//--
template<class T>
bool File<T>::isEqualTo(const File<T>& aG) const{
    (void)aG; 
    return true;
}

//--
template<class T>
void File<T>::_copy(const File<T>& aG){
    (void)aG; 
}

//--
template<class T>
void File<T>::_destroy(void){
}

template<class T>
vector<T> File<T>::getFile() const{ return file;};

template<class T>
void File<T>::addInFile(T elm) { file.push_back(elm);}

template<class T>
void File<T>::removeFirsFromtFile() { file.erase(file.begin());}

template<class T>
int File<T>::size() {
    return this->getFile().size();
}
