#pragma once

#include "ofMain.h"
#include "Path.h"

class Vehicle{

public:
    Boolean debug;
    
    void setup(ofVec2f & l, float ts, float mf);
    void applyForce(const ofVec2f & force);
    void follow(Path & path);
    ofVec2f getNormalPoint(ofVec2f p, ofVec2f a, ofVec2f b);
    void seek(const ofVec2f & target);
    void borders();
    void update();
    void draw();
    
    
private:
    
    ofVec2f predictLoc;
    ofVec2f normal;
    ofVec2f target;
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float topSpeed;
    float maxForce; 
    int r, cor;
    
    float radius;
    float worldRecord;

 


};