#ifndef _File_H_
#define _File_H_

#include <iostream>
#include <vector>
using namespace std;



template <typename T> 
class File{
  template <typename U>     
  friend ostream& operator<<(ostream& os, const File<U>& aG);

 public :

   // Allocateurs/Desallocateurs

    File( /* ### */ );
    File(const File<T>& aG);
    File& operator=(const File<T>& aG);
    virtual ~File(void);

    void addInFile(T elm);
    vector<T> getFile()const;
    void removeFirsFromtFile();
    int size();

   // Comparaisons
   template <typename U>
   friend  bool operator==(const File<T>& aG1, const File<U>& aG2);
   template <typename U>
   friend  bool operator!=(const File<T>& aG1, const File<U>& aG2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
    virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
    bool isEqualTo(const File<T>& aG) const;

 protected :

             // ###

 private :
  vector<T> file;

 private :

   // Methodes privees d'allocation/desallocation

  void _copy(const File<T>& aG);
  void _destroy(void);
};

#endif // _File_H_
