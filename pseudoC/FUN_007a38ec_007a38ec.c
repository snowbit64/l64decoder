// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a38ec
// Entry Point: 007a38ec
// Size: 168 bytes
// Signature: undefined FUN_007a38ec(void)


void FUN_007a38ec(long param_1,long param_2)

{
  long lVar1;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  uStack_78 = *(undefined8 *)(param_1 + 0xc0);
  local_80 = *(undefined8 *)(param_1 + 0xb8);
  uStack_68 = *(undefined8 *)(param_1 + 0xd0);
  uStack_70 = *(undefined8 *)(param_1 + 200);
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  local_60 = *(undefined8 *)(param_1 + 0xd8);
  uStack_48 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  Matrix4x4::orthonormalize3x3();
  Matrix4x4::getEulerAngles((Matrix4x4 *)&local_80,(Vector3 *)&local_90,(Vector3 *)0x0);
  *(undefined4 *)(param_2 + 0x100) = local_90;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x110) = uStack_8c;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x120) = local_88;
  *(undefined4 *)(param_2 + 0x128) = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


