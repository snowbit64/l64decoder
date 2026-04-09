// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a4460
// Entry Point: 007a4460
// Size: 176 bytes
// Signature: undefined FUN_007a4460(void)


void FUN_007a4460(long param_1,long param_2)

{
  long lVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
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
  GsQuaternion::set((GsQuaternion *)&local_90,(Matrix4x4 *)&local_80);
  *(undefined4 *)(param_2 + 0x100) = local_8c;
  *(undefined4 *)(param_2 + 0x110) = uStack_88;
  *(undefined4 *)(param_2 + 0x120) = local_84;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x130) = local_90;
  *(undefined4 *)(param_2 + 0x138) = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


