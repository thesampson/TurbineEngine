/* ======================================================================== */
/* vulkan_context_win32.h                                                   */
/* ======================================================================== */
/*                        This file is part of:                             */
/*                           COPILOT ENGINE                                 */
/* ======================================================================== */
/*                                                                          */
/* Copyright (C) 2022 Vcredent All rights reserved.                         */
/*                                                                          */
/* Licensed under the Apache License, Version 2.0 (the "License");          */
/* you may not use this file except in compliance with the License.         */
/*                                                                          */
/* You may obtain a copy of the License at                                  */
/*     http://www.apache.org/licenses/LICENSE-2.0                           */
/*                                                                          */
/* Unless required by applicable law or agreed to in writing, software      */
/* distributed under the License is distributed on an "AS IS" BASIS,        */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, e1ither express or implied */
/* See the License for the specific language governing permissions and      */
/* limitations under the License.                                           */
/*                                                                          */
/* ======================================================================== */
#ifndef _VULKAN_CONTEXT_WIN32_H_
#define _VULKAN_CONTEXT_WIN32_H_

#include "drivers/vulkan_context.h"
#include <GLFW/glfw3.h>

class VkContextWin32 : public VkContext {
public:
    explicit VkContextWin32();
    ~VkContextWin32();

public:
    void window_create(int width, int height, const char *title);
    bool window_should_close();
    void poll_events();

private:
    GLFWwindow *hwindow;
};

#endif /* _VULKAN_CONTEXT_WIN32_H_ */