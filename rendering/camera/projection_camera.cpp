/* ======================================================================== */
/* projection_camera.cpp                                                    */
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
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied  */
/* See the License for the specific language governing permissions and      */
/* limitations under the License.                                           */
/*                                                                          */
/* ======================================================================== */
#include "projection_camera.h"

ProjectionCamera::ProjectionCamera(float v_fov, float v_near, float v_far)
    : fov(v_fov), near(v_near), far(v_far)
{
    /* do nothing... */
}

ProjectionCamera::~ProjectionCamera()
{
    /* do nothing... */
}

void ProjectionCamera::update()
{
    Mat4 translation;
    Mat4 rotation;

    translation = glm::translate(Mat4(1.0f), position);
    rotation = Mat4(1.0f);

    view_matrix = glm::inverse(translation * rotation);

    projection_matrix = glm::perspective(fov, aspect_ratio, near, far);
    projection_matrix[1][1] *= -1;
}