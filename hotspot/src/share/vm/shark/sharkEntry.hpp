/*
 * Copyright 1999-2007 Sun Microsystems, Inc.  All Rights Reserved.
 * Copyright 2008, 2009 Red Hat, Inc.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 *
 */

class SharkContext;

class SharkEntry : public ZeroEntry {
 private:
  address         _code_limit;
  SharkContext*   _context;
  llvm::Function* _function;

 public:
  address code_start() const {
    return entry_point();
  }
  address code_limit() const {
    return _code_limit;
  }
  SharkContext* context() const {
    return _context;
  }
  llvm::Function* function() const {
    return _function;
  }

 public:
  void set_code_limit(address code_limit) {
    _code_limit = code_limit;
  }
  void set_context(SharkContext* context) {
    _context = context;
  }
  void set_function(llvm::Function* function) {
    _function = function;
  }
};
