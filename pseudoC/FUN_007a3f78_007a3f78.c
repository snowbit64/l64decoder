// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a3f78
// Entry Point: 007a3f78
// Size: 156 bytes
// Signature: undefined FUN_007a3f78(void)


void FUN_007a3f78(long param_1,long param_2)

{
  long lVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x41) >> 3 & 1) != 0) {
    TransformGroup::updateEulerFromMatrix();
  }
  GsQuaternion::GsQuaternion((GsQuaternion *)&local_48,(Vector3 *)(param_1 + 0x13c));
  *(undefined4 *)(param_2 + 0x100) = local_44;
  *(undefined4 *)(param_2 + 0x110) = uStack_40;
  *(undefined4 *)(param_2 + 0x120) = local_3c;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x130) = local_48;
  *(undefined4 *)(param_2 + 0x138) = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


