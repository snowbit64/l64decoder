// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d33b4c
// Entry Point: 00d33b4c
// Size: 280 bytes
// Signature: undefined FUN_00d33b4c(void)


void FUN_00d33b4c(ulong *param_1,undefined *param_2,long param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined uVar3;
  bool bVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar2 = param_2 + param_3;
  puVar1 = param_1 + 5;
  do {
    if (param_2 < puVar2) {
      puVar6 = (ulong *)param_1[5];
      if (puVar6 < puVar1) {
        puVar7 = puVar2 + (-1 - (long)param_2);
        do {
          puVar5 = param_2;
          uVar3 = *puVar5;
          param_1[5] = (long)puVar6 + 1;
          *(undefined *)puVar6 = uVar3;
          param_2 = puVar2;
          if (puVar7 == (undefined *)0x0) break;
          puVar6 = (ulong *)param_1[5];
          puVar7 = puVar7 + -1;
          param_2 = puVar5 + 1;
        } while (puVar6 < puVar1);
        bVar4 = puVar5 + 1 < puVar2;
        puVar6 = (ulong *)param_1[5];
      }
      else {
        bVar4 = true;
        puVar6 = (ulong *)param_1[5];
      }
    }
    else {
      bVar4 = false;
      puVar6 = (ulong *)param_1[5];
    }
    if (puVar6 < puVar1) {
      return;
    }
    uVar10 = param_1[1];
    uVar12 = uVar10 + *param_1;
    uVar8 = uVar12 ^ (uVar10 >> 0x33 | uVar10 << 0xd);
    uVar10 = param_1[4] ^ param_1[3];
    uVar11 = uVar10 + param_1[2] ^ (uVar10 >> 0x30 | uVar10 << 0x10);
    uVar10 = uVar8 + uVar10 + param_1[2];
    uVar9 = uVar10 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
    uVar12 = (uVar12 >> 0x20 | uVar12 << 0x20) + uVar11;
    uVar8 = uVar9 + uVar12;
    uVar12 = uVar12 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
    uVar9 = uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
    uVar10 = uVar12 + (uVar10 >> 0x20 | uVar10 << 0x20);
    uVar11 = uVar10 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
    uVar10 = uVar9 + uVar10;
    uVar12 = (uVar8 >> 0x20 | uVar8 << 0x20) + uVar11;
    param_1[2] = uVar10 >> 0x20 | uVar10 << 0x20;
    param_1[3] = uVar12 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
    *param_1 = uVar12 ^ param_1[4];
    param_1[1] = uVar10 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
    param_1[5] = (ulong)(param_1 + 4);
    param_1[6] = param_1[6] + 8;
    if (!bVar4) {
      return;
    }
  } while( true );
}


