///////////////////////////////////////////////////////////////////////////////
//
// FlowManager.h
//
// Copyright 2014 OpenDirective Ltd.
//
// Licensed under the New BSD license. You may not use this file except in
// compliance with this License.
//
// You may obtain a copy of the License at
// https://github.com/gpii/windows/blob/master/LICENSE.txt
//
// Access to the GPII flowmanager to log in and out
//
//	Project Files:
//		FlowManager.cpp
//		FlowManager.h
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _FLOWMANAGER_H_
#define _FLOWMANAGER_H_

void FlowManagerLogin(const char * szToken);
void FlowManagerLogout(const char * szToken);

#endif // _FLOWMANAGER_H_
