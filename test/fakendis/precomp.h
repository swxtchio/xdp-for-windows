//
// Copyright (C) Microsoft Corporation. All rights reserved.
//

#pragma once

#include <ntdef.h>
#include <ntstatus.h>
#include <ntifs.h>
#include <ntintsafe.h>
#include <ndis.h>
#include <fndisioctl.h>
#include <fndispoll_p.h>
#include <xdpassert.h>
#include <xdppollbackchannel.h>

#include "driver.h"
#include "poll.h"
#include "pollbackchannel.h"
#include "polldpc.h"

#define POOLTAG_BACKCHANNEL 'BinF'  // FniB
#define POOLTAG_POLL        'PinF'  // FniP
#define POOLTAG_PERCPU      'CinF'  // FniC
#define POOLTAG_FILE        'FinF'  // FniF