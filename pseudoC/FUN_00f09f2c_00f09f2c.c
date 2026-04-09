// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f09f2c
// Entry Point: 00f09f2c
// Size: 336 bytes
// Signature: undefined FUN_00f09f2c(void)


void FUN_00f09f2c(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar1 = *(uint *)(param_2 + 0x60);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if ((*(char *)(*(long *)(param_2 + 0x10) + uVar4 * 4) != 'A') &&
           (*(int *)(*(long *)(param_2 + 0x28) +
                    (long)(int)((uint)uVar4 >> (ulong)(*(uint *)(param_2 + 0x78) & 0x1f)) * 4) +
            (uint)*(byte *)(*(long *)(param_2 + 0x20) + uVar4) == param_3)) {
          if (*(long *)(param_2 + 0x50) == 0) {
            puVar2 = (undefined *)FUN_00f10090(param_1,(long)(int)uVar1,*(undefined *)(param_2 + 2))
            ;
            *(undefined **)(param_2 + 0x50) = puVar2;
            if ((0 < *(int *)(param_2 + 0x60)) &&
               (*puVar2 = (char)**(undefined4 **)(param_2 + 0x10), 1 < *(int *)(param_2 + 0x60))) {
              lVar5 = 1;
              do {
                *(char *)(*(long *)(param_2 + 0x50) + lVar5) =
                     (char)*(undefined4 *)(*(long *)(param_2 + 0x10) + lVar5 * 4);
                lVar5 = lVar5 + 1;
              } while (lVar5 < *(int *)(param_2 + 0x60));
            }
          }
          if ((param_4 & 1) == 0) {
            uVar3 = *(undefined *)(*(long *)(param_2 + 0x50) + uVar4);
          }
          else {
            uVar3 = 1;
          }
          *(undefined *)(*(long *)(param_2 + 0x10) + uVar4 * 4) = uVar3;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  if (0 < *(int *)(param_2 + 100)) {
    lVar5 = 0;
    do {
      FUN_00f09f2c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x18) + lVar5 * 8),param_3,
                   param_4 & 1);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 100));
  }
  return;
}


