// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00af09b0
// Entry Point: 00af09b0
// Size: 288 bytes
// Signature: undefined FUN_00af09b0(void)


undefined8 FUN_00af09b0(long *param_1,long *param_2,long *param_3)

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
LAB_00af09d8:
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
  else if (uVar2 <= uVar1) goto LAB_00af09d8;
  lVar6 = *param_3;
  if (*(uint *)(lVar6 + 0x18) == uVar1) {
    if (*(uint *)(lVar6 + 0x10) < *(uint *)(lVar3 + 0x10)) {
LAB_00af0a8c:
      uVar4 = 1;
      *param_1 = lVar6;
      goto LAB_00af0aa4;
    }
  }
  else if (*(uint *)(lVar6 + 0x18) < uVar1) goto LAB_00af0a8c;
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
LAB_00af0aa4:
  *param_3 = lVar5;
  return uVar4;
}


