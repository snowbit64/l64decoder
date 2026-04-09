// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc3b0
// Entry Point: 007bc3b0
// Size: 136 bytes
// Signature: undefined FUN_007bc3b0(void)


void FUN_007bc3b0(DensityMapEntity *param_1,char **param_2)

{
  long lVar1;
  byte bVar2;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_4c = *(undefined4 *)(param_2 + 2);
  local_40 = 0;
  uStack_38 = 0;
  local_58 = &PTR__ResourceDesc_00fdba40;
  local_48 = 0;
  local_30 = 0;
  local_50 = 1;
  bVar2 = DensityMapEntity::loadFromFile(param_1,*param_2,(DensityMapDesc *)&local_58);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


