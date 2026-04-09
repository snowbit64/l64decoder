// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009c0308
// Size: 444 bytes
// Signature: undefined __thiscall addSingleResult(AllHitsRayResultCallback * this, LocalRayResult * param_1, bool param_2)


/* Bt2SceneQueryUtil::AllHitsRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult&,
   bool) */

undefined4 __thiscall
Bt2SceneQueryUtil::AllHitsRayResultCallback::addSingleResult
          (AllHitsRayResultCallback *this,LocalRayResult *param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if (param_2) {
    uVar17 = *(undefined4 *)(param_1 + 0x10);
    uVar18 = *(undefined4 *)(param_1 + 0x14);
    uVar16 = *(ulong *)(param_1 + 0x18);
  }
  else {
    lVar8 = *(long *)(this + 0x10);
    uVar18 = *(undefined4 *)(param_1 + 0x10);
    fVar9 = *(float *)(param_1 + 0x14);
    uVar15 = *(undefined4 *)(param_1 + 0x18);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar8 + 0x28),uVar18,fVar9 * *(float *)(lVar8 + 0x2c));
    uVar19 = NEON_fmadd(*(undefined4 *)(lVar8 + 8),uVar18,*(float *)(lVar8 + 0xc) * fVar9);
    uVar18 = NEON_fmadd(*(undefined4 *)(lVar8 + 0x18),uVar18,fVar9 * *(float *)(lVar8 + 0x1c));
    uVar13 = NEON_fmadd(*(undefined4 *)(lVar8 + 0x30),uVar15,uVar17);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar8 + 0x10),uVar15,uVar19);
    uVar18 = NEON_fmadd(*(undefined4 *)(lVar8 + 0x20),uVar15,uVar18);
    uVar16 = (ulong)uVar13;
  }
  uVar2 = *(undefined8 *)param_1;
  puVar5 = *(undefined8 **)(param_1 + 8);
  lVar8 = *(long *)(this + 0x20);
  *(undefined8 *)(this + 0x10) = uVar2;
  if (puVar5 == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *puVar5;
  }
  uVar13 = *(uint *)(lVar8 + 4);
  uVar19 = *(undefined4 *)(param_1 + 0x20);
  if (uVar13 == *(uint *)(lVar8 + 8)) {
    iVar3 = uVar13 << 1;
    if (uVar13 == 0) {
      iVar3 = 1;
    }
    if ((int)uVar13 < iVar3) {
      if (iVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = btAlignedAllocInternal((long)iVar3 * 0x28,0x10);
        uVar13 = *(uint *)(lVar8 + 4);
      }
      if (0 < (int)uVar13) {
        lVar6 = 0;
        do {
          puVar5 = (undefined8 *)(lVar4 + lVar6);
          puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x10) + lVar6);
          lVar6 = lVar6 + 0x28;
          uVar14 = *puVar1;
          uVar12 = puVar1[3];
          uVar11 = puVar1[2];
          uVar7 = puVar1[4];
          puVar5[1] = puVar1[1];
          *puVar5 = uVar14;
          puVar5[3] = uVar12;
          puVar5[2] = uVar11;
          puVar5[4] = uVar7;
        } while ((ulong)uVar13 * 0x28 - lVar6 != 0);
      }
      if ((*(void **)(lVar8 + 0x10) != (void *)0x0) && (*(char *)(lVar8 + 0x18) != '\0')) {
        btAlignedFreeInternal(*(void **)(lVar8 + 0x10));
      }
      uVar13 = *(uint *)(lVar8 + 4);
      *(long *)(lVar8 + 0x10) = lVar4;
      *(int *)(lVar8 + 8) = iVar3;
      *(undefined *)(lVar8 + 0x18) = 1;
    }
  }
  puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar13 * 0x28);
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = uVar17;
  *(undefined4 *)((long)puVar5 + 0xc) = uVar18;
  puVar5[2] = uVar16;
  *(undefined4 *)(puVar5 + 3) = uVar19;
  *(undefined8 *)((long)puVar5 + 0x1c) = uVar10;
  uVar18 = *(undefined4 *)(this + 8);
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  return uVar18;
}


