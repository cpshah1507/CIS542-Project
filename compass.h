#include "HMC6352.h"
#include "boebot.h"

// Class module for digital compass (HMC6352)
class compass{    
    public: 
        
        compass();
        ~compass();
        int getPos();
        int gotoPos(int final_Pos);
};

