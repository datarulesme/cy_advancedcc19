#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mImage.load("basquiat.png");
    mVideo.load("test.mp4");
    mVideo.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    mVideo.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    mImage.draw(ofGetMouseX(),ofGetMouseY());
    mVideo.draw(0,0,200,400);

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
