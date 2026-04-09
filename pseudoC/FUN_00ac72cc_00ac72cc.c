// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ac72cc
// Entry Point: 00ac72cc
// Size: 288 bytes
// Signature: undefined FUN_00ac72cc(void)


undefined8 FUN_00ac72cc(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_2;
  lVar5 = *param_1;
  uVar1 = *(uint *)(lVar3 + 0x18);
  uVar2 = *(uint *)(lVar5 + 0x18);
  if (uVar1 == uVar2) {
    if (*(uint *)(lVar5 + 0x10) <= *(uint *)(lVar3 + 0x10)) {
LAB_00ac72f4:
      lVar5 = *param_3;
      if (*(uint *)(lVar5 + 0x18) == uVar1) {
        if (*(uint *)(lVar3 + 0x10) <= *(uint *)(lVar5 + 0x10)) {
          return 0;
        }
      }
      else if (uVar1 <= *(uint *)(lVar5 + 0x18)) {
        return 0;
      }
      *param_2 = lVar5;
      *param_3 = lVar3;
      lVar3 = *param_2;
      lVar5 = *param_1;
      if (*(uint *)(lVar3 + 0x18) == *(uint *)(lVar5 + 0x18)) {
        if (*(uint *)(lVar5 + 0x10) <= *(uint *)(lVar3 + 0x10)) {
          return 1;
        }
      }
      else if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar3 + 0x18)) {
        return 1;
      }
      *param_1 = lVar3;
      *param_2 = lVar5;
      return 2;
    }
  }
  else if (uVar2 <= uVar1) goto LAB_00ac72f4;
  lVar6 = *param_3;
  if (*(uint *)(lVar6 + 0x18) == uVar1) {
    if (*(uint *)(lVar6 + 0x10) < *(uint *)(lVar3 + 0x10)) {
LAB_00ac73a8:
      uVar4 = 1;
      *param_1 = lVar6;
      goto LAB_00ac73c0;
    }
  }
  else if (*(uint *)(lVar6 + 0x18) < uVar1) goto LAB_00ac73a8;
  *param_1 = lVar3;
  *param_2 = lVar5;
  lVar3 = *param_3;
  if (*(uint *)(lVar3 + 0x18) == uVar2) {
    if (*(uint *)(lVar5 + 0x10) <= *(uint *)(lVar3 + 0x10)) {
      return 1;
    }
  }
  else if (uVar2 <= *(uint *)(lVar3 + 0x18)) {
    return 1;
  }
  uVar4 = 2;
  *param_2 = lVar3;
LAB_00ac73c0:
  *param_3 = lVar5;
  return uVar4;
}


