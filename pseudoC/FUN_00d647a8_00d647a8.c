// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d647a8
// Entry Point: 00d647a8
// Size: 228 bytes
// Signature: undefined FUN_00d647a8(void)


void FUN_00d647a8(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  code **ppcVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  uVar3 = *(uint *)(param_1 + 0xe4);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      iVar8 = 0;
    }
    else {
      uVar2 = 0xffffffff;
      do {
        uVar6 = uVar2;
        uVar2 = uVar6 + 1;
        bVar1 = 3 < uVar3;
        uVar3 = (int)uVar3 >> 1;
      } while (bVar1);
      iVar8 = uVar6 + 2;
      if (0xd < uVar2) {
        ppcVar4 = (code **)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(ppcVar4 + 5) = 0x29;
        (**ppcVar4)();
      }
    }
    uVar3 = iVar8 << 4;
    lVar7 = param_1 + (long)*(int *)(param_1 + 0xe0) * 8;
    if (*(char *)(param_1 + 0xc0) == '\0') {
      lVar7 = *(long *)(lVar7 + 0x60);
      FUN_00d64bd0(param_1,*(undefined4 *)(lVar7 + (long)(int)uVar3 * 4),
                   *(undefined *)(lVar7 + (int)uVar3 + 0x400));
    }
    else {
      uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      lVar7 = *(long *)(lVar7 + 0xa0);
      *(long *)(lVar7 + uVar5) = *(long *)(lVar7 + uVar5) + 1;
    }
    if (iVar8 != 0) {
      FUN_00d64bd0(param_1,*(undefined4 *)(param_1 + 0xe4),iVar8);
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_00d64d88(param_1,*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}


