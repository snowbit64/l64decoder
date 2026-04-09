// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: randomizeConstraints
// Entry Point: 00f81a18
// Size: 384 bytes
// Signature: undefined randomizeConstraints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::randomizeConstraints() */

void btSoftBody::randomizeConstraints(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long in_x0;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar5 = tpidr_el0;
  lVar6 = *(long *)(lVar5 + 0x28);
  uVar7 = 0x3b7f7;
  uVar2 = *(uint *)(in_x0 + 0x394);
  if (0 < (int)uVar2) {
    lVar8 = 0;
    do {
      uVar3 = (int)uVar7 * 0x19660d + 0x3c6ef35f;
      uVar7 = (ulong)uVar3;
      iVar4 = 0;
      if ((long)(int)uVar2 != 0) {
        iVar4 = (int)(uVar7 / (ulong)(long)(int)uVar2);
      }
      puVar1 = (undefined8 *)(*(long *)(in_x0 + 0x3a0) + lVar8);
      lVar8 = lVar8 + 0x48;
      uVar15 = puVar1[5];
      uVar12 = puVar1[4];
      uVar21 = puVar1[7];
      uVar18 = puVar1[6];
      puVar9 = (undefined8 *)(*(long *)(in_x0 + 0x3a0) + (long)(int)(uVar3 - iVar4 * uVar2) * 0x48);
      uVar10 = puVar1[8];
      uVar22 = puVar1[1];
      uVar19 = *puVar1;
      uVar16 = puVar1[3];
      uVar13 = puVar1[2];
      uVar11 = *puVar9;
      puVar1[1] = puVar9[1];
      *puVar1 = uVar11;
      uVar24 = puVar9[2];
      uVar23 = puVar9[5];
      uVar20 = puVar9[4];
      uVar17 = puVar9[7];
      uVar14 = puVar9[6];
      uVar11 = puVar9[8];
      puVar1[3] = puVar9[3];
      puVar1[2] = uVar24;
      puVar1[5] = uVar23;
      puVar1[4] = uVar20;
      puVar1[7] = uVar17;
      puVar1[6] = uVar14;
      puVar1[8] = uVar11;
      puVar9[1] = uVar22;
      *puVar9 = uVar19;
      puVar9[3] = uVar16;
      puVar9[2] = uVar13;
      puVar9[5] = uVar15;
      puVar9[4] = uVar12;
      puVar9[7] = uVar21;
      puVar9[6] = uVar18;
      puVar9[8] = uVar10;
    } while (((ulong)uVar2 + (ulong)uVar2 * 8) * 8 - lVar8 != 0);
  }
  uVar2 = *(uint *)(in_x0 + 0x3b4);
  if (0 < (int)uVar2) {
    lVar8 = 0;
    do {
      uVar3 = (int)uVar7 * 0x19660d + 0x3c6ef35f;
      uVar7 = (ulong)uVar3;
      iVar4 = 0;
      if ((long)(int)uVar2 != 0) {
        iVar4 = (int)(uVar7 / (ulong)(long)(int)uVar2);
      }
      puVar1 = (undefined8 *)(*(long *)(in_x0 + 0x3c0) + lVar8);
      lVar8 = lVar8 + 0x48;
      uVar15 = puVar1[5];
      uVar12 = puVar1[4];
      uVar21 = puVar1[7];
      uVar18 = puVar1[6];
      puVar9 = (undefined8 *)(*(long *)(in_x0 + 0x3c0) + (long)(int)(uVar3 - iVar4 * uVar2) * 0x48);
      uVar10 = puVar1[8];
      uVar22 = puVar1[1];
      uVar19 = *puVar1;
      uVar16 = puVar1[3];
      uVar13 = puVar1[2];
      uVar11 = *puVar9;
      puVar1[1] = puVar9[1];
      *puVar1 = uVar11;
      uVar24 = puVar9[2];
      uVar23 = puVar9[5];
      uVar20 = puVar9[4];
      uVar17 = puVar9[7];
      uVar14 = puVar9[6];
      uVar11 = puVar9[8];
      puVar1[3] = puVar9[3];
      puVar1[2] = uVar24;
      puVar1[5] = uVar23;
      puVar1[4] = uVar20;
      puVar1[7] = uVar17;
      puVar1[6] = uVar14;
      puVar1[8] = uVar11;
      puVar9[1] = uVar22;
      *puVar9 = uVar19;
      puVar9[3] = uVar16;
      puVar9[2] = uVar13;
      puVar9[5] = uVar15;
      puVar9[4] = uVar12;
      puVar9[7] = uVar21;
      puVar9[6] = uVar18;
      puVar9[8] = uVar10;
    } while (((ulong)uVar2 + (ulong)uVar2 * 8) * 8 - lVar8 != 0);
  }
  if (*(long *)(lVar5 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


