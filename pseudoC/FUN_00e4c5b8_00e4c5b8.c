// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4c5b8
// Entry Point: 00e4c5b8
// Size: 312 bytes
// Signature: undefined FUN_00e4c5b8(void)


uint FUN_00e4c5b8(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x6f8);
  if ((int)uVar3 < 0) {
LAB_00e4c688:
    uVar3 = 0;
  }
  else {
    if ((int)uVar3 < (int)param_2) {
      if (0x18 < (int)param_2) {
        if (uVar3 < 0x18) {
          if (uVar3 == 0) {
            *(undefined4 *)(param_1 + 0x6f4) = 0;
          }
          do {
            iVar2 = FUN_00e4c7e4(param_1);
            if (iVar2 == -1) {
              uVar3 = 0;
              iVar2 = -1;
              goto LAB_00e4c6c8;
            }
            uVar1 = *(uint *)(param_1 + 0x6f8);
            uVar3 = uVar1 + 8;
            *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + (iVar2 << (ulong)(uVar1 & 0x1f))
            ;
            *(uint *)(param_1 + 0x6f8) = uVar3;
          } while ((int)uVar1 < 0x10);
        }
        iVar2 = uVar3 - 0x18;
        uVar3 = *(uint *)(param_1 + 0x6f4) & 0xffffff;
        *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> 0x18;
LAB_00e4c6c8:
        *(int *)(param_1 + 0x6f8) = iVar2;
        iVar2 = FUN_00e4c5b8(param_1,param_2 - 0x18);
        return uVar3 | iVar2 << 0x18;
      }
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x6f4) = 0;
      }
      do {
        iVar2 = FUN_00e4c7e4(param_1);
        if (iVar2 == -1) {
          iVar2 = -1;
          uVar3 = 0;
          goto LAB_00e4c6ac;
        }
        uVar1 = *(uint *)(param_1 + 0x6f8);
        uVar3 = uVar1 + 8;
        *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + (iVar2 << (ulong)(uVar1 & 0x1f));
        *(uint *)(param_1 + 0x6f8) = uVar3;
      } while ((int)uVar3 < (int)param_2);
      if ((int)(uVar1 + 8) < 0 != SCARRY4(uVar1,8)) goto LAB_00e4c688;
    }
    iVar2 = uVar3 - param_2;
    uVar3 = *(uint *)(param_1 + 0x6f4) & (-1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
    *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> (ulong)(param_2 & 0x1f);
LAB_00e4c6ac:
    *(int *)(param_1 + 0x6f8) = iVar2;
  }
  return uVar3;
}


