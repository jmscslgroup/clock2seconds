#ifndef CLOCK2SECONDS__VISIBILITY_CONTROL_H_
#define CLOCK2SECONDS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define CLOCK2SECONDS_EXPORT __attribute__ ((dllexport))
    #define CLOCK2SECONDS_IMPORT __attribute__ ((dllimport))
  #else
    #define CLOCK2SECONDS_EXPORT __declspec(dllexport)
    #define CLOCK2SECONDS_IMPORT __declspec(dllimport)
  #endif
  #ifdef CLOCK2SECONDS_BUILDING_LIBRARY
    #define CLOCK2SECONDS_PUBLIC CLOCK2SECONDS_EXPORT
  #else
    #define CLOCK2SECONDS_PUBLIC CLOCK2SECONDS_IMPORT
  #endif
  #define CLOCK2SECONDS_PUBLIC_TYPE CLOCK2SECONDS_PUBLIC
  #define CLOCK2SECONDS_LOCAL
#else
  #define CLOCK2SECONDS_EXPORT __attribute__ ((visibility("default")))
  #define CLOCK2SECONDS_IMPORT
  #if __GNUC__ >= 4
    #define CLOCK2SECONDS_PUBLIC __attribute__ ((visibility("default")))
    #define CLOCK2SECONDS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define CLOCK2SECONDS_PUBLIC
    #define CLOCK2SECONDS_LOCAL
  #endif
  #define CLOCK2SECONDS_PUBLIC_TYPE
#endif
#endif  // CLOCK2SECONDS__VISIBILITY_CONTROL_H_
// Generated 26-Nov-2024 14:00:43
// Copyright 2019-2020 The MathWorks, Inc.
