// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00f677cc
// Size: 636 bytes
// Signature: undefined __thiscall push_back(btAlignedObjectArray<btFace> * this, btFace * param_1)


/* btAlignedObjectArray<btFace>::push_back(btFace const&) */

void __thiscall
btAlignedObjectArray<btFace>::push_back(btAlignedObjectArray<btFace> *this,btFace *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  char *pcVar21;
  void **ppvVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  iVar7 = *(int *)(this + 4);
  if (iVar7 == *(int *)(this + 8)) {
    iVar3 = iVar7 << 1;
    if (iVar7 == 0) {
      iVar3 = 1;
    }
    reserve(this,iVar3);
    iVar7 = *(int *)(this + 4);
  }
  lVar17 = *(long *)(this + 0x10);
  lVar20 = lVar17 + (long)iVar7 * 0x30;
  pcVar21 = (char *)(lVar20 + 0x18);
  *pcVar21 = '\x01';
  puVar19 = (uint *)(lVar20 + 4);
  *puVar19 = 0;
  *(uint *)(lVar20 + 8) = 0;
  uVar1 = *(uint *)(param_1 + 4);
  uVar18 = (ulong)uVar1;
  ppvVar22 = (void **)(lVar20 + 0x10);
  *ppvVar22 = (void *)0x0;
  if ((int)uVar1 < 1) {
    *puVar19 = uVar1;
    goto LAB_00f679d0;
  }
  lVar16 = uVar18 * 4;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  pvVar5 = (void *)(*(code *)PTR_FUN_01048e38)(lVar16,0x10);
  uVar2 = *puVar19;
  uVar8 = (ulong)uVar2;
  pvVar6 = *ppvVar22;
  if ((int)uVar2 < 1) {
    if (pvVar6 != (void *)0x0) goto LAB_00f67930;
  }
  else {
    if ((uVar2 < 8) ||
       ((pvVar5 < (void *)((long)pvVar6 + uVar8 * 4) &&
        (pvVar6 < (void *)((long)pvVar5 + uVar8 * 4))))) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar8 & 0xfffffff8;
      puVar13 = (undefined8 *)((long)pvVar6 + 0x10);
      puVar14 = (undefined8 *)((long)pvVar5 + 0x10);
      uVar15 = uVar11;
      do {
        puVar4 = puVar13 + -1;
        uVar23 = puVar13[-2];
        uVar25 = puVar13[1];
        uVar24 = *puVar13;
        uVar15 = uVar15 - 8;
        puVar13 = puVar13 + 4;
        puVar14[-1] = *puVar4;
        puVar14[-2] = uVar23;
        puVar14[1] = uVar25;
        *puVar14 = uVar24;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      if (uVar11 == uVar8) goto LAB_00f67930;
    }
    lVar9 = uVar8 - uVar11;
    puVar10 = (undefined4 *)((long)pvVar6 + uVar11 * 4);
    puVar12 = (undefined4 *)((long)pvVar5 + uVar11 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar9 != 0);
LAB_00f67930:
    if (*pcVar21 != '\0') {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  *ppvVar22 = pvVar5;
  *pcVar21 = '\x01';
  *(uint *)(lVar20 + 8) = uVar1;
  memset(pvVar5,0,(long)(int)uVar1 << 2);
  *puVar19 = uVar1;
  pvVar5 = *ppvVar22;
  pvVar6 = *(void **)(param_1 + 0x10);
  if ((uVar1 < 8) ||
     ((pvVar5 < (void *)((long)pvVar6 + lVar16) && (pvVar6 < (void *)((long)pvVar5 + lVar16))))) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar18 & 0xfffffff8;
    puVar13 = (undefined8 *)((long)pvVar6 + 0x10);
    puVar14 = (undefined8 *)((long)pvVar5 + 0x10);
    uVar11 = uVar8;
    do {
      puVar4 = puVar13 + -1;
      uVar23 = puVar13[-2];
      uVar25 = puVar13[1];
      uVar24 = *puVar13;
      uVar11 = uVar11 - 8;
      puVar13 = puVar13 + 4;
      puVar14[-1] = *puVar4;
      puVar14[-2] = uVar23;
      puVar14[1] = uVar25;
      *puVar14 = uVar24;
      puVar14 = puVar14 + 4;
    } while (uVar11 != 0);
    if (uVar8 == uVar18) goto LAB_00f679d0;
  }
  lVar20 = uVar18 - uVar8;
  puVar10 = (undefined4 *)((long)pvVar5 + uVar8 * 4);
  puVar12 = (undefined4 *)((long)pvVar6 + uVar8 * 4);
  do {
    lVar20 = lVar20 + -1;
    *puVar10 = *puVar12;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar20 != 0);
LAB_00f679d0:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  lVar17 = lVar17 + (long)iVar7 * 0x30;
  *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar17 + 0x20) = uVar23;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


