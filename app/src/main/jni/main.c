#include "org_nhnnext_ndktest_MainActivity.h"
#include <stdio.h>
#include <string.h>

char* PrintEJ() {
	return "EJ";
}

char* PrintNDK() {
	return "NDK!";
}

char* addString() {
	char* new_str[6];

	strcat(new_str, PrintEJ());
	strcat(new_str, PrintNDK());

	return new_str;
}

JNIEXPORT jstring Java_org_nhnnext_ndktest_MainActivity_getAddedStringFromNative( JNIEnv* env, jobject obj) {

	return (*env)->NewStringUTF(env, addString());
}