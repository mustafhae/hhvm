/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_ERROR_H__
#define __EXTPROFILE_ERROR_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <cpp/ext/ext_error.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Array x_debug_backtrace() {
  FUNCTION_INJECTION_BUILTIN(debug_backtrace);
  return f_debug_backtrace();
}

inline void x_debug_print_backtrace() {
  FUNCTION_INJECTION_BUILTIN(debug_print_backtrace);
  f_debug_print_backtrace();
}

inline Array x_error_get_last() {
  FUNCTION_INJECTION_BUILTIN(error_get_last);
  return f_error_get_last();
}

inline bool x_error_log(CStrRef message, int message_type = 0, CStrRef destination = null_string, CStrRef extra_headers = null_string) {
  FUNCTION_INJECTION_BUILTIN(error_log);
  return f_error_log(message, message_type, destination, extra_headers);
}

inline int x_error_reporting(int level = 0) {
  FUNCTION_INJECTION_BUILTIN(error_reporting);
  return f_error_reporting(level);
}

inline bool x_restore_error_handler() {
  FUNCTION_INJECTION_BUILTIN(restore_error_handler);
  return f_restore_error_handler();
}

inline bool x_restore_exception_handler() {
  FUNCTION_INJECTION_BUILTIN(restore_exception_handler);
  return f_restore_exception_handler();
}

inline Variant x_set_error_handler(CStrRef error_handler, int error_types = 0) {
  FUNCTION_INJECTION_BUILTIN(set_error_handler);
  return f_set_error_handler(error_handler, error_types);
}

inline String x_set_exception_handler(CStrRef exception_handler) {
  FUNCTION_INJECTION_BUILTIN(set_exception_handler);
  return f_set_exception_handler(exception_handler);
}

inline bool x_trigger_error(CStrRef error_msg, int error_type = k_E_USER_NOTICE) {
  FUNCTION_INJECTION_BUILTIN(trigger_error);
  return f_trigger_error(error_msg, error_type);
}

inline bool x_user_error(CStrRef error_msg, int error_type = k_E_USER_NOTICE) {
  FUNCTION_INJECTION_BUILTIN(user_error);
  return f_user_error(error_msg, error_type);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_ERROR_H__
