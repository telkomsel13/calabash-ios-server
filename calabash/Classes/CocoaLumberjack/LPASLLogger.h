// Software License Agreement (BSD License)
//
// Copyright (c) 2010-2015, Deusty, LLC
// All rights reserved.
//
// Redistribution and use of this software in source and binary forms,
// with or without modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
//
// * Neither the name of Deusty nor the names of its contributors may be used
//   to endorse or promote products derived from this software without specific
//   prior written permission of Deusty, LLC.

#import <Foundation/Foundation.h>

// Disable legacy macros
#ifndef LP_LEGACY_MACROS
    #define LP_LEGACY_MACROS 0
#endif

#import "LPLog.h"

// Custom key set on messages sent to ASL
extern const char* const kLPASLKeyLPLog;

// Value set for kLPASLKeyLPLog
extern const char* const kLPASLLPLogValue;

/**
 * This class provides a logger for the Apple System Log facility.
 *
 * As described in the "Getting Started" page,
 * the traditional NSLog() function directs it's output to two places:
 *
 * - Apple System Log
 * - StdErr (if stderr is a TTY) so log statements show up in Xcode console
 *
 * To duplicate NSLog() functionality you can simply add this logger and a tty logger.
 * However, if you instead choose to use file logging (for faster performance),
 * you may choose to use a file logger and a tty logger.
 **/

@interface LPASLLogger : LPAbstractLogger <LPLogger>

+ (instancetype)sharedInstance;

// Inherited from LPAbstractLogger

// - (id <LPLogFormatter>)logFormatter;
// - (void)setLogFormatter:(id <LPLogFormatter>)formatter;

@end
