/***********************************************************************
Filename   : rvtoolconfig.h
Description: config file for compiler tools
************************************************************************
        Copyright (c) 2001 RADVISION Inc. and RADVISION Ltd.
************************************************************************
NOTICE:
This document contains information that is confidential and proprietary
to RADVISION Inc. and RADVISION Ltd.. No part of this document may be
reproduced in any form whatsoever without written prior approval by
RADVISION Inc. or RADVISION Ltd..

RADVISION Inc. and RADVISION Ltd. reserve the right to revise this
publication and make changes without obligation to notify any person of
such revisions or changes.
***********************************************************************/
#ifndef RV_TOOLCONFIG_H
#define RV_TOOLCONFIG_H

/* Include proper files for the Compiler Tool to be used. */
/* Supported tools are listed in rvtooldefs.h and RV_TOOL_TYPE */
/* should be set in rvbuildconfig.h (which is generated by */
/* the makefiles from default.mak). */
#if (RV_TOOL_TYPE == RV_TOOL_TYPE_GNU || RV_TOOL_TYPE == RV_TOOL_TYPE_ICC)
#include "rvgnu.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_SUN)
#include "rvsun.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_DIAB)
#include "rvdiab.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_GHS)
#include "rvghs.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_ADS)
#include "rvads.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_MSVC)
#include "rvmsvc.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_EMVC)
#include "rvemvc.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_COMPAQC)
#include "rvcompaqc.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_CADUL)
#include "rvcadul.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_HPUXC)
#include "rvhpuxc.h"
#elif (RV_TOOL_TYPE == RV_TOOL_TYPE_MWCCSYM)
#include "rvmwccsym.h"
#else
#error RV_TOOL_TYPE not set properly
#endif

#endif /* RV_TOOLCONFIG_H */