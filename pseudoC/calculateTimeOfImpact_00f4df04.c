// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTimeOfImpact
// Entry Point: 00f4df04
// Size: 668 bytes
// Signature: undefined __thiscall calculateTimeOfImpact(btCompoundCollisionAlgorithm * this, btCollisionObject * param_1, btCollisionObject * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btCompoundCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject*, btCollisionObject*,
   btDispatcherInfo const&, btManifoldResult*) */

undefined4 __thiscall
btCompoundCollisionAlgorithm::calculateTimeOfImpact
          (btCompoundCollisionAlgorithm *this,btCollisionObject *param_1,btCollisionObject *param_2,
          btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  undefined8 *puVar1;
  btCollisionObject *pbVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  
  uVar3 = *(uint *)(this + 0x14);
  pbVar2 = param_2;
  if (this[0x30] != (btCompoundCollisionAlgorithm)0x0) {
    pbVar2 = param_1;
    param_1 = param_2;
  }
  if ((int)uVar3 < 1) {
    uVar33 = 0x3f800000;
  }
  else {
    fVar8 = *(float *)(param_1 + 8);
    fVar13 = *(float *)(param_1 + 0xc);
    fVar25 = *(float *)(param_1 + 0x28);
    fVar19 = *(float *)(param_1 + 0x18);
    fVar23 = *(float *)(param_1 + 0x1c);
    fVar26 = *(float *)(param_1 + 0x2c);
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 200);
    uVar17 = *(undefined8 *)(param_1 + 0x30);
    uVar34 = *(undefined8 *)(param_1 + 0x38);
    uVar29 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    fVar14 = (float)uVar17;
    uVar21 = *(undefined8 *)(param_1 + 0x40);
    fVar27 = (float)uVar29;
    iVar4 = *(int *)(param_1 + 0x148);
    fVar9 = (float)uVar11;
    uVar33 = 0x3f800000;
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar6);
      *(int *)(param_1 + 0x148) = iVar4 + 1;
      fVar30 = *(float *)(puVar1 + 6);
      fVar32 = *(float *)((long)puVar1 + 0x34);
      fVar24 = *(float *)(puVar1 + 1);
      fVar10 = (float)*puVar1;
      fVar12 = (float)((ulong)*puVar1 >> 0x20);
      uVar28 = *(undefined4 *)(puVar1 + 3);
      uVar31 = NEON_fmadd(fVar30,fVar25,(int)uVar21);
      fVar15 = (float)puVar1[2];
      fVar18 = (float)((ulong)puVar1[2] >> 0x20);
      uVar35 = NEON_fmadd(uVar28,fVar13,fVar24 * fVar8);
      uVar16 = *(undefined4 *)(puVar1 + 5);
      fVar20 = (float)puVar1[4];
      fVar22 = (float)((ulong)puVar1[4] >> 0x20);
      uVar36 = NEON_fmadd(uVar28,fVar23,fVar24 * fVar19);
      uVar28 = NEON_fmadd(uVar28,fVar26,fVar24 * fVar25);
      uVar31 = NEON_fmadd(fVar32,fVar26,uVar31);
      fVar24 = *(float *)(puVar1 + 7);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      uVar35 = NEON_fmadd(uVar16,fVar27,uVar35);
      *(ulong *)(param_1 + 8) =
           CONCAT44(fVar12 * fVar8 + fVar13 * fVar18 + fVar27 * fVar22,
                    fVar10 * fVar8 + fVar13 * fVar15 + fVar27 * fVar20);
      *(ulong *)(param_1 + 0x18) =
           CONCAT44(fVar12 * fVar19 + fVar23 * fVar18 + fVar9 * fVar22,
                    fVar10 * fVar19 + fVar23 * fVar15 + fVar9 * fVar20);
      uVar36 = NEON_fmadd(uVar16,fVar9,uVar36);
      uVar16 = NEON_fmadd(uVar16,fVar14,uVar28);
      uVar28 = NEON_fmadd(fVar24,fVar14,uVar31);
      *(undefined4 *)(param_1 + 0x10) = uVar35;
      *(ulong *)(param_1 + 0x28) =
           CONCAT44(fVar12 * fVar25 + fVar26 * fVar18 + fVar14 * fVar22,
                    fVar10 * fVar25 + fVar26 * fVar15 + fVar14 * fVar20);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x20) = uVar36;
      *(undefined4 *)(param_1 + 0x30) = uVar16;
      *(ulong *)(param_1 + 0x38) =
           CONCAT44((float)((ulong)uVar34 >> 0x20) + fVar19 * fVar30 + fVar23 * fVar32 +
                    fVar9 * fVar24,
                    (float)uVar34 + fVar8 * fVar30 + fVar13 * fVar32 + fVar27 * fVar24);
      *(undefined4 *)(param_1 + 0x40) = uVar28;
      *(undefined4 *)(param_1 + 0x44) = 0;
      uVar16 = (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar5) + 0x18))
                         (*(long **)(*(long *)(this + 0x20) + lVar5),param_1,pbVar2,param_3,param_4)
      ;
      uVar33 = NEON_fminnm(uVar16,uVar33);
      lVar6 = lVar6 + 0x58;
      lVar5 = lVar5 + 8;
      *(float *)(param_1 + 8) = fVar8;
      *(float *)(param_1 + 0xc) = fVar13;
      *(float *)(param_1 + 0x28) = fVar25;
      *(float *)(param_1 + 0x2c) = fVar26;
      *(undefined8 *)(param_1 + 0x10) = uVar29;
      iVar4 = *(int *)(param_1 + 0x148) + 1;
      *(float *)(param_1 + 0x18) = fVar19;
      *(float *)(param_1 + 0x1c) = fVar23;
      *(undefined8 *)(param_1 + 0x30) = uVar17;
      *(undefined8 *)(param_1 + 0x38) = uVar34;
      *(int *)(param_1 + 0x148) = iVar4;
      *(undefined8 *)(param_1 + 0x20) = uVar11;
      *(undefined8 *)(param_1 + 0x40) = uVar21;
    } while ((ulong)uVar3 * 0x58 - lVar6 != 0);
  }
  return uVar33;
}


