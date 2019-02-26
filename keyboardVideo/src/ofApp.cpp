#include "ofApp.h"
int r=255;
int g=255;
int b=255;
int a=0;
int a2=0;
//--------------------------------------------------------------
void ofApp::setup(){
    video.load("fractal.mp4");
    video_two.load("fractal.mp4");
    video.setVolume(0.1);
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
    video_two.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    int pattern_width=160;
    int pattern_height=120;
    int width=240;
    int height=240;
    ofSetColor(r,g,b);
    for(int i = 0; i < ofGetScreenHeight(); i += pattern_height){
        for(int j = 0; j < ofGetScreenWidth(); j += pattern_width){
            video.draw(j, i, pattern_width, pattern_height);
        }
    }
    ofPushMatrix();
    for(int y = 0; y < ofGetScreenHeight(); y += height*2){
        for(int x = 0; x < ofGetScreenWidth(); x += width*2){
            ofSetColor(r,g,b,a2);
            //ofSetColor(r,0,b,a2);
            video_two.draw(x, y,width,height);
            //ofRect(x, y,width,height);
            ofPopMatrix();
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case ' ':
            video.play();
            video_two.play();
            break;
        case OF_KEY_LEFT:
            video.previousFrame();
            video_two.previousFrame();
            break;
        case OF_KEY_RIGHT:
            video.nextFrame();
            video_two.previousFrame();
            break;
        case 's':
            video.stop();
            video_two.stop();
            break;
        case 'h':
            a=255;
            a2=200;
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    switch(key){
            case 'h':
            a=0;
            a2=0;
            break;
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
