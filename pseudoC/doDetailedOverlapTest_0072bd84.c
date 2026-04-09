// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doDetailedOverlapTest
// Entry Point: 0072bd84
// Size: 144 bytes
// Signature: undefined __cdecl doDetailedOverlapTest(btCollisionObject * param_1, bool param_2)


/* VehicleNavigationMapGenerator::PhysicsTask::doDetailedOverlapTest(btCollisionObject const*, bool)
    */

bool VehicleNavigationMapGenerator::PhysicsTask::doDetailedOverlapTest
               (btCollisionObject *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  float local_48 [2];
  float local_40;
  float local_38 [2];
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)((ulong)param_2 + 200);
  (**(code **)(*plVar2 + 0x10))(plVar2,(ulong)param_2 + 8,local_38,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0x3f < (uint)(int)(local_48[0] - local_38[0]) || 0x3f < (uint)(int)(local_40 - local_30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


