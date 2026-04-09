// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipWriteInFileInZip
// Entry Point: 00e35878
// Size: 396 bytes
// Signature: undefined zipWriteInFileInZip(void)


undefined8 zipWriteInFileInZip(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x70) != 0)) {
    uVar3 = crc32(*(undefined8 *)(param_1 + 0x10130));
    *(undefined8 *)(param_1 + 0x10130) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    *(int *)(param_1 + 0x80) = param_3;
    if (param_3 != 0) {
      do {
        uVar5 = *(uint *)(param_1 + 0x98);
        if (uVar5 == 0) {
          uVar3 = FUN_00e35a04(param_1);
          uVar5 = 0x10000;
          *(long *)(param_1 + 0x90) = param_1 + 0x128;
          *(undefined4 *)(param_1 + 0x98) = 0x10000;
          if ((int)uVar3 == -1) {
            return uVar3;
          }
        }
        if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
          iVar2 = *(int *)(param_1 + 0xa0);
          uVar3 = deflate((undefined8 *)(param_1 + 0x78),0);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + (*(int *)(param_1 + 0xa0) - iVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        else {
          uVar7 = *(uint *)(param_1 + 0x80);
          uVar1 = uVar7;
          if (uVar5 <= uVar7) {
            uVar1 = uVar5;
          }
          uVar4 = (ulong)uVar1;
          if (uVar1 == 0) {
            uVar4 = 0;
          }
          else {
            uVar6 = 0;
            do {
              *(undefined *)(*(long *)(param_1 + 0x90) + uVar6) =
                   *(undefined *)(*(long *)(param_1 + 0x78) + uVar6);
              uVar6 = uVar6 + 1;
            } while (uVar4 != uVar6);
            uVar7 = *(uint *)(param_1 + 0x80);
            uVar5 = *(uint *)(param_1 + 0x98);
          }
          *(uint *)(param_1 + 0x80) = uVar7 - uVar1;
          *(uint *)(param_1 + 0x98) = uVar5 - uVar1;
          *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar4;
          *(ulong *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + uVar4;
          *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + uVar4;
          *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + uVar4;
          *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + uVar1;
        }
      } while (*(int *)(param_1 + 0x80) != 0);
    }
    return 0;
  }
  return 0xffffff9a;
}


