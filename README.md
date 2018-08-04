# Lamponi
🎏 – Open Frameworks keyboard controller
------------------------------------------------

## Usage 
Very easy to import:   

	1. Import `keyLab` 
	2. From `ofApp.h` file copy the following lines
		```c++
			static const int keyNumb = 10;		
			bool keyTriggers [keyNumb];
			void keyLab(int key);
		```
	3. Type `keyLab(key);` inside your `ofApp::keyPressed` in `ofApp.cpp`-

Done!
