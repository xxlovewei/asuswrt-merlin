/* -*- Mode: C; tab-width: 4 -*-
 *
 * Copyright (c) 1997-2004 Apple Computer, Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

    Change History (most recent first):
    
$Log: PrinterSetupWizardApp.h,v $
Revision 1.3  2006/08/14 23:24:09  cheshire
Re-licensed mDNSResponder daemon source code under Apache License, Version 2.0

Revision 1.2  2005/01/25 08:52:55  shersche
<rdar://problem/3911084> Add APIs to return localizable and non-localizable resource DLL handles
Bug #: 3911084

Revision 1.1  2004/06/18 04:36:57  rpantos
First checked in


*/

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CWiz97_3App:
// See Wiz97_3.cpp for the implementation of this class
//

class CPrinterSetupWizardApp : public CWinApp
{
public:
	CPrinterSetupWizardApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};


extern CPrinterSetupWizardApp	theApp;
extern HINSTANCE				GetNonLocalizedResources();
extern HINSTANCE				GetLocalizedResources();
