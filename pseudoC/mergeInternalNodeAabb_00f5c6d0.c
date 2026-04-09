// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeInternalNodeAabb
// Entry Point: 00f5c6d0
// Size: 472 bytes
// Signature: undefined __thiscall mergeInternalNodeAabb(btQuantizedBvh * this, int param_1, btVector3 * param_2, btVector3 * param_3)


/* btQuantizedBvh::mergeInternalNodeAabb(int, btVector3 const&, btVector3 const&) */

void __thiscall
btQuantizedBvh::mergeInternalNodeAabb
          (btQuantizedBvh *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (this[0x40] == (btQuantizedBvh)0x0) {
    lVar3 = *(long *)(this + 0x78);
    lVar4 = (long)param_1;
    pfVar5 = (float *)(lVar3 + lVar4 * 0x40);
    if (*(float *)param_2 < *pfVar5) {
      *pfVar5 = *(float *)param_2;
    }
    if (*(float *)(param_2 + 4) < pfVar5[1]) {
      pfVar5[1] = *(float *)(param_2 + 4);
    }
    lVar1 = lVar3 + lVar4 * 0x40;
    pfVar5 = (float *)(lVar1 + 8);
    if (*(float *)(param_2 + 8) < *pfVar5) {
      *pfVar5 = *(float *)(param_2 + 8);
    }
    pfVar5 = (float *)(lVar1 + 0xc);
    if (*(float *)(param_2 + 0xc) < *pfVar5) {
      *pfVar5 = *(float *)(param_2 + 0xc);
    }
    lVar1 = lVar3 + lVar4 * 0x40;
    pfVar5 = (float *)(lVar1 + 0x10);
    if (*pfVar5 < *(float *)param_3) {
      *pfVar5 = *(float *)param_3;
    }
    pfVar5 = (float *)(lVar1 + 0x14);
    if (*pfVar5 < *(float *)(param_3 + 4)) {
      *pfVar5 = *(float *)(param_3 + 4);
    }
    lVar3 = lVar3 + lVar4 * 0x40;
    pfVar5 = (float *)(lVar3 + 0x18);
    if (*pfVar5 < *(float *)(param_3 + 8)) {
      *pfVar5 = *(float *)(param_3 + 8);
    }
    pfVar5 = (float *)(lVar3 + 0x1c);
    if (*pfVar5 < *(float *)(param_3 + 0xc)) {
      *pfVar5 = *(float *)(param_3 + 0xc);
    }
  }
  else {
    fVar7 = *(float *)(param_2 + 4);
    fVar11 = *(float *)(this + 0xc);
    lVar3 = *(long *)(this + 0xb8);
    fVar14 = *(float *)(this + 0x2c);
    fVar12 = *(float *)(param_2 + 8);
    puVar6 = (ushort *)(lVar3 + (long)param_1 * 0x10);
    fVar15 = (float)NEON_fmadd(*(float *)param_3 - *(float *)(this + 8),*(float *)(this + 0x28),
                               0x3f800000);
    fVar9 = *(float *)(this + 0x10);
    fVar8 = *(float *)(this + 0x30);
    fVar13 = (float)NEON_fmadd(*(float *)(param_3 + 4) - fVar11,fVar14,0x3f800000);
    fVar10 = *(float *)(param_3 + 8);
    uVar2 = (int)(*(float *)(this + 0x28) * (*(float *)param_2 - *(float *)(this + 8))) & 0xfffe;
    lVar4 = (long)param_1;
    if (uVar2 < *puVar6) {
      *puVar6 = (ushort)uVar2;
    }
    lVar1 = lVar3 + lVar4 * 0x10;
    uVar2 = (int)(fVar14 * (fVar7 - fVar11)) & 0xfffe;
    puVar6 = (ushort *)(lVar1 + 6);
    if ((uint)*puVar6 < ((int)fVar15 | 1U)) {
      *puVar6 = (ushort)((int)fVar15 | 1U);
    }
    puVar6 = (ushort *)(lVar1 + 2);
    fVar7 = (float)NEON_fmadd(fVar10 - fVar9,fVar8,0x3f800000);
    if (uVar2 < *puVar6) {
      *puVar6 = (ushort)uVar2;
    }
    lVar1 = lVar3 + lVar4 * 0x10;
    uVar2 = (int)(fVar8 * (fVar12 - fVar9)) & 0xfffe;
    puVar6 = (ushort *)(lVar1 + 8);
    if ((uint)*puVar6 < ((int)fVar13 | 1U)) {
      *puVar6 = (ushort)((int)fVar13 | 1U);
    }
    puVar6 = (ushort *)(lVar1 + 4);
    if (uVar2 < *puVar6) {
      *puVar6 = (ushort)uVar2;
    }
    puVar6 = (ushort *)(lVar3 + lVar4 * 0x10 + 10);
    if ((uint)*puVar6 < ((int)fVar7 | 1U)) {
      *puVar6 = (ushort)((int)fVar7 | 1U);
      return;
    }
  }
  return;
}


