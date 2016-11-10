#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
     dub.load("dub.mp3");
     image.load("2.jpg");
     myFont.load("FuturaPTBook.otf", 30);
     ofSetBackgroundColor(242, 131, 107);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    image.draw(ofGetWidth()/2-300, ofGetHeight()/2-400, 500, 600);
    ofSetColor(242, 31, 12);
    myFont.drawString("Three Musicians Museum of Modern Art (MoMA) in NYC", ofGetWidth()/2-500, ofGetHeight()/2+240);
    
    //ofDrawRectangle(400, 400, 480, 400, 50 );
    ofDrawLine(240,300, 280, 320);
    ofDrawLine(280,320, 260, 280);
    ofDrawLine(260,280, 240, 300);
    ofDrawTriangle(240, 120, 280, 130, 280,160);
    
    ofSetColor(57, 109, 245);
    
    ofDrawLine(240,400, 280, 420);
    ofDrawLine(280,420, 260, 380);
    ofDrawLine(260,380, 240, 400);
    ofDrawTriangle(260, 160, 290, 170, 290, 120);
     ofDrawTriangle(280, 260, 310, 290, 320, 300);

    
    ofSetColor(242, 31, 12);
    
    ofDrawLine(1000,300, 1080, 320);
    ofDrawLine(1080,320, 1120, 280);
    ofDrawLine(1120,280, 1000, 300);
    ofDrawTriangle(1000, 120, 1080, 130, 1080,160);
    
    ofSetColor(57, 109, 245);
    
    ofDrawLine(850,400, 880, 420);
    ofDrawLine(880,420, 900, 380);
    ofDrawLine(900,380, 850, 400);
    ofDrawTriangle(940, 160, 1020, 170, 1020, 120);
    
    ofDrawRectangle(ofGetWidth()/2-200, ofGetHeight()/2+300, 150, 60);
    ofDrawRectangle(ofGetWidth()/2+50, ofGetHeight()/2+300, 150, 60);
    
    ofDrawRectangle(ofGetWidth()/2-200, ofGetHeight()/2+370, 230, 60);
    ofDrawRectangle(ofGetWidth()/2+50, ofGetHeight()/2+370, 250, 60);
    
    ofSetColor(255);
    myFont.drawString("Play:A", ofGetWidth()/2-170, ofGetHeight()/2+340);
    myFont.drawString("Stop:F", ofGetWidth()/2+60, ofGetHeight()/2+340);
    
    myFont.drawString("SpeedUp:S", ofGetWidth()/2-170, ofGetHeight()/2+410);
    myFont.drawString("SpeedDown:D", ofGetWidth()/2+60, ofGetHeight()/2+410);

    
   
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
            case 'a':
            dub.play();
                break;
             case 's':
            dub.setSpeed(0.3);
                break;
            case 'd':
            dub.setSpeed(-2.0);
            
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    switch (key) {
        case 'f':
            dub.stop();
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
