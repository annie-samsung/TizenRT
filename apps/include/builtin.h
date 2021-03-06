/****************************************************************************
 *
 * Copyright 2017 Samsung Electronics All Rights Reserved.
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
#ifndef __APPS_INCLUDE_BUILTIN_H
#define __APPS_INCLUDE_BUILTIN_H
#include <tinyara/config.h>

typedef int (*TASK_CALLBACK)(int argc, char **args);

struct builtin_info_s {
	const char *name;
	const TASK_CALLBACK entry;
	const int exectype;
	const int priority;
	const int stacksize;
};
typedef struct builtin_info_s builtin_info_t;

#ifdef CONFIG_BUILTIN_APPS
extern const builtin_info_t builtin_list[];
int get_builtin_list_cnt(void);
void register_examples_cmds(void);
#endif

#endif							/* __APPS_INCLUDE_BUILTIN_H */
