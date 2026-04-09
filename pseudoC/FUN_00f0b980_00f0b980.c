// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0b980
// Entry Point: 00f0b980
// Size: 208 bytes
// Signature: undefined FUN_00f0b980(void)


void FUN_00f0b980(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  undefined uVar1;
  byte bVar2;
  undefined uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  puVar4 = (undefined *)
           FUN_00f10278(param_1,(-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 |
                                (ulong)param_2 << 4) + 0x20,*(undefined *)(param_1 + 4));
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined *)(param_1 + 4);
  puVar4[3] = 0;
  bVar2 = *(byte *)(lVar5 + 0x20);
  *puVar4 = 7;
  uVar3 = *(undefined *)(param_4 + 0x83);
  puVar4[2] = uVar1;
  puVar4[4] = (char)param_2;
  puVar4[6] = 0;
  puVar4[5] = uVar3;
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(long *)(puVar4 + 0x18) = param_4;
  puVar4[1] = bVar2 & 3;
  if (0 < (int)param_2) {
    uVar6 = (ulong)param_2;
    if (param_2 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xfffffffe;
      puVar8 = (undefined4 *)(puVar4 + 0x3c);
      uVar9 = uVar7;
      do {
        uVar9 = uVar9 - 2;
        puVar8[-4] = 0;
        *puVar8 = 0;
        puVar8 = puVar8 + 8;
      } while (uVar9 != 0);
      if (uVar7 == uVar6) {
        return;
      }
    }
    lVar5 = uVar6 - uVar7;
    puVar8 = (undefined4 *)(puVar4 + uVar7 * 0x10 + 0x2c);
    do {
      lVar5 = lVar5 + -1;
      *puVar8 = 0;
      puVar8 = puVar8 + 4;
    } while (lVar5 != 0);
  }
  return;
}


