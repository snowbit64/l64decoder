// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirtyDeleted
// Entry Point: 0072fb38
// Size: 12 bytes
// Signature: undefined __cdecl worldTransformationDirtyDeleted(ScenegraphNode * param_1)


/* VehicleNavigationMapGenerator::PhysicsObstacle::worldTransformationDirtyDeleted(ScenegraphNode*)
    */

void VehicleNavigationMapGenerator::PhysicsObstacle::worldTransformationDirtyDeleted
               (ScenegraphNode *param_1)

{
  removePhysicsObstacle
            (*(VehicleNavigationMapGenerator **)(param_1 + 0x10),
             *(TransformGroup **)(param_1 + 0x18));
  return;
}


