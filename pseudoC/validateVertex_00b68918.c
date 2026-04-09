// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateVertex
// Entry Point: 00b68918
// Size: 400 bytes
// Signature: undefined __cdecl validateVertex(Vector3 * param_1, vector * param_2, vector * param_3, float param_4)


/* validateVertex(Vector3 const&, std::__ndk1::vector<Plane, std::__ndk1::allocator<Plane> > const&,
   std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> > const&, float) */

bool validateVertex(Vector3 *param_1,vector *param_2,vector *param_3,float param_4)

{
  float *pfVar1;
  Plane *this;
  float *pfVar2;
  Plane *pPVar3;
  bool bVar4;
  long lVar5;
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
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  
  pPVar3 = *(Plane **)(param_2 + 8);
  for (this = *(Plane **)param_2; this != pPVar3; this = this + 0x10) {
    fVar6 = (float)Plane::signedDistanceTo(this,param_1);
    if (ABS(*(float *)(this + 0xc)) * 2.384186e-07 < fVar6) {
      return false;
    }
  }
  pfVar2 = *(float **)param_3;
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  pfVar1 = pfVar2;
  while( true ) {
    if (pfVar1 == *(float **)(param_3 + 8)) {
      lVar5 = ((long)*(float **)(param_3 + 8) - (long)pfVar2) / 0xc;
      while( true ) {
        lVar5 = lVar5 + -1;
        bVar4 = lVar5 == 0;
        if (lVar5 == 0) {
          return bVar4;
        }
        fVar8 = *pfVar2 - fVar6;
        fVar9 = pfVar2[1] - fVar7;
        fVar10 = pfVar2[4] - fVar7;
        fVar12 = pfVar2[2] - *(float *)(param_1 + 8);
        fVar11 = pfVar2[3] - fVar6;
        fVar14 = pfVar2[5] - *(float *)(param_1 + 8);
        uVar16 = NEON_fmadd(fVar8,fVar8,fVar9 * fVar9);
        uVar18 = NEON_fmadd(fVar11,fVar11,fVar10 * fVar10);
        fVar15 = (float)NEON_fmadd(fVar12,fVar11,fVar14 * -fVar8);
        fVar13 = (float)NEON_fmadd(fVar12,fVar12,uVar16);
        fVar17 = (float)NEON_fmadd(fVar14,fVar14,uVar18);
        uVar16 = NEON_fmadd(fVar9,fVar14,fVar10 * -fVar12);
        fVar8 = (float)NEON_fmadd(fVar8,fVar10,fVar11 * -fVar9);
        uVar16 = NEON_fmadd(uVar16,uVar16,fVar15 * fVar15);
        fVar9 = (float)NEON_fmadd(fVar8,fVar8,uVar16);
        if (fVar9 <= fVar13 * fVar17 * 1.421085e-14 * 256.0) break;
        pfVar2 = pfVar2 + 3;
        if (fVar8 <= 0.0) {
          return bVar4;
        }
      }
      return bVar4;
    }
    fVar8 = (float)NEON_fmadd(*pfVar1 - fVar6,*pfVar1 - fVar6,
                              (pfVar1[1] - fVar7) * (pfVar1[1] - fVar7));
    if (fVar8 < param_4) break;
    pfVar1 = pfVar1 + 3;
  }
  return false;
}


