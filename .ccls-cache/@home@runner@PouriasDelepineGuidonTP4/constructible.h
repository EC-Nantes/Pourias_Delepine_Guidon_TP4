#include "parcelle.h"

template <typename T>
class constructible : virtual public parcelle<T>
{
    private:
    parcelle<T> p_interne;

    public:
        constructible();
        virtual int surfaceConstructible(parcelle<T> p);

};

template<typename T>
constructible<T>::constructible(){

}

template<typename T>
int constructible<T>::surfaceConstructible(parcelle<T> p){
    int size = 0;
    return size;
}