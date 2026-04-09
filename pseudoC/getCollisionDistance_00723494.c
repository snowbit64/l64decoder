// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionDistance
// Entry Point: 00723494
// Size: 228 bytes
// Signature: undefined __cdecl getCollisionDistance(uint param_1, float * param_2, Vector3 param_3, float param_4, float param_5, Bt2ScenegraphPhysicsContext * param_6, PhysicsReport * param_7, uint param_8, bool param_9, bool param_10, bool param_11)


/* VehicleCollisionDistanceUtil::getCollisionDistance(unsigned int, float*, Vector3, float, float,
   Bt2ScenegraphPhysicsContext*, VehicleCollisionDistanceUtil::PhysicsReport*, unsigned int, bool,
   bool, bool) */

void VehicleCollisionDistanceUtil::getCollisionDistance
               (undefined8 param_1,float *param_2,Bt2ScenegraphPhysicsContext *param_3,
               PhysicsReport *param_4,uint param_5,bool param_6,bool param_7,bool param_8)

{
  long lVar1;
  float in_s3;
  float in_s4;
  bool local_84 [4];
  float *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  calculateDirections(param_1,param_2,&local_80,local_84);
  getCollisionDistance
            ((uint)param_1,param_2,local_80,in_s3,in_s4,param_3,param_4,param_5,param_6,param_7,
             param_8,local_84[0]);
  if (local_80 != (float *)0x0) {
    operator_delete__(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


