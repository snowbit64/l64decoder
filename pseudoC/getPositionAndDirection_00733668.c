// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 00733668
// Size: 172 bytes
// Signature: undefined __cdecl getPositionAndDirection(float param_1, PlanarPose * param_2)


/* RoadSegment::getPositionAndDirection(float, PlanarPose&) const */

void RoadSegment::getPositionAndDirection(float param_1,PlanarPose *param_2)

{
  long lVar1;
  undefined4 *in_x1;
  float fVar2;
  float fVar3;
  float local_48 [2];
  float local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)param_2 + 0x10))(*(long **)param_2,local_38,local_48);
  fVar3 = (float)NEON_fmadd(local_48[0],local_48[0],local_40 * local_40);
  fVar2 = 1.0;
  *in_x1 = local_38[0];
  in_x1[1] = local_30;
  if (1e-06 < fVar3) {
    fVar2 = 1.0 / SQRT(fVar3);
  }
  in_x1[2] = local_48[0] * fVar2;
  in_x1[3] = local_40 * fVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


