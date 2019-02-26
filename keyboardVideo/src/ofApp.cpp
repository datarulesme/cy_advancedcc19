#include "ofApp.h"
int r=255;
int g=255;
int b=255;
int a=0;
int a2=0;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    video.load("fractal.mp4");
    video_two.load("fractal.mp4");
    video.setVolume(0.1);
    
    mVidGrabber.setVerbose(true);
    mVidGrabber.setup(160,120);
    screenShot.load("screenShot.png");

}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
    video_two.update();
    mVidGrabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
int pattern_width=160;
    int pattern_height=120;
    int width=160;
    int height=120;
    
    ofPushMatrix();
    for(int c = 0; c < ofGetWindowWidth(); c += width/2){
        for(int b = 0; b < ofGetWindowHeight(); b += height/2)
        {
            ofSetColor(200, 0, 255,255);
            mVidGrabber.draw(c,b,width/2,height/2);
        }
        
    }
    ofPopMatrix();

    ofPushMatrix();
    ofSetColor(r,g,b,100);
    for(int j = 0; j < ofGetWindowWidth(); j += width) {
        for(int i = 0; i < ofGetWindowHeight(); i += height){
            video.draw(j, i, width, height);
        }
    }
    ofPopMatrix();
    ofPushMatrix();
    for(int c = 0; c < ofGetWindowWidth(); c += width*2){
        for(int b = 0; b < ofGetWindowHeight(); b += height*2)
        {
    ofSetColor(100, 255, 0,a);
    mVidGrabber.draw(c,b,width*2,height*2);
        }
        
    }
    ofPopMatrix();
    
    ofPushMatrix();
    for(int x = 0; x < ofGetWindowWidth(); x += width*3) {
        for(int y = 0; y < ofGetWindowHeight(); y += height*3){
            ofSetColor(r,g,b,a2);
            //ofSetColor(r,0,b,a2);
            video_two.draw(x, y,width*3,height*3);
            //ofRect(x, y,width,height);
        }
    }
    ofPopMatrix();

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
            a=100;
            a2=100;
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
    screenShot.grabScreen(0,0,ofGetWindowWidth(),ofGetWindowHeight());
    screenShot.save("screenShot.png");
    
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
