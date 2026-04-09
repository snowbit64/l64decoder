// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeFaceTree
// Entry Point: 00f862c4
// Size: 532 bytes
// Signature: undefined initializeFaceTree(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::initializeFaceTree() */

void btSoftBody::initializeFaceTree(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long in_x0;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(long *)(in_x0 + 0x518) != 0) {
    FUN_00f41318(in_x0 + 0x518);
  }
  if (*(long *)(in_x0 + 0x520) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x520) = 0;
  *(undefined4 *)(in_x0 + 0x528) = 0xffffffff;
  if ((*(long *)(in_x0 + 0x548) != 0) && (*(char *)(in_x0 + 0x550) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x548) = 0;
  *(undefined4 *)(in_x0 + 0x540) = 0;
  *(undefined *)(in_x0 + 0x550) = 1;
  *(undefined4 *)(in_x0 + 0x53c) = 0;
  *(undefined4 *)(in_x0 + 0x530) = 0;
  if (0 < *(int *)(in_x0 + 0x3b4)) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      lVar10 = *(long *)(in_x0 + 0x3c0);
      puVar7 = *(undefined8 **)(in_x0 + 0x520);
      lVar1 = lVar10 + lVar8;
      lVar2 = *(long *)(lVar1 + 0x10);
      lVar3 = *(long *)(lVar1 + 0x18);
      lVar6 = *(long *)(lVar1 + 0x20);
      fVar20 = *(float *)(lVar2 + 0x10);
      fVar21 = *(float *)(lVar2 + 0x14);
      fVar22 = *(float *)(lVar2 + 0x18);
      fVar19 = *(float *)(lVar2 + 0x1c);
      fVar16 = *(float *)(lVar3 + 0x10);
      fVar17 = *(float *)(lVar3 + 0x14);
      fVar18 = *(float *)(lVar3 + 0x18);
      fVar15 = *(float *)(lVar3 + 0x1c);
      fVar23 = *(float *)(lVar6 + 0x10);
      fVar24 = *(float *)(lVar6 + 0x14);
      fVar26 = *(float *)(lVar6 + 0x18);
      fVar25 = *(float *)(lVar6 + 0x1c);
      if (puVar7 == (undefined8 *)0x0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
        puVar7[6] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
      }
      else {
        *(undefined8 *)(in_x0 + 0x520) = 0;
      }
      uVar11 = NEON_fminnm(fVar16,fVar20);
      uVar12 = NEON_fminnm(fVar17,fVar21);
      uVar13 = NEON_fminnm(fVar18,fVar22);
      uVar14 = NEON_fminnm(fVar15,fVar19);
      if (fVar20 <= fVar16) {
        fVar20 = fVar16;
      }
      if (fVar21 <= fVar17) {
        fVar21 = fVar17;
      }
      if (fVar22 <= fVar18) {
        fVar22 = fVar18;
      }
      if (fVar19 <= fVar15) {
        fVar19 = fVar15;
      }
      uVar11 = NEON_fminnm(fVar23,uVar11);
      uVar12 = NEON_fminnm(fVar24,uVar12);
      uVar13 = NEON_fminnm(fVar26,uVar13);
      uVar14 = NEON_fminnm(fVar25,uVar14);
      if (fVar20 <= fVar23) {
        fVar20 = fVar23;
      }
      puVar7[5] = lVar1;
      puVar7[6] = 0;
      *(undefined4 *)puVar7 = uVar11;
      *(undefined4 *)((long)puVar7 + 4) = uVar12;
      if (fVar21 <= fVar24) {
        fVar21 = fVar24;
      }
      if (fVar22 <= fVar26) {
        fVar22 = fVar26;
      }
      *(undefined4 *)(puVar7 + 1) = uVar13;
      *(undefined4 *)((long)puVar7 + 0xc) = uVar14;
      if (fVar19 <= fVar25) {
        fVar19 = fVar25;
      }
      puVar7[4] = 0;
      *(float *)(puVar7 + 2) = fVar20;
      *(float *)((long)puVar7 + 0x14) = fVar21;
      *(float *)(puVar7 + 3) = fVar22;
      *(float *)((long)puVar7 + 0x1c) = fVar19;
      FUN_00f42680(in_x0 + 0x518,*(undefined8 *)(in_x0 + 0x518),puVar7);
      iVar4 = *(int *)(in_x0 + 0x52c);
      lVar10 = lVar10 + lVar8;
      iVar5 = *(int *)(in_x0 + 0x3b4);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x48;
      *(undefined8 **)(lVar10 + 0x40) = puVar7;
      *(int *)(in_x0 + 0x52c) = iVar4 + 1;
    } while (lVar9 < iVar5);
  }
  return;
}


