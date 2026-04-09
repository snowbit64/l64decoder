// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawCollisionGeometry
// Entry Point: 00722888
// Size: 168 bytes
// Signature: undefined __cdecl debugDrawCollisionGeometry(uint param_1, float * param_2, Vector3 param_3, float param_4, float param_5, DeferredDebugRenderer * param_6)


/* VehicleCollisionDistanceUtil::debugDrawCollisionGeometry(unsigned int, float*, Vector3, float,
   float, DeferredDebugRenderer*) */

void VehicleCollisionDistanceUtil::debugDrawCollisionGeometry
               (undefined8 param_1,float *param_2,DeferredDebugRenderer *param_3)

{
  long lVar1;
  float in_s3;
  float in_s4;
  bool local_64 [4];
  float *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  calculateDirections(param_1,param_2,&local_60,local_64);
  debugDrawCollisionGeometry((uint)param_1,param_2,local_60,in_s3,in_s4,param_3,local_64[0]);
  if (local_60 != (float *)0x0) {
    operator_delete__(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


