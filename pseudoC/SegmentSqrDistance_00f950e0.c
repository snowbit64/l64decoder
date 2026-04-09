// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SegmentSqrDistance
// Entry Point: 00f950e0
// Size: 160 bytes
// Signature: undefined __cdecl SegmentSqrDistance(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4)


/* SegmentSqrDistance(btVector3 const&, btVector3 const&, btVector3 const&, btVector3&) */

float SegmentSqrDistance(btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4
                        )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar16 = 0.0;
  fVar2 = (float)*(undefined8 *)(param_1 + 4);
  fVar11 = (float)*(undefined8 *)(param_3 + 4);
  fVar9 = fVar11 - fVar2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar10 = fVar12 - fVar3;
  fVar4 = *(float *)param_1;
  fVar13 = (float)*(undefined8 *)(param_2 + 4);
  fVar6 = fVar13 - fVar2;
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar7 = fVar14 - fVar3;
  fVar1 = *(float *)param_3 - fVar4;
  fVar8 = *(float *)param_2 - fVar4;
  fVar15 = (float)NEON_fmadd(fVar8,fVar1,fVar6 * fVar9);
  fVar15 = fVar15 + fVar7 * fVar10;
  if (0.0 < fVar15) {
    fVar16 = (float)NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
    fVar16 = fVar16 + fVar7 * fVar7;
    if (fVar16 <= fVar15) {
      fVar1 = *(float *)param_3 - *(float *)param_2;
      fVar9 = fVar11 - fVar13;
      fVar10 = fVar12 - fVar14;
      fVar16 = 1.0;
    }
    else {
      fVar16 = fVar15 / fVar16;
      fVar1 = (float)NEON_fmsub(fVar16,fVar8,fVar1);
      fVar9 = fVar9 - fVar6 * fVar16;
      fVar10 = fVar10 - fVar7 * fVar16;
    }
  }
  uVar5 = NEON_fmadd(fVar16,fVar8,fVar4);
  *(undefined4 *)(param_4 + 0xc) = 0;
  fVar1 = (float)NEON_fmadd(fVar1,fVar1,fVar9 * fVar9);
  *(undefined4 *)param_4 = uVar5;
  *(ulong *)(param_4 + 4) = CONCAT44(fVar3 + fVar7 * fVar16,fVar2 + fVar6 * fVar16);
  return fVar1 + fVar10 * fVar10;
}


