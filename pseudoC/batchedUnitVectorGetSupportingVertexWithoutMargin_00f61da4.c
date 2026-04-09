// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f61da4
// Size: 344 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btConvexPointCloudShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*,
   btVector3*, int) const */

void __thiscall
btConvexPointCloudShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btConvexPointCloudShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  
  if (0 < param_3) {
    iVar9 = *(int *)(this + 0x80);
    uVar3 = (ulong)(uint)param_3;
    if (0 < iVar9) {
      uVar4 = 0;
      if (iVar9 < 1) goto LAB_00f61e78;
      do {
        lVar7 = 0;
        uVar13 = *(undefined8 *)((long)(param_1 + uVar4 * 0x10) + 4);
        lVar8 = *(long *)(this + 0x78);
        puVar11 = (undefined8 *)(lVar8 + 4);
        fVar12 = -3.402823e+38;
        uVar10 = 0xffffffff;
        do {
          uVar14 = *puVar11;
          puVar6 = (undefined4 *)((long)puVar11 + -4);
          puVar11 = puVar11 + 2;
          fVar15 = (float)NEON_fmadd(*(float *)(this + 0x1c) * *(float *)(param_1 + uVar4 * 0x10),
                                     *puVar6,(float)*(undefined8 *)(this + 0x20) * (float)uVar13 *
                                             (float)uVar14);
          fVar15 = fVar15 + (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) *
                            (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar14 >> 0x20);
          uVar2 = (uint)lVar7;
          if (fVar15 <= fVar12) {
            uVar2 = uVar10;
          }
          lVar7 = lVar7 + 1;
          fVar12 = fVar15;
          uVar10 = uVar2;
        } while (iVar9 != lVar7);
        puVar11 = (undefined8 *)(param_2 + uVar4 * 0x10);
        *(float *)((long)puVar11 + 0xc) = -1e+18;
        if (-1 < (int)uVar2) {
          puVar1 = (undefined8 *)(lVar8 + (ulong)uVar2 * 0x10);
          uVar13 = *(undefined8 *)(this + 0x1c);
          fVar12 = *(float *)(this + 0x24);
          uVar14 = *puVar1;
          fVar16 = *(float *)(puVar1 + 1);
          *(float *)((long)puVar11 + 0xc) = fVar15;
          *puVar11 = CONCAT44((float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar14 >> 0x20),
                              (float)uVar13 * (float)uVar14);
          *(float *)(puVar11 + 1) = fVar12 * fVar16;
        }
        while( true ) {
          uVar4 = uVar4 + 1;
          if (uVar4 == uVar3) {
            return;
          }
          iVar9 = *(int *)(this + 0x80);
          if (0 < iVar9) break;
LAB_00f61e78:
          *(undefined4 *)(param_2 + uVar4 * 0x10 + 0xc) = 0xdd5e0b6b;
        }
      } while( true );
    }
    if ((uint)param_3 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffe;
      puVar6 = (undefined4 *)(param_2 + 0x1c);
      uVar4 = uVar5;
      do {
        uVar4 = uVar4 - 2;
        puVar6[-4] = 0xdd5e0b6b;
        *puVar6 = 0xdd5e0b6b;
        puVar6 = puVar6 + 8;
      } while (uVar4 != 0);
      if (uVar5 == uVar3) {
        return;
      }
    }
    lVar7 = uVar3 - uVar5;
    puVar6 = (undefined4 *)(param_2 + uVar5 * 0x10 + 0xc);
    do {
      lVar7 = lVar7 + -1;
      *puVar6 = 0xdd5e0b6b;
      puVar6 = puVar6 + 4;
    } while (lVar7 != 0);
  }
  return;
}


