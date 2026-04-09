// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelGetCollisionDistance
// Entry Point: 00723820
// Size: 44 bytes
// Signature: undefined __cdecl cancelGetCollisionDistance(Bt2ScenegraphPhysicsContext * param_1, PhysicsReport * param_2)


/* VehicleCollisionDistanceUtil::cancelGetCollisionDistance(Bt2ScenegraphPhysicsContext*,
   VehicleCollisionDistanceUtil::PhysicsReport*) */

void VehicleCollisionDistanceUtil::cancelGetCollisionDistance
               (Bt2ScenegraphPhysicsContext *param_1,PhysicsReport *param_2)

{
  Bt2ScenegraphPhysicsContext::cancelOverlapBoxShapes(param_1,(IPhysicsEntityReport *)param_2);
  Bt2ScenegraphPhysicsContext::cancelOverlapPointCloudShapes
            (param_1,(IPhysicsEntityReport *)param_2);
  return;
}


