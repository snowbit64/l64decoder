// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 00733724
// Size: 172 bytes
// Signature: undefined __cdecl getPositionAndDirection(uint param_1, float param_2, PlanarPose * param_3)


/* RoadSegment::getPositionAndDirection(unsigned int, float, PlanarPose&) const */

void RoadSegment::getPositionAndDirection(uint param_1,float param_2,PlanarPose *param_3)

{
  long lVar1;
  undefined4 *in_x2;
  float fVar2;
  float fVar3;
  float local_48 [2];
  float local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(ulong)param_1 + 0x18))
            (*(long **)(ulong)param_1,param_3,local_38,local_48);
  fVar3 = (float)NEON_fmadd(local_48[0],local_48[0],local_40 * local_40);
  fVar2 = 1.0;
  *in_x2 = local_38[0];
  in_x2[1] = local_30;
  if (1e-06 < fVar3) {
    fVar2 = 1.0 / SQRT(fVar3);
  }
  in_x2[2] = local_48[0] * fVar2;
  in_x2[3] = local_40 * fVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


