// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f612bc
// Size: 408 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btConvexHullShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*,
   btVector3*, int) const */

void __thiscall
btConvexHullShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btConvexHullShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  if (param_3 < 1) {
    return;
  }
  uVar3 = (ulong)(uint)param_3;
  if (param_3 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3 & 0xfffffffe;
    puVar6 = (undefined4 *)(param_2 + 0x1c);
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 2;
      puVar6[-4] = 0xdd5e0b6b;
      *puVar6 = 0xdd5e0b6b;
      puVar6 = puVar6 + 8;
    } while (uVar5 != 0);
    if (uVar4 == uVar3) goto LAB_00f61324;
  }
  lVar7 = uVar3 - uVar4;
  puVar6 = (undefined4 *)(param_2 + uVar4 * 0x10 + 0xc);
  do {
    lVar7 = lVar7 + -1;
    *puVar6 = 0xdd5e0b6b;
    puVar6 = puVar6 + 4;
  } while (lVar7 != 0);
LAB_00f61324:
  uVar8 = *(uint *)(this + 0x7c);
  if (0 < (int)uVar8) {
    uVar5 = 0;
    if ((int)uVar8 < 1) goto LAB_00f613c4;
    do {
      fVar12 = *(float *)(this + 0x24);
      uVar4 = 0;
      uVar13 = *(undefined8 *)(param_1 + uVar5 * 0x10);
      fVar10 = (float)*(undefined8 *)(this + 0x1c);
      fVar11 = (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20);
      puVar6 = (undefined4 *)(*(long *)(this + 0x88) + 8);
      fVar14 = -3.402823e+38;
      iVar9 = -1;
      do {
        fVar15 = (float)NEON_fmadd(fVar12 * *(float *)((long)(param_1 + uVar5 * 0x10) + 8),*puVar6,
                                   fVar10 * (float)uVar13 * (float)*(undefined8 *)(puVar6 + -2) +
                                   fVar11 * (float)((ulong)uVar13 >> 0x20) *
                                   (float)((ulong)*(undefined8 *)(puVar6 + -2) >> 0x20));
        iVar2 = (int)uVar4;
        if (fVar15 <= fVar14) {
          iVar2 = iVar9;
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 4;
        fVar14 = fVar15;
        iVar9 = iVar2;
      } while (uVar8 != uVar4);
      puVar1 = (undefined8 *)(*(long *)(this + 0x88) + (long)iVar2 * 0x10);
      uVar13 = *puVar1;
      fVar14 = *(float *)(puVar1 + 1);
      *(ulong *)(param_2 + uVar5 * 0x10) =
           CONCAT44(fVar11 * (float)((ulong)uVar13 >> 0x20),fVar10 * (float)uVar13);
      *(float *)((long)(param_2 + uVar5 * 0x10) + 8) = fVar12 * fVar14;
      while( true ) {
        lVar7 = uVar5 * 0x10;
        uVar5 = uVar5 + 1;
        *(float *)(param_2 + lVar7 + 0xc) = fVar15;
        if (uVar5 == uVar3) {
          return;
        }
        uVar8 = *(uint *)(this + 0x7c);
        if (0 < (int)uVar8) break;
LAB_00f613c4:
        fVar15 = -1e+18;
      }
    } while( true );
  }
  if ((uint)param_3 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3 & 0xfffffffe;
    puVar6 = (undefined4 *)(param_2 + 0x1c);
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 2;
      puVar6[-4] = 0xdd5e0b6b;
      *puVar6 = 0xdd5e0b6b;
      puVar6 = puVar6 + 8;
    } while (uVar5 != 0);
    if (uVar4 == uVar3) {
      return;
    }
  }
  lVar7 = uVar3 - uVar4;
  puVar6 = (undefined4 *)(param_2 + uVar4 * 0x10 + 0xc);
  do {
    lVar7 = lVar7 + -1;
    *puVar6 = 0xdd5e0b6b;
    puVar6 = puVar6 + 4;
  } while (lVar7 != 0);
  return;
}


