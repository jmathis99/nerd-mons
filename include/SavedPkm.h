#ifndef SAVEDPKM_H
#define SAVEDPKM_H
#include "enums.h"

namespace pk{
    class SavedPkm
    {
        public:
            SavedPkm();
            virtual ~SavedPkm();

        protected:

        private:
            unsigned short natDexID;
            pk::Item heldItem;
            unsigned short otID;
            unsigned short otSecretID;
            unsigned int exp;


    };
}


#endif // SAVEDPKM_H
