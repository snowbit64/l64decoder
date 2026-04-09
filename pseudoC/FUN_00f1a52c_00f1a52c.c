// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1a52c
// Entry Point: 00f1a52c
// Size: 408 bytes
// Signature: undefined FUN_00f1a52c(void)


void FUN_00f1a52c(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  long lVar10;
  undefined auStack_198 [28];
  undefined4 local_17c;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  cVar9 = *(char *)(param_1 + 3);
  lVar10 = puVar6[2];
  if ((cVar9 == '\x06') || (cVar9 == '\x01')) {
    *(undefined *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 0x10) = *puVar6;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  lVar8 = lVar1;
  if (*(long *)(param_1 + 0x28) - lVar1 < 0x141) {
    FUN_00f0ab24(param_1,0x14);
    lVar8 = *(long *)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x20);
  }
  puVar6[2] = lVar8 + 0x140;
  if (puVar6[3] == 0) {
    if (*(char *)(*(long *)puVar6[1] + 3) != '\0') goto LAB_00f1a608;
    lVar8 = *(long *)(*(long *)puVar6[1] + 0x18);
    iVar5 = 0;
LAB_00f1a618:
    local_17c = FUN_00f0a07c(lVar8,iVar5);
  }
  else {
    lVar7 = puVar6[3] + 4;
    puVar6[3] = lVar7;
    if (*(char *)(*(long *)puVar6[1] + 3) == '\0') {
      lVar8 = *(long *)(*(long *)puVar6[1] + 0x18);
      iVar5 = (int)((ulong)(lVar7 - *(long *)(lVar8 + 0x10)) >> 2) + -1;
      goto LAB_00f1a618;
    }
LAB_00f1a608:
    local_17c = 0xffffffff;
  }
  local_70 = param_3;
  (*param_2)(param_1,auStack_198);
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar8 + 0x18) != 0) {
    *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + -4;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  *(long *)(lVar8 + 0x10) = lVar7 + (lVar10 - lVar3);
  *(long *)(param_1 + 8) = lVar7 + (lVar1 - lVar3);
  if (cVar9 != '\x06') {
    if ((cVar9 != '\x01') || (*(char *)(param_1 + 3) == '\x01')) goto LAB_00f1a690;
    cVar9 = '\x01';
  }
  *(char *)(param_1 + 3) = cVar9;
  *(long *)(param_1 + 0x10) = lVar7 + (lVar2 - lVar3);
LAB_00f1a690:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


