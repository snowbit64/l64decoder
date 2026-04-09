// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMaxEdgeLengthsSquared
// Entry Point: 008ce7a0
// Size: 548 bytes
// Signature: undefined __thiscall computeMaxEdgeLengthsSquared(FillPlaneGeometry * this, vector * param_1, Brep * param_2)


/* FillPlaneGeometry::computeMaxEdgeLengthsSquared(std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >&, Brep const&) */

void __thiscall
FillPlaneGeometry::computeMaxEdgeLengthsSquared
          (FillPlaneGeometry *this,vector *param_1,Brep *param_2)

{
  uint uVar1;
  float **ppfVar2;
  float **ppfVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float **ppfVar9;
  ushort *puVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar7 = (ulong)(*(long *)(param_2 + 0x2f70) - *(long *)(param_2 + 0x2f68)) >> 3;
  uVar17 = (ulong)((uint)uVar7 & 0xfffffffc);
  uVar8 = *(long *)(param_1 + 8) - *(long *)param_1 >> 2;
  if (uVar8 < uVar17) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)param_1,uVar17 - uVar8);
  }
  else if (uVar17 < uVar8) {
    *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar17 * 4;
  }
  ppfVar2 = *(float ***)(this + 0xb0);
  ppfVar3 = *(float ***)(this + 0xb8);
  uVar6 = 0;
  fVar18 = *(float *)(this + 0x114);
  do {
    if (ppfVar2 != ppfVar3) {
      lVar12 = *(long *)(this + 0xe0);
      lVar4 = *(long *)(this + 0xe8);
      ppfVar9 = ppfVar2;
      do {
        fVar20 = *(float *)(this + 0x9c);
        fVar21 = (float)NEON_fmadd((fVar18 / (float)(ulong)(((uint)((int)ppfVar3 - (int)ppfVar2) >>
                                                             3 & 0xffff) * 100)) *
                                   (float)(ulong)uVar6 *
                                   (float)((ulong)(lVar4 - lVar12) >> 5 & 0xffffffff),
                                   *(undefined4 *)(this + 0x11c),fVar20);
        if ((fVar20 <= fVar21) &&
           (fVar20 = *(float *)(this + 0xa8), fVar21 <= *(float *)(this + 0xa8))) {
          fVar20 = fVar21;
        }
        pfVar11 = *ppfVar9;
        pfVar14 = *(float **)(pfVar11 + 4);
        do {
          pfVar13 = pfVar14;
          pfVar14 = pfVar13 + 3;
          fVar21 = pfVar13[4];
          pfVar5 = (float *)(*(long *)(pfVar11 + 6) + -0xc);
          if (pfVar14 == (float *)(*(long *)(pfVar11 + 6) + -0xc)) break;
          pfVar5 = pfVar14;
        } while (fVar20 < fVar21);
        ppfVar9 = ppfVar9 + 1;
        fVar21 = (fVar20 - fVar21) / (pfVar13[1] - fVar21);
        fVar22 = (float)NEON_fmadd(*pfVar13 - *pfVar5,fVar21,*pfVar5);
        fVar21 = (float)NEON_fmadd(pfVar13[2] - pfVar13[5],fVar21,pfVar13[5]);
        *pfVar11 = fVar22 + pfVar11[10];
        pfVar11[1] = fVar20;
        pfVar11[2] = fVar21 + pfVar11[0xb];
      } while (ppfVar9 != ppfVar3);
    }
    if ((uVar7 & 0xfffffffc) != 0) {
      puVar10 = *(ushort **)(param_2 + 0x2f68);
      uVar15 = 2;
      lVar12 = *(long *)(param_2 + 0x2f50);
      pfVar14 = *(float **)param_1;
      uVar8 = uVar17;
      puVar16 = puVar10;
      do {
        if ((uVar15 - 2 & 3) != 0) {
          uVar1 = uVar15;
          if ((uVar15 - 3 & 3) != 0) {
            uVar1 = uVar15 - 3;
          }
          pfVar5 = ppfVar2[*(ushort *)(lVar12 + (ulong)*puVar16 * 0xc + 8)];
          pfVar11 = ppfVar2[*(ushort *)(lVar12 + (ulong)puVar10[(ulong)uVar1 * 4] * 0xc + 8)];
          uVar19 = NEON_fmadd(pfVar11[1] - pfVar5[1],pfVar11[1] - pfVar5[1],
                              (*pfVar11 - *pfVar5) * (*pfVar11 - *pfVar5));
          fVar20 = (float)NEON_fmadd(pfVar11[2] - pfVar5[2],pfVar11[2] - pfVar5[2],uVar19);
          if (fVar20 < *pfVar14) {
            fVar20 = *pfVar14;
          }
          *pfVar14 = fVar20;
        }
        uVar15 = uVar15 + 1;
        puVar16 = puVar16 + 4;
        pfVar14 = pfVar14 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x65) {
      return;
    }
  } while( true );
}


