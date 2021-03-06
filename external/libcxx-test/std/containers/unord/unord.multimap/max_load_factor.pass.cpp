/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <unordered_map>

// template <class Key, class T, class Hash = hash<Key>, class Pred = equal_to<Key>,
//           class Alloc = allocator<pair<const Key, T>>>
// class unordered_multimap

// float max_load_factor() const;
// static int max_load_factor(float mlf);

#include <unordered_map>
#include <string>
#include <cassert>
#include "libcxx_tc_common.h"

int tc_libcxx_containers_unord_multimap_max_load_factor(void)
{
    {
        typedef std::unordered_multimap<int, std::string> C;
        const C c;
        TC_ASSERT_EXPR(c.max_load_factor() == 1);
    }
    {
        typedef std::unordered_multimap<int, std::string> C;
        C c;
        TC_ASSERT_EXPR(c.max_load_factor() == 1);
        c.max_load_factor(2.5);
        TC_ASSERT_EXPR(c.max_load_factor() == 2.5);
    }
    TC_SUCCESS_RESULT();
    return 0;
}
