// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e27ee0
// Entry Point: 00e27ee0
// Size: 400 bytes
// Signature: undefined FUN_00e27ee0(void)


void FUN_00e27ee0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x84);
  uVar6 = (ulong)uVar3;
  puVar4 = (ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar3 * 2);
  if (2 < uVar3 - 1) {
    uVar9 = (ulong)(uVar3 - 1) + 1;
    uVar5 = uVar9 & 0x1fffffffc;
    uVar3 = uVar3 - (int)uVar5;
    puVar4 = puVar4 + -uVar5;
    puVar7 = (undefined2 *)(*(long *)(param_1 + 0x78) + uVar6 * 2 + -4);
    uVar6 = uVar5;
    do {
      uVar6 = uVar6 - 4;
      uVar10 = NEON_uqsub((ulong)CONCAT24(*puVar7,(uint)(ushort)puVar7[1]),CONCAT44(uVar2,uVar2),4);
      uVar11 = NEON_uqsub((ulong)CONCAT24(puVar7[-2],(uint)(ushort)puVar7[-1]),CONCAT44(uVar2,uVar2)
                          ,4);
      uVar10 = NEON_rev64(uVar10,4);
      uVar11 = NEON_rev64(uVar11,4);
      *puVar7 = (short)uVar10;
      puVar7[-2] = (short)uVar11;
      puVar7[1] = (short)((ulong)uVar10 >> 0x20);
      puVar7[-1] = (short)((ulong)uVar11 >> 0x20);
      puVar7 = puVar7 + -4;
    } while (uVar6 != 0);
    if (uVar9 == uVar5) goto LAB_00e27fac;
  }
  do {
    puVar4 = puVar4 + -1;
    uVar1 = 0;
    if (uVar2 <= *puVar4) {
      uVar1 = *puVar4 - (short)uVar2;
    }
    uVar3 = uVar3 - 1;
    *puVar4 = uVar1;
  } while (uVar3 != 0);
LAB_00e27fac:
  puVar4 = (ushort *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 2);
  uVar3 = uVar2;
  if (2 < uVar2 - 1) {
    uVar6 = (ulong)(uVar2 - 1) + 1;
    uVar5 = uVar6 & 0x1fffffffc;
    puVar8 = puVar4 + -2;
    uVar9 = uVar5;
    do {
      uVar9 = uVar9 - 4;
      uVar10 = NEON_uqsub((ulong)CONCAT24(*puVar8,(uint)puVar8[1]),CONCAT44(uVar2,uVar2),4);
      uVar11 = NEON_uqsub((ulong)CONCAT24(puVar8[-2],(uint)puVar8[-1]),CONCAT44(uVar2,uVar2),4);
      uVar10 = NEON_rev64(uVar10,4);
      uVar11 = NEON_rev64(uVar11,4);
      *puVar8 = (ushort)uVar10;
      puVar8[-2] = (ushort)uVar11;
      puVar8[1] = (ushort)((ulong)uVar10 >> 0x20);
      puVar8[-1] = (ushort)((ulong)uVar11 >> 0x20);
      puVar8 = puVar8 + -4;
    } while (uVar9 != 0);
    uVar3 = uVar2 - (int)uVar5;
    puVar4 = puVar4 + -uVar5;
    if (uVar6 == uVar5) {
      return;
    }
  }
  do {
    puVar4 = puVar4 + -1;
    uVar1 = 0;
    if (uVar2 <= *puVar4) {
      uVar1 = *puVar4 - (short)uVar2;
    }
    uVar3 = uVar3 - 1;
    *puVar4 = uVar1;
  } while (uVar3 != 0);
  return;
}


