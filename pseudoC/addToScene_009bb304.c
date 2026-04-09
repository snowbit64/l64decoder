// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToScene
// Entry Point: 009bb304
// Size: 484 bytes
// Signature: undefined __cdecl addToScene(Bt2ScenegraphPhysicsContext * param_1, btVector3 * param_2, btVector3 * param_3, bool param_4)


/* Bt2Rope::addToScene(Bt2ScenegraphPhysicsContext*, btVector3 const&, btVector3 const&, bool) */

void Bt2Rope::addToScene(Bt2ScenegraphPhysicsContext *param_1,btVector3 *param_2,btVector3 *param_3,
                        bool param_4)

{
  btVector3 *pbVar1;
  float *pfVar2;
  btSoftBody *pbVar3;
  Bt2World *this;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  
  puVar4 = (undefined8 *)(ulong)param_4;
  fVar12 = *(float *)((long)puVar4 + 4) - *(float *)(param_3 + 4);
  uVar13 = NEON_fmadd(*(float *)puVar4 - *(float *)param_3,*(float *)puVar4 - *(float *)param_3,
                      fVar12 * fVar12);
  fVar14 = (float)NEON_fmadd(*(float *)(puVar4 + 1) - *(float *)(param_3 + 8),
                             *(float *)(puVar4 + 1) - *(float *)(param_3 + 8),uVar13);
  fVar12 = SQRT(fVar14);
  if (SQRT(fVar14) <= 1e-06) {
    fVar12 = 1e-06;
  }
  iVar5 = (int)(fVar12 / *(float *)(param_1 + 0x24) + 0.5);
  uVar8 = 2;
  if (2 < iVar5 + 1U) {
    uVar8 = iVar5 + 1;
  }
  pbVar1 = (btVector3 *)btAlignedAllocInternal((ulong)uVar8 << 4,0x10);
  pfVar2 = (float *)operator_new__((ulong)uVar8 << 2);
  uVar9 = 0;
  uVar6 = (ulong)(uVar8 - 1);
  fVar14 = *(float *)(param_1 + 0x24);
  puVar10 = (undefined4 *)(pbVar1 + 8);
  do {
    uVar18 = *puVar4;
    fVar19 = *(float *)(param_3 + 8);
    fVar20 = *(float *)(puVar4 + 1);
    uVar16 = *(undefined8 *)param_3;
    puVar10[1] = 0;
    fVar15 = (float)uVar16;
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    fVar14 = (fVar14 * (float)(uVar9 & 0xffffffff)) / fVar12;
    uVar13 = NEON_fmadd(fVar20 - fVar19,fVar14,fVar19);
    *(ulong *)(puVar10 + -2) =
         CONCAT44(fVar17 + ((float)((ulong)uVar18 >> 0x20) - fVar17) * fVar14,
                  fVar15 + ((float)uVar18 - fVar15) * fVar14);
    *puVar10 = uVar13;
    fVar14 = *(float *)(param_1 + 0x24);
    pfVar2[uVar9] = fVar14 * *(float *)(param_1 + 0x28);
    uVar9 = uVar9 + 1;
    puVar10 = puVar10 + 4;
  } while (uVar6 != uVar9);
  uVar16 = *puVar4;
  *(undefined8 *)((long)(pbVar1 + uVar6 * 0x10) + 8) = puVar4[1];
  *(undefined8 *)(pbVar1 + uVar6 * 0x10) = uVar16;
  pfVar2[uVar6] = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x28);
  pbVar3 = (btSoftBody *)btAlignedAllocInternal(0x690,0x10);
                    /* try { // try from 009bb43c to 009bb44b has its CatchHandler @ 009bb4ec */
  btSoftBody::btSoftBody
            (pbVar3,(btSoftBodyWorldInfo *)(*(long *)(param_2 + 0x30) + 0x228),uVar8,pbVar1,pfVar2);
  *(btSoftBody **)param_1 = pbVar3;
                    /* try { // try from 009bb450 to 009bb457 has its CatchHandler @ 009bb4e8 */
  btAlignedFreeInternal(pbVar1);
  operator_delete__(pfVar2);
  uVar11 = 1;
  do {
    btSoftBody::appendLink(*(btSoftBody **)param_1,uVar11 - 1,uVar11,(Material *)0x0,false);
    uVar11 = uVar11 + 1;
  } while (uVar8 != uVar11);
  pbVar3 = *(btSoftBody **)param_1;
  uVar13 = *(undefined4 *)(param_1 + 0x2c);
  this = *(Bt2World **)(param_2 + 0x30);
  *(undefined4 *)(pbVar3 + 0x1d0) = 0x14;
  lVar7 = **(long **)(pbVar3 + 0x480);
  *(undefined4 *)(pbVar3 + 0x1a8) = 0x3f59999a;
  *(undefined4 *)(lVar7 + 8) = 0x3f400000;
  Bt2World::addSoftBody(this,pbVar3,(short)uVar13,(short)((uint)uVar13 >> 0x10));
  *(float *)(param_1 + 0x20) = fVar12;
  *(float *)(param_1 + 0x1c) = fVar12;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


