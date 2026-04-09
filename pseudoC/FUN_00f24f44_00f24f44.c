// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24f44
// Entry Point: 00f24f44
// Size: 328 bytes
// Signature: undefined FUN_00f24f44(void)


void FUN_00f24f44(long param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  uVar7 = (uint)(param_4 >> 0x1e) & 3;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar5 = (uint)param_4;
  uVar2 = uVar5 >> 0x14 & 0x3ff;
  if ((param_4 >> 0x1e & 3) == 0) {
    uVar2 = 0xffffffff;
  }
  uVar3 = uVar5 >> 10 & 0x3ff;
  if (-1 < (int)uVar5) {
    uVar3 = 0xffffffff;
  }
  lVar6 = *(long *)(param_1 + 8);
  uVar1 = uVar5 & 0x3ff;
  if (uVar7 < 3) {
    uVar1 = 0xffffffff;
  }
  if (*(long *)(param_1 + 0x28) - lVar6 < 0x11) {
    FUN_00f0ab24(param_1,1);
    lVar6 = *(long *)(param_1 + 8);
  }
  *(undefined4 *)(lVar6 + 0xc) = 0;
  *(long *)(param_1 + 8) = lVar6 + 0x10;
  local_6c = 6;
  local_78 = param_2;
  FUN_00f25d84(param_1,&local_78,param_3 + (long)(int)uVar2 * 0x10);
  if ((int)uVar5 < 0) {
    if (((param_5 & 1) != 0) && (*(int *)(*(long *)(param_1 + 8) + -4) == 0)) goto LAB_00f25058;
    lVar6 = *(long *)(param_1 + 8) + -0x10;
    FUN_00f25d84(param_1,lVar6,param_3 + (long)(int)uVar3 * 0x10,lVar6);
  }
  if ((2 < uVar7) && (((param_5 & 1) == 0 || (*(int *)(*(long *)(param_1 + 8) + -4) != 0)))) {
    lVar6 = *(long *)(param_1 + 8) + -0x10;
    FUN_00f25d84(param_1,lVar6,param_3 + (long)(int)uVar1 * 0x10,lVar6);
  }
LAB_00f25058:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


