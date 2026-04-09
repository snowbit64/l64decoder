// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c860
// Entry Point: 0078c860
// Size: 148 bytes
// Signature: undefined FUN_0078c860(void)


void FUN_0078c860(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_1;
  uStack_34 = param_1[4];
  local_30 = param_1[8];
  GsQuaternion::GsQuaternion((GsQuaternion *)&local_48,(Vector3 *)&local_38);
  param_1[0x40] = local_44;
  param_1[0x44] = uStack_40;
  param_1[0x48] = local_3c;
  param_1[0x42] = 4;
  param_1[0x46] = 4;
  param_1[0x4a] = 4;
  param_1[0x4c] = local_48;
  param_1[0x4e] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


