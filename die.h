#ifndef __DIE_H
#define __DIE_H

using namespace std;

class Die
{
    int _faces; // number of faces on a die
    int _value; // the value that is facing upward after the dice has stopped rolling
    
    public:
        Die(int faces, int value, int roll);
        int roll;
        void setFaces(int face) {_faces = face;}
        int getFaces() {return _faces;}
        
        void setRoll(int rolls) {roll = rolls;}
                                                
        int getRoll() {return roll;}
        void setValue(int value) {_value = value;}
        int getValue() const {return _value;}
};

#endif
