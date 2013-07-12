#pragma once

#include "ofMain.h"
#include "ofxUI.h"

#define WINDOWWIDTH 1024
#define WINDOWHEIGHT 768
#define WINDOWBORDERDISTANCE 10

class wtmApp : public ofBaseApp {

    public:
        void setup();
        void update();
        void draw();

        void keyPressed  (int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y );
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
        void exit();
        
        void consumePacketData();
		
        int sensorColumns, sensorRows, bytesPerFrame;
    
        ofSerial serial;
        int didSend;
        unsigned char* recvBuffer;
        float lastRecvFrameTime;
    
        uint16_t* capGridValues;
    
        ofTexture texture;
    
        ofxUICanvas *gui;
    	void guiEvent(ofxUIEventArgs &e);
        bool bDrawBlobs;
        bool bDrawGrid;
};
