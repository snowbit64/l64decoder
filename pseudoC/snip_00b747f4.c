// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: snip
// Entry Point: 00b747f4
// Size: 296 bytes
// Signature: undefined __cdecl snip(Vector2 * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint * param_6)


/* TriangulateUtil::snip(Vector2 const*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int*) */

byte TriangulateUtil::snip
               (Vector2 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = *(float *)(param_1 + (ulong)param_6[param_2] * 8);
  fVar3 = *(float *)((long)(param_1 + (ulong)param_6[param_2] * 8) + 4);
  fVar7 = *(float *)(param_1 + (ulong)param_6[param_3] * 8);
  fVar4 = *(float *)((long)(param_1 + (ulong)param_6[param_3] * 8) + 4);
  fVar6 = *(float *)(param_1 + (ulong)param_6[param_4] * 8);
  fVar8 = *(float *)((long)(param_1 + (ulong)param_6[param_4] * 8) + 4);
  fVar9 = (float)NEON_fmadd(fVar7 - fVar5,fVar8 - fVar3,(fVar6 - fVar5) * -(fVar4 - fVar3));
  if (fVar9 < 1e-09) {
    return 0;
  }
  if (param_5 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = 0;
    bVar1 = true;
    do {
      if (((param_4 != uVar2) && (param_2 != uVar2)) && (param_3 != uVar2)) {
        fVar9 = *(float *)(param_1 + (ulong)param_6[uVar2] * 8);
        fVar10 = *(float *)((long)(param_1 + (ulong)param_6[uVar2] * 8) + 4);
        fVar11 = (float)NEON_fmadd(fVar6 - fVar7,fVar10 - fVar4,(fVar9 - fVar7) * -(fVar8 - fVar4));
        if (((0.0 <= fVar11) &&
            (fVar11 = (float)NEON_fmadd(fVar5 - fVar6,fVar10 - fVar8,
                                        (fVar9 - fVar6) * -(fVar3 - fVar8)), 0.0 <= fVar11)) &&
           (fVar9 = (float)NEON_fmadd(fVar7 - fVar5,fVar10 - fVar3,
                                      (fVar9 - fVar5) * -(fVar4 - fVar3)), 0.0 <= fVar9)) break;
      }
      uVar2 = uVar2 + 1;
      bVar1 = uVar2 < param_5;
    } while (param_5 != uVar2);
  }
  return bVar1 ^ 1;
}


