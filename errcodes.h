/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in
 *  the LICENSE file in the root directory of this source tree. An
 *  additional grant of patent rights can be found in the PATENTS file
 *  in the same directory.
 *
 */
#pragma once
#include "util.h"

#define ERR_FINGERPRINT_MISMATCH (ERR_APP_BASE-0)
#define ERR_DAEMON_NOT_RUNNING (ERR_APP_BASE-1)

#define ERR_JDWP_EOF (ERR_APP_BASE-4)

#define ERR_JDWP_BASE -10000
#define JDWP_ERR_TO_FBADB_ERR(x) (ERR_JDWP_BASE + (x))
