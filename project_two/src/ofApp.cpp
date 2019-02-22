#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mVidGrabber.setVerbose(true);
    mVidGrabber.setup(160,120);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    mVidGrabber.update();
    if(mVidGrabber.isFrameNew()){
        //		ofLogNotice() << "frame new" << endl;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetHexColor(0xffffff);
    //	ofLogNotice() << ofGetFrameRate() << endl;
    
    int pattern_width=160;
    int pattern_height=120;
    for(int i = 0; i < ofGetScreenHeight(); i += pattern_height){
        for(int j = 0; j < ofGetScreenWidth(); j += pattern_width){
            mVidGrabber.draw(j, i, pattern_width, pattern_height);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
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
