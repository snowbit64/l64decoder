// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSinglePolyline
// Entry Point: 008cc4ac
// Size: 672 bytes
// Signature: undefined __thiscall computeSinglePolyline(FillPlaneGeometry * this, vector * param_1, Brep * param_2, uint param_3, bool param_4)


/* FillPlaneGeometry::computeSinglePolyline(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&, Brep&, unsigned int, bool) */

bool __thiscall
FillPlaneGeometry::computeSinglePolyline
          (FillPlaneGeometry *this,vector *param_1,Brep *param_2,uint param_3,bool param_4)

{
  ulong uVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  float fVar12;
  ulong uVar13;
  void *__src;
  ulong __n;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar13 = (ulong)param_3;
  do {
    puVar4 = *(undefined4 **)(param_1 + 8);
    if (puVar4 == *(undefined4 **)(param_1 + 0x10)) {
      __src = *(void **)param_1;
      __n = (long)puVar4 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 2);
      }
      puVar4 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
      *puVar4 = (int)uVar13;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_1 = __dest;
      *(undefined4 **)(param_1 + 8) = puVar4 + 1;
      *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar4 = (int)uVar13;
      *(undefined4 **)(param_1 + 8) = puVar4 + 1;
    }
    lVar8 = *(long *)(param_2 + 0x2f68);
    uVar13 = (ulong)*(ushort *)(lVar8 + uVar13 * 8);
    if (param_4) {
      lVar9 = *(long *)(param_2 + 0x2f50);
      if (*(short *)(lVar9 + uVar13 * 0xc + 8) == -1) {
        return true;
      }
    }
    else {
      lVar9 = *(long *)(param_2 + 0x2f50);
    }
    puVar11 = (ushort *)(lVar9 + uVar13 * 0xc);
    lVar10 = *(long *)(param_2 + 0x2ef0);
    uVar13 = 0xffffffff;
    fVar12 = INFINITY;
    uVar5 = *(uint *)(puVar11 + 2);
    pfVar2 = (float *)(lVar10 + (ulong)*puVar11 * 0x10);
    fVar19 = *pfVar2;
    fVar18 = pfVar2[1];
    fVar20 = pfVar2[2];
    puVar11[4] = 0xffff;
    uVar6 = uVar5;
    while( true ) {
      pfVar2 = (float *)(lVar10 + (ulong)*(ushort *)
                                          (lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)uVar6 * 8) *
                                                   0xc) * 0x10);
      fVar21 = pfVar2[1] - fVar18;
      if (fVar21 < -0.01) {
        fVar14 = pfVar2[2];
        fVar16 = *pfVar2;
        uVar15 = cosAngleAtEdge(param_2,uVar6);
        uVar17 = NEON_fmadd(fVar16 - fVar19,fVar16 - fVar19,fVar21 * fVar21);
        fVar14 = (float)NEON_fmadd(fVar14 - fVar20,fVar14 - fVar20,uVar17);
        fVar21 = (float)NEON_fmadd(SQRT(fVar14),uVar15,fVar21);
        if (fVar21 < fVar12) {
          uVar13 = (ulong)uVar6;
          fVar12 = fVar21;
        }
      }
      lVar8 = *(long *)(param_2 + 0x2f68);
      uVar3 = uVar6 + 2;
      if ((uVar6 - 1 & 3) != 0) {
        uVar3 = uVar6 - 1;
      }
      uVar6 = *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4);
      if ((uVar6 == 0xffffffff) || (uVar6 == uVar5)) break;
      lVar9 = *(long *)(param_2 + 0x2f50);
      lVar10 = *(long *)(param_2 + 0x2ef0);
    }
  } while ((int)uVar13 != -1);
  if (ABS(fVar18 - *(float *)(this + 0x9c)) <= 0.01) {
    bVar7 = 4 < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1);
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}


