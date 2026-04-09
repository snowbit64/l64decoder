// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refitPartial
// Entry Point: 00f6490c
// Size: 392 bytes
// Signature: undefined __thiscall refitPartial(btOptimizedBvh * this, btStridingMeshInterface * param_1, btVector3 * param_2, btVector3 * param_3)


/* btOptimizedBvh::refitPartial(btStridingMeshInterface*, btVector3 const&, btVector3 const&) */

void __thiscall
btOptimizedBvh::refitPartial
          (btOptimizedBvh *this,btStridingMeshInterface *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar8 = *(int *)(this + 0xd4);
  if (0 < iVar8) {
    fVar11 = *(float *)param_2;
    fVar12 = *(float *)(this + 8);
    lVar9 = 0;
    fVar16 = *(float *)(this + 0x28);
    lVar10 = 0;
    fVar13 = (float)NEON_fmadd(*(float *)param_3 - fVar12,fVar16,0x3f800000);
    fVar14 = (float)NEON_fmadd(*(float *)(param_3 + 4) - *(float *)(this + 0xc),
                               *(float *)(this + 0x2c),0x3f800000);
    fVar15 = (float)NEON_fmadd(*(float *)(param_3 + 8) - *(float *)(this + 0x10),
                               *(float *)(this + 0x30),0x3f800000);
    uVar3 = (int)(*(float *)(this + 0x2c) * (*(float *)(param_2 + 4) - *(float *)(this + 0xc))) &
            0xfffe;
    uVar4 = (int)(*(float *)(this + 0x30) * (*(float *)(param_2 + 8) - *(float *)(this + 0x10))) &
            0xfffe;
    do {
      puVar1 = (ushort *)(*(long *)(this + 0xe0) + lVar9);
      bVar6 = false;
      if (((int)(fVar16 * (fVar11 - fVar12)) & 0xfffeU) <= (uint)puVar1[3]) {
        bVar6 = (uint)*puVar1 <= ((int)fVar13 | 1U);
      }
      bVar5 = false;
      bVar7 = true;
      if (bVar6) {
        bVar7 = puVar1[5] <= uVar4;
        bVar5 = uVar4 == puVar1[5];
      }
      bVar6 = false;
      if (!bVar7 || bVar5) {
        bVar6 = (uint)puVar1[2] <= ((int)fVar15 | 1U);
      }
      bVar5 = false;
      bVar7 = true;
      if (bVar6) {
        bVar7 = puVar1[4] <= uVar3;
        bVar5 = uVar3 == puVar1[4];
      }
      bVar6 = false;
      if (!bVar7 || bVar5) {
        bVar6 = (uint)puVar1[1] <= ((int)fVar14 | 1U);
      }
      if (bVar6) {
        updateBvhNodes((btStridingMeshInterface *)this,(int)param_1,*(int *)(puVar1 + 6),
                       *(int *)(puVar1 + 8) + *(int *)(puVar1 + 6));
        puVar2 = (ushort *)(*(long *)(this + 0xb8) + (long)*(int *)(puVar1 + 6) * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[4] = puVar2[4];
        iVar8 = *(int *)(this + 0xd4);
        puVar1[5] = puVar2[5];
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar10 < iVar8);
  }
  return;
}


