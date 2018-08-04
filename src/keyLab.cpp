
#include "ofApp.h"

void ofApp::keyPanelSetup(){
	keyParams.setName("Palette Selector");
	
	keyParams.add(key1.set("Palette #1", false, 10, 300));
	keyParams.add(key2.set("Palette #2", false, 10, 300));
	keyParams.add(key3.set("Palette #3", false, 10, 300));
	keyParams.add(key4.set("Palette #4", false, 10, 300));
	keyParams.add(key5.set("Palette #5", false, 10, 300));
	keyParams.add(key6.set("Palette #6", false, 10, 300));
	keyParams.add(key7.set("Palette #7", false, 10, 300));
	keyParams.add(key8.set("Palette #8", false, 10, 300));
	keyParams.add(key9.set("Palette #9", false, 10, 300));
	keyParams.add(key0.set("Palette #0", false, 10, 300));
	setFillColor(125, 12, 133);
	keyPanel.setup(keyParams);
}

// --------------------------------------------------------------

void ofApp::keyPanelUpdate(){
	key1 = keyTriggers[1];
	key2 = keyTriggers[2];
	key3 = keyTriggers[3];
	key4 = keyTriggers[4];
	key5 = keyTriggers[5];
	key6 = keyTriggers[6];
	key7 = keyTriggers[7];
	key8 = keyTriggers[8];
	key9 = keyTriggers[9];
	key0 = keyTriggers[0];
}


// --------------------------------------------------------------

void ofApp::keyPanelDraw(){
	  keyPanel.draw();
}


//--------------------------------------------------------------

void ofApp::keyLab(int key){
	// Resset every value in the array
	for (int i = 0; i < keyNumb; ++i) {
		keyTriggers[i] = false;
	}

	switch(key){
		case '1':
			keyTriggers[1] = !keyTriggers[1];
			break;
		case '2':
			keyTriggers[2] = !keyTriggers[2];
			break;
		case '3':
			keyTriggers[3] = !keyTriggers[3];
			break;
		case '4':
			keyTriggers[4] = !keyTriggers[4];
			break;
		case '5':
			keyTriggers[5] = !keyTriggers[5];
			break;
		case '6':
			keyTriggers[6] = !keyTriggers[6];
			break;
		case '7':
			keyTriggers[7] = !keyTriggers[7];
			break;
		case '8':
			keyTriggers[8] = !keyTriggers[8];
			break;
		case '9':
			keyTriggers[9] = !keyTriggers[9];
			break;
		case '0':
			keyTriggers[0] = !keyTriggers[0];
			break;
	}

	// if (key >= 48 && key <= 57){
	// 	return ofSystemAlertDialog(
	// 		"key 1: " + ofToString(keyTriggers[0]) +
	// 		"\nkey 2: " + ofToString(keyTriggers[1]) +
	// 		"\nkey 3: " + ofToString(keyTriggers[2]) +
	// 		"\nkey 4: " + ofToString(keyTriggers[3]) +
	// 		"\nkey 5: " + ofToString(keyTriggers[4]) +
	// 		"\nkey 6: " + ofToString(keyTriggers[5]) +
	// 		"\nkey 7: " + ofToString(keyTriggers[6]) +
	// 		"\nkey 8: " + ofToString(keyTriggers[7]) +
	// 		"\nkey 9: " + ofToString(keyTriggers[8]) +
	// 		"\nkey 0: " + ofToString(keyTriggers[9]) +
	// 		"key code: " + ofToString(key)
	// 	);
	// }
}