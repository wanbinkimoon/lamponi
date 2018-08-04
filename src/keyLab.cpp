
#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::keyLab(int key){
	// Resset every value in the array
	for (int i = 0; i < keyNumb; ++i) {
		keyTriggers[i] = false;
	}

	switch(key){
		case '1':
			keyTriggers[0] = !keyTriggers[0];
			break;
		case '2':
			keyTriggers[1] = !keyTriggers[1];
			break;
		case '3':
			keyTriggers[2] = !keyTriggers[2];
			break;
		case '4':
			keyTriggers[3] = !keyTriggers[3];
			break;
		case '5':
			keyTriggers[4] = !keyTriggers[4];
			break;
		case '6':
			keyTriggers[5] = !keyTriggers[5];
			break;
		case '7':
			keyTriggers[6] = !keyTriggers[6];
			break;
		case '8':
			keyTriggers[7] = !keyTriggers[7];
			break;
		case '9':
			keyTriggers[8] = !keyTriggers[8];
			break;
		case '0':
			keyTriggers[9] = !keyTriggers[9];
			break;
	}
	return ofSystemAlertDialog(
		"key 1: " + ofToString(keyTriggers[0]) +
		"\nkey 2: " + ofToString(keyTriggers[1]) +
		"\nkey 3: " + ofToString(keyTriggers[2]) +
		"\nkey 4: " + ofToString(keyTriggers[3]) +
		"\nkey 5: " + ofToString(keyTriggers[4]) +
		"\nkey 6: " + ofToString(keyTriggers[5]) +
		"\nkey 7: " + ofToString(keyTriggers[6]) +
		"\nkey 8: " + ofToString(keyTriggers[7]) +
		"\nkey 9: " + ofToString(keyTriggers[8]) +
		"\nkey 0: " + ofToString(keyTriggers[9])
		);
}