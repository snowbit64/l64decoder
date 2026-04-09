// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TestInternalObjects
// Entry Point: 00f71094
// Size: 264 bytes
// Signature: undefined __cdecl TestInternalObjects(btTransform * param_1, btTransform * param_2, btVector3 * param_3, btVector3 * param_4, btConvexPolyhedron * param_5, btConvexPolyhedron * param_6, float param_7)


/* TestInternalObjects(btTransform const&, btTransform const&, btVector3 const&, btVector3 const&,
   btConvexPolyhedron const&, btConvexPolyhedron const&, float) */

bool TestInternalObjects(btTransform *param_1,btTransform *param_2,btVector3 *param_3,
                        btVector3 *param_4,btConvexPolyhedron *param_5,btConvexPolyhedron *param_6,
                        float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  fVar1 = *(float *)param_4;
  fVar2 = *(float *)(param_4 + 4);
  fVar3 = *(float *)(param_4 + 8);
  uVar9 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),fVar2,*(float *)param_1 * fVar1);
  fVar5 = (float)*(undefined8 *)(param_1 + 4) * fVar1 +
          (float)*(undefined8 *)(param_1 + 0x14) * fVar2 +
          (float)*(undefined8 *)(param_1 + 0x24) * fVar3;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar1 +
          (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar2 +
          (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) * fVar3;
  fVar7 = (float)*(undefined8 *)(param_2 + 4) * fVar1 +
          (float)*(undefined8 *)(param_2 + 0x14) * fVar2 +
          (float)*(undefined8 *)(param_2 + 0x24) * fVar3;
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar1 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20) * fVar2 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * fVar3;
  uVar15 = *(undefined8 *)(param_5 + 0x7c);
  uVar11 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),fVar2,*(float *)param_2 * fVar1);
  uVar14 = *(undefined8 *)(param_6 + 0x7c);
  fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x20),fVar3,uVar9);
  uVar16 = NEON_fcmlt(CONCAT44(fVar6,fVar5),0,4);
  uVar17 = NEON_fcmlt(CONCAT44(fVar8,fVar7),0,4);
  fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x20),fVar3,uVar11);
  uVar15 = NEON_bit(uVar15,CONCAT44(-(float)((ulong)uVar15 >> 0x20),-(float)uVar15),uVar16,1);
  uVar14 = NEON_bit(uVar14,CONCAT44(-(float)((ulong)uVar14 >> 0x20),-(float)uVar14),uVar17,1);
  fVar4 = -*(float *)(param_5 + 0x78);
  if (0.0 <= fVar10) {
    fVar4 = *(float *)(param_5 + 0x78);
  }
  fVar13 = -*(float *)(param_6 + 0x78);
  if (0.0 <= fVar12) {
    fVar13 = *(float *)(param_6 + 0x78);
  }
  fVar4 = (float)NEON_fmadd(fVar4,fVar10,(float)uVar15 * fVar5);
  fVar5 = (float)NEON_fmadd(fVar13,fVar12,(float)uVar14 * fVar7);
  fVar4 = fVar4 + (float)((ulong)uVar15 >> 0x20) * fVar6;
  fVar5 = fVar5 + (float)((ulong)uVar14 >> 0x20) * fVar8;
  uVar9 = NEON_fmadd(fVar2,*(undefined4 *)(param_3 + 4),fVar1 * *(float *)param_3);
  if (fVar4 <= *(float *)(param_5 + 0x88)) {
    fVar4 = *(float *)(param_5 + 0x88);
  }
  if (fVar5 <= *(float *)(param_6 + 0x88)) {
    fVar5 = *(float *)(param_6 + 0x88);
  }
  fVar1 = (float)NEON_fmadd(fVar3,*(undefined4 *)(param_3 + 8),uVar9);
  fVar4 = (float)NEON_fminnm(fVar5 + fVar4 + fVar1,(fVar5 + fVar4) - fVar1);
  return fVar4 <= param_7;
}


