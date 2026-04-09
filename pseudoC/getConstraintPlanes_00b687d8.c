// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstraintPlanes
// Entry Point: 00b687d8
// Size: 320 bytes
// Signature: undefined __cdecl getConstraintPlanes(Plane * param_1, uchar param_2, Vector3 * param_3)


/* getConstraintPlanes(Plane*, unsigned char, Vector3 const&) */

uint getConstraintPlanes(Plane *param_1,uchar param_2,Vector3 *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = (param_2 & 1) != 0;
  if (bVar1) {
    local_50 = 0;
    local_58 = 0x3f800000;
    Plane::Plane((Plane *)&local_68,param_3,(Vector3 *)&local_58);
    *(undefined8 *)(param_1 + 8) = uStack_60;
    *(undefined8 *)param_1 = local_68;
  }
  uVar3 = (uint)bVar1;
  if ((param_2 >> 1 & 1) != 0) {
    local_50 = 0;
    local_58 = 0xbf800000;
    Plane::Plane((Plane *)&local_68,param_3,(Vector3 *)&local_58);
    *(undefined8 *)((long)(param_1 + (ulong)uVar3 * 0x10) + 8) = uStack_60;
    *(undefined8 *)(param_1 + (ulong)uVar3 * 0x10) = local_68;
    uVar3 = uVar3 + 1;
  }
  if ((param_2 >> 2 & 1) != 0) {
    local_50 = 0;
    local_58 = 0x3f80000000000000;
    Plane::Plane((Plane *)&local_68,param_3,(Vector3 *)&local_58);
    *(undefined8 *)((long)(param_1 + (ulong)uVar3 * 0x10) + 8) = uStack_60;
    *(undefined8 *)(param_1 + (ulong)uVar3 * 0x10) = local_68;
    uVar3 = uVar3 + 1;
  }
  uVar4 = uVar3;
  if ((param_2 >> 3 & 1) != 0) {
    local_50 = 0;
    local_58 = 0xbf80000000000000;
    Plane::Plane((Plane *)&local_68,param_3,(Vector3 *)&local_58);
    uVar4 = uVar3 + 1;
    *(undefined8 *)((long)(param_1 + (ulong)uVar3 * 0x10) + 8) = uStack_60;
    *(undefined8 *)(param_1 + (ulong)uVar3 * 0x10) = local_68;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


