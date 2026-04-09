// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readVertexVolumesFromStream
// Entry Point: 008d19d0
// Size: 852 bytes
// Signature: undefined __thiscall readVertexVolumesFromStream(FillPlaneGeometry * this, GsBitStream * param_1, float param_2)


/* FillPlaneGeometry::readVertexVolumesFromStream(GsBitStream*, float) */

void __thiscall
FillPlaneGeometry::readVertexVolumesFromStream
          (FillPlaneGeometry *this,GsBitStream *param_1,float param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte local_74 [4];
  ushort local_70 [2];
  float local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_6c,0x20,true);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = GsBitStream::readBits(param_1,(uchar *)local_70,0x10,true), (uVar6 & 1) == 0)) {
LAB_008d1b98:
    uVar7 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0xe0);
    lVar3 = *(long *)(this + 0xe8);
    *(float *)(this + 0x118) = param_2;
    uVar6 = (ulong)local_70[0];
    uVar14 = (ulong)(lVar3 - lVar2) >> 5;
    uVar8 = (uint)local_70[0];
    if ((uint)uVar14 < uVar8) {
      uVar6 = uVar14 & 0xffffffff;
      local_70[0] = (ushort)uVar14;
    }
    if ((uVar6 & 0xffff) == 0) {
      fVar22 = 0.0;
      uVar6 = 0;
    }
    else {
      fVar22 = 0.0;
      uVar15 = 0;
      do {
        uVar6 = GsBitStream::readBits(param_1,local_74,8,true);
        if ((uVar6 & 1) == 0) goto LAB_008d1b98;
        lVar11 = *(long *)(this + 0xe0);
        fVar16 = (float)NEON_ucvtf((uint)local_74[0]);
        pfVar1 = (float *)(lVar11 + uVar15 * 0x20);
        fVar16 = ((float)(ulong)uVar8 / (float)(uVar14 & 0xffffffff)) * local_6c * (fVar16 / 255.0);
        *pfVar1 = fVar16;
        if (*(short *)((long)pfVar1 + 0x16) == -1) {
          fVar17 = *(float *)(this + 0x9c);
          fVar18 = (float)NEON_fmadd(fVar16 * (float)((ulong)(*(long *)(this + 0xe8) - lVar11) >> 5
                                                     & 0xffffffff),*(undefined4 *)(this + 0x11c),
                                     fVar17);
          if ((fVar17 <= fVar18) &&
             (fVar17 = *(float *)(this + 0xa8), fVar18 <= *(float *)(this + 0xa8))) {
            fVar17 = fVar18;
          }
          pfVar9 = *(float **)(*(long *)(this + 0xb0) + (ulong)*(ushort *)(pfVar1 + 5) * 8);
          pfVar1 = *(float **)(pfVar9 + 4);
          do {
            pfVar12 = pfVar1;
            pfVar1 = pfVar12 + 3;
            fVar18 = pfVar12[4];
            pfVar10 = (float *)(*(long *)(pfVar9 + 6) + -0xc);
            if (pfVar1 == (float *)(*(long *)(pfVar9 + 6) + -0xc)) break;
            pfVar10 = pfVar1;
          } while (fVar17 < fVar18);
          fVar18 = (fVar17 - fVar18) / (pfVar12[1] - fVar18);
          fVar19 = (float)NEON_fmadd(*pfVar12 - *pfVar10,fVar18,*pfVar10);
          fVar18 = (float)NEON_fmadd(pfVar12[2] - pfVar12[5],fVar18,pfVar12[5]);
          *pfVar9 = fVar19 + pfVar9[10];
          pfVar9[1] = fVar17;
          pfVar9[2] = fVar18 + pfVar9[0xb];
        }
        uVar6 = (ulong)local_70[0];
        fVar22 = fVar22 + fVar16;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar6);
    }
    if ((uint)uVar6 < (uint)uVar14) {
      lVar11 = *(long *)(this + 0xe0);
      lVar4 = *(long *)(this + 0xe8);
      lVar13 = *(long *)(this + 0xb0);
      do {
        pfVar1 = (float *)(lVar11 + uVar6 * 0x20);
        fVar16 = (*(float *)(lVar11 + (ulong)*(ushort *)((long)pfVar1 + 0x1a) * 0x20) +
                 *(float *)(lVar11 + (ulong)*(ushort *)(pfVar1 + 7) * 0x20)) * 0.5;
        fVar16 = (float)NEON_fmadd(fVar16,(&s_staticNoise)[uVar6 & 0xff],fVar16);
        *pfVar1 = fVar16;
        if (*(short *)((long)pfVar1 + 0x16) == -1) {
          fVar17 = *(float *)(this + 0x9c);
          fVar18 = (float)NEON_fmadd(fVar16 * (float)((ulong)(lVar4 - lVar11) >> 5 & 0xffffffff),
                                     *(undefined4 *)(this + 0x11c),fVar17);
          if ((fVar17 <= fVar18) &&
             (fVar17 = *(float *)(this + 0xa8), fVar18 <= *(float *)(this + 0xa8))) {
            fVar17 = fVar18;
          }
          pfVar9 = *(float **)(lVar13 + (ulong)*(ushort *)(pfVar1 + 5) * 8);
          pfVar1 = *(float **)(pfVar9 + 4);
          do {
            pfVar12 = pfVar1;
            pfVar1 = pfVar12 + 3;
            fVar18 = pfVar12[4];
            pfVar10 = (float *)(*(long *)(pfVar9 + 6) + -0xc);
            if (pfVar1 == (float *)(*(long *)(pfVar9 + 6) + -0xc)) break;
            pfVar10 = pfVar1;
          } while (fVar17 < fVar18);
          fVar21 = pfVar12[2];
          fVar23 = pfVar12[5];
          fVar19 = *pfVar12;
          fVar18 = (fVar17 - fVar18) / (pfVar12[1] - fVar18);
          fVar20 = *pfVar10;
          pfVar9[1] = fVar17;
          fVar19 = (float)NEON_fmadd(fVar19 - fVar20,fVar18,fVar20);
          fVar17 = (float)NEON_fmadd(fVar21 - fVar23,fVar18,fVar23);
          *pfVar9 = fVar19 + pfVar9[10];
          pfVar9[2] = fVar17 + pfVar9[0xb];
        }
        fVar22 = fVar22 + fVar16;
        uVar6 = uVar6 + 1;
      } while (uVar6 != ((ulong)(lVar3 - lVar2) >> 5 & 0xffffffff));
    }
    spreadVolume(this,param_2 - fVar22);
    solveHardConstraints();
    uVar7 = 1;
    *(undefined2 *)(this + 0x94) = 0x101;
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


