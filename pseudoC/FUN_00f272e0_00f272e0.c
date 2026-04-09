// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f272e0
// Entry Point: 00f272e0
// Size: 128 bytes
// Signature: undefined FUN_00f272e0(void)


void FUN_00f272e0(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  basic_string *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  byte abStack_70 [16];
  char *pcStack_60;
  long lStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  
  puVar4 = (undefined8 *)FUN_00f197f8(param_1,param_2,4);
  if (*(int *)((long)puVar4 + 0xc) == 7) {
    puVar7 = *(undefined8 **)(param_1 + 8);
    if (param_2 < puVar7) {
      do {
        puVar8 = puVar7 + -2;
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7 = puVar8;
      } while (param_2 < puVar8);
      puVar7 = *(undefined8 **)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 8) = puVar7 + 2;
    uVar10 = *puVar4;
    param_2[1] = puVar4[1];
    *param_2 = uVar10;
    return;
  }
  auVar11 = FUN_00f09b40(param_1,param_2,&DAT_004d0e4c);
  pbVar6 = auVar11._8_8_;
  pcStack_48 = std::__ndk1::random_device::random_device;
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(pbVar6 + 4);
  if ((*(byte *)pbVar6 & 1) == 0) {
    lVar9 = (long)pbVar6 + 1;
  }
  puStack_50 = &stack0xffffffffffffffe0;
  iVar3 = __open_2(lVar9,0);
  *auVar11._0_8_ = iVar3;
  if (iVar3 < 0) {
    piVar5 = (int *)__errno();
    iVar3 = *piVar5;
    std::__ndk1::operator+("random_device failed to open ",pbVar6);
    pcVar1 = (char *)((ulong)abStack_70 | 1);
    if ((abStack_70[0] & 1) != 0) {
      pcVar1 = pcStack_60;
    }
    std::__ndk1::__throw_system_error(iVar3,pcVar1);
  }
  else if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


