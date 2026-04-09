// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f41538
// Entry Point: 00f41538
// Size: 372 bytes
// Signature: undefined FUN_00f41538(void)


void FUN_00f41538(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if ((param_4 == 0) || (*(long *)(param_2 + 0x30) == 0)) {
    uVar3 = *(uint *)(param_3 + 4);
    if (uVar3 == *(uint *)(param_3 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar2 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar2 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          uVar3 = *(uint *)(param_3 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(param_3 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 * 8 - lVar4 != 0);
        }
        if ((*(long *)(param_3 + 0x10) != 0) && (*(char *)(param_3 + 0x18) != '\0')) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar3 = *(uint *)(param_3 + 4);
        }
        *(long *)(param_3 + 0x10) = lVar2;
        *(uint *)(param_3 + 8) = uVar1;
        *(undefined *)(param_3 + 0x18) = 1;
      }
    }
    *(long *)(*(long *)(param_3 + 0x10) + (long)(int)uVar3 * 8) = param_2;
    *(uint *)(param_3 + 4) = uVar3 + 1;
  }
  else {
    FUN_00f41538(param_1,*(undefined8 *)(param_2 + 0x28),param_3,param_4 + -1);
    FUN_00f41538(param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_4 + -1);
    if (*(long *)(param_1 + 8) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}


