#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetWindowShape(stageW, stageH);
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
	if(key1) ofBackground(100, 200, 150);
	if(key2) ofBackground(200, 100, 150);
	if(key3) ofBackground(150, 100, 150);
	if(key4) ofBackground(200, 200, 50);
	if(key5) ofBackground(100, 200, 250);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  keyLab(key);
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
