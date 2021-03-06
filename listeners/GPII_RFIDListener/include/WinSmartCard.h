///////////////////////////////////////////////////////////////////////////////
//
// WinSmartCard.h
//
// Copyright 2014 University of Wisconsin, Madison
// Copyright 2014 OpenDirective Ltd.
//
// Licensed under the New BSD license. You may not use this file except in
// compliance with this License.
//
// You may obtain a copy of the License at
// https://github.com/gpii/windows/blob/master/LICENSE.txt
//
// The research leading to these results has received funding from 
// the European Union's Seventh Framework Programme (FP7/2007-2013) 
// under grant agreement no. 289016.
//
// This file simplifies the Winscard inteface by allowing the calling
// function to initialize a card read. This file will then start a new
// thread to test for card connections and disconnections. Each event
// will send a SMART_CARD_ARRIVE and SMART_CARD_REMOVE message to the
// main windows proc (WndProc). Note that WM_USER + 101 and 102 must
// not be used by that same main window.
//
// Note: This code was tested with reader "ACS ACR122 0"
//
//	Project Files:
//		WinSmartCard.cpp // FIXME - rename form SMARTCARD?
//		WinSmartCard.H
//
//	WINSCARD Libary Files:
//		WINSCARD.H
//		Winscard.lib
//
// Versions:
//
//		2012.05.05 Version 1.00
//		2012.05.06 Version 1.03
//           Changed WinSmartCardInitialize to not require a reader name
//           Added SMART_READER_STOPPED message
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _WINSMARTCARD_H_
#define _WINSMARTCARD_H_

#include <windows.h>

#define DEFAULT_USER_NAME "GUEST"

#define SMART_CARD_ARRIVE     (WM_USER + 101)
#define SMART_CARD_REMOVE     (WM_USER + 102)
#define SMART_READER_STOPPED  (WM_USER + 103)

int WinSmartCardInitialize(HWND hWnd,const char* szReader = "");
void WinSmartCardCleanUp(void);

int WinSmartCardGetUser(char* szUser, int nMaxLen); // FIXME - getToken
int WinSmartCardGetReader(char* szReader,int nMaxLen);
int WinSmartCardPolling(); // FIXME BOOL

#endif // _WINSMARTCARD_H_
