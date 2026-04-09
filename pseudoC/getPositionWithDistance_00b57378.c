// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionWithDistance
// Entry Point: 00b57378
// Size: 200 bytes
// Signature: undefined __cdecl getPositionWithDistance(float param_1, float param_2, bool param_3, float param_4, Vector3 * param_5)


/* LinearSpline::getPositionWithDistance(float, float, bool, float, Vector3&) const */

float LinearSpline::getPositionWithDistance
                (float param_1,float param_2,bool param_3,float param_4,Vector3 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *in_x2;
  float fVar3;
  float fVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  long local_48;
  
  plVar2 = (long *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_68,auStack_58);
  fVar3 = 1.0 / *(float *)((long)plVar2 + 0x2c);
  fVar4 = fVar3 * param_2;
  if (((ulong)param_5 & 1) == 0) {
    fVar4 = -(fVar3 * param_2);
  }
  (**(code **)(*plVar2 + 0x10))(fVar4 + param_1,plVar2,&local_78,auStack_58);
  *in_x2 = local_78;
  *(undefined4 *)(in_x2 + 1) = local_70;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar4 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


