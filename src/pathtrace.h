#pragma once

#include <vector>
#include "scene.h"

void InitDataContainer(GuiDataContainer* guiData);
void pathtraceInit(Scene *scene);
void pathtraceInitCheckpoint(Scene* scene);
void pathtraceFree();
void pathtrace(uchar4 *pbo, int frame, int iteration);
int streamCompact(ShadeableIntersection* intersections, PathSegment* paths, int num_paths);
void sortMaterials(ShadeableIntersection* intersections, PathSegment* paths, int num_paths);