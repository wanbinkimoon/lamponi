#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetWindowShape(300, 800);
	//  ofSetBackgroundAuto(false);
  ofBackground(0, 0, 0);

	keyPanelSetup();
}

//--------------------------------------------------------------
void ofApp::update(){
	keyPanelUpdate();
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(100, 200, 200);
	keyPanelDraw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  keyLab(key);
  keyPanelDraw();
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
