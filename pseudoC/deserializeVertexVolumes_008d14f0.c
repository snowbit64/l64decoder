// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeVertexVolumes
// Entry Point: 008d14f0
// Size: 916 bytes
// Signature: undefined __thiscall deserializeVertexVolumes(FillPlaneGeometry * this, File * param_1)


/* FillPlaneGeometry::deserializeVertexVolumes(File&) */

undefined4 __thiscall
FillPlaneGeometry::deserializeVertexVolumes(FillPlaneGeometry *this,File *param_1)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 uVar15;
  void *pvVar16;
  void *pvVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  float local_50;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
                    /* try { // try from 008d152c to 008d1587 has its CatchHandler @ 008d1884 */
  iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_50,4);
  if ((iVar5 == 4) &&
     (iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_4c,4), iVar5 == 4)) {
    uVar6 = (ulong)local_4c;
    uVar8 = (long)local_60 - (long)local_68 >> 2;
    if (uVar8 < uVar6) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                ((vector<float,std::__ndk1::allocator<float>> *)&local_68,uVar6 - uVar8);
      pvVar16 = local_68;
      pvVar17 = local_60;
    }
    else {
      pvVar16 = local_68;
      pvVar17 = local_60;
      if (uVar6 < uVar8) {
        pvVar17 = (void *)((long)local_68 + uVar6 * 4);
        local_60 = pvVar17;
      }
    }
    for (; pvVar16 != pvVar17; pvVar16 = (void *)((long)pvVar16 + 4)) {
                    /* try { // try from 008d15a8 to 008d15b7 has its CatchHandler @ 008d1888 */
      iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,pvVar16,4);
      if (iVar5 != 4) {
        if (pvVar16 != pvVar17) goto LAB_008d1704;
        break;
      }
    }
    lVar3 = *(long *)(this + 0xe0);
    uVar6 = (ulong)(*(long *)(this + 0xe8) - lVar3) >> 5;
    *(float *)(this + 0x118) = local_50;
    uVar8 = (ulong)((long)local_60 - (long)local_68) >> 2;
    lVar9 = *(long *)(this + 0xb0);
    uVar7 = (uint)uVar6;
    uVar10 = (uint)uVar8;
    fVar19 = (float)(uVar6 & 0xffffffff);
    uVar1 = uVar7;
    if (uVar10 <= uVar7) {
      uVar1 = uVar10;
    }
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0) {
      fVar18 = 0.0;
    }
    else {
      uVar11 = 0;
      fVar18 = 0.0;
      do {
        pfVar2 = (float *)(lVar3 + uVar11 * 0x20);
        fVar20 = ((float)(uVar8 & 0xffffffff) / fVar19) * *(float *)((long)local_68 + uVar11 * 4);
        *pfVar2 = fVar20;
        if (*(short *)((long)pfVar2 + 0x16) == -1) {
          fVar21 = *(float *)(this + 0x9c);
          fVar22 = (float)NEON_fmadd(fVar20 * fVar19,*(undefined4 *)(this + 0x11c),fVar21);
          if ((fVar21 <= fVar22) &&
             (fVar21 = *(float *)(this + 0xa8), fVar22 <= *(float *)(this + 0xa8))) {
            fVar21 = fVar22;
          }
          pfVar14 = *(float **)(lVar9 + (ulong)*(ushort *)(pfVar2 + 5) * 8);
          pfVar2 = *(float **)(pfVar14 + 4);
          do {
            pfVar13 = pfVar2;
            pfVar2 = pfVar13 + 3;
            fVar22 = pfVar13[4];
            pfVar12 = (float *)(*(long *)(pfVar14 + 6) + -0xc);
            if (pfVar2 == (float *)(*(long *)(pfVar14 + 6) + -0xc)) break;
            pfVar12 = pfVar2;
          } while (fVar21 < fVar22);
          fVar22 = (fVar21 - fVar22) / (pfVar13[1] - fVar22);
          fVar23 = (float)NEON_fmadd(*pfVar13 - *pfVar12,fVar22,*pfVar12);
          fVar22 = (float)NEON_fmadd(pfVar13[2] - pfVar13[5],fVar22,pfVar13[5]);
          *pfVar14 = fVar23 + pfVar14[10];
          pfVar14[1] = fVar21;
          pfVar14[2] = fVar22 + pfVar14[0xb];
        }
        fVar18 = fVar18 + fVar20;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar6);
      fVar19 = (float)((ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 5 & 0xffffffff);
      lVar9 = *(long *)(this + 0xb0);
    }
    if (uVar10 < uVar7) {
      do {
        pfVar2 = (float *)(lVar3 + uVar6 * 0x20);
        fVar20 = (*(float *)(lVar3 + (ulong)*(ushort *)((long)pfVar2 + 0x1a) * 0x20) +
                 *(float *)(lVar3 + (ulong)*(ushort *)(pfVar2 + 7) * 0x20)) * 0.5;
        fVar20 = (float)NEON_fmadd(fVar20,(&s_staticNoise)[(uint)uVar6 & 0xff],fVar20);
        *pfVar2 = fVar20;
        if (*(short *)((long)pfVar2 + 0x16) == -1) {
          fVar21 = *(float *)(this + 0x9c);
          fVar22 = (float)NEON_fmadd(fVar20 * fVar19,*(undefined4 *)(this + 0x11c),fVar21);
          if ((fVar21 <= fVar22) &&
             (fVar21 = *(float *)(this + 0xa8), fVar22 <= *(float *)(this + 0xa8))) {
            fVar21 = fVar22;
          }
          pfVar14 = *(float **)(lVar9 + (ulong)*(ushort *)(pfVar2 + 5) * 8);
          pfVar2 = *(float **)(pfVar14 + 4);
          do {
            pfVar13 = pfVar2;
            pfVar2 = pfVar13 + 3;
            fVar22 = pfVar13[4];
            pfVar12 = (float *)(*(long *)(pfVar14 + 6) + -0xc);
            if (pfVar2 == (float *)(*(long *)(pfVar14 + 6) + -0xc)) break;
            pfVar12 = pfVar2;
          } while (fVar21 < fVar22);
          fVar22 = (fVar21 - fVar22) / (pfVar13[1] - fVar22);
          fVar23 = (float)NEON_fmadd(*pfVar13 - *pfVar12,fVar22,*pfVar12);
          fVar22 = (float)NEON_fmadd(pfVar13[2] - pfVar13[5],fVar22,pfVar13[5]);
          *pfVar14 = fVar23 + pfVar14[10];
          pfVar14[1] = fVar21;
          pfVar14[2] = fVar22 + pfVar14[0xb];
        }
        fVar18 = fVar18 + fVar20;
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 != uVar7);
    }
    spreadVolume(this,local_50 - fVar18);
    solveHardConstraints();
    uVar15 = 1;
    *(undefined2 *)(this + 0x94) = 0x101;
  }
  else {
LAB_008d1704:
    uVar15 = 0;
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


