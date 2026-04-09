// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: edgeCoboundary
// Entry Point: 00b6b080
// Size: 836 bytes
// Signature: undefined __cdecl edgeCoboundary(vector * param_1, vector * param_2, vector * param_3, uint param_4)


/* Brep::edgeCoboundary(std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >&,
   std::__ndk1::vector<Plane, std::__ndk1::allocator<Plane> >&, std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >&, unsigned int) const */

void Brep::edgeCoboundary(vector *param_1,vector *param_2,vector *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  void *__dest;
  long *this;
  uint in_w4;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  void *__src;
  size_t __n;
  uint uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 in_s1;
  undefined4 uVar16;
  undefined4 in_s2;
  undefined4 uVar17;
  undefined4 in_s3;
  undefined4 uVar18;
  
  this = (long *)(ulong)param_4;
  lVar8 = *(long *)(param_1 + 0x2f68);
  uVar14 = (ulong)in_w4;
  uVar3 = *(uint *)(lVar8 + (ulong)in_w4 * 8 + 4);
  uVar13 = in_w4;
  uVar6 = uVar3;
  if (uVar3 != 0xffffffff) {
    uVar13 = in_w4 + 2;
    if ((in_w4 - 1 & 3) != 0) {
      uVar13 = in_w4 - 1;
    }
    uVar14 = isOuterCone((Brep *)param_1,*(ushort *)(lVar8 + (ulong)uVar13 * 8));
    bVar7 = (uVar14 & 1) == 0;
    lVar8 = *(long *)(param_1 + 0x2f68);
    uVar13 = uVar3;
    if (bVar7) {
      uVar13 = in_w4;
    }
    uVar14 = (ulong)uVar13;
    uVar6 = in_w4;
    if (bVar7) {
      uVar6 = uVar3;
    }
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x2f50) + (ulong)*(ushort *)(lVar8 + uVar14 * 8) * 0xc + 4);
  uVar4 = uVar3;
  if (uVar3 == uVar6) {
    uVar3 = uVar6 + 2;
    if ((uVar6 - 1 & 3) != 0) {
      uVar3 = uVar6 - 1;
    }
    uVar3 = *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4);
    uVar4 = uVar3;
  }
  do {
    uVar1 = uVar3 + 2;
    if ((uVar3 - 1 & 3) != 0) {
      uVar1 = uVar3 - 1;
    }
    if ((uVar1 == uVar13) || (uVar1 == uVar6)) {
      uVar12 = uVar1 + 2;
      if ((uVar1 - 1 & 3) != 0) {
        uVar12 = uVar1 - 1;
      }
    }
    else {
      FUN_007204e4(param_2,*(long *)(param_1 + 0x2ef0) +
                           (ulong)*(ushort *)
                                   (*(long *)(param_1 + 0x2f50) +
                                   (ulong)*(ushort *)(lVar8 + (ulong)uVar3 * 8) * 0xc) * 0x10);
      uVar15 = planeAt((Brep *)param_1,uVar3 >> 2);
      puVar2 = *(undefined4 **)(param_3 + 8);
      if (puVar2 < *(undefined4 **)(param_3 + 0x10)) {
        *puVar2 = uVar15;
        puVar2[1] = in_s1;
        puVar2[2] = in_s2;
        puVar2[3] = in_s3;
        *(undefined4 **)(param_3 + 8) = puVar2 + 4;
      }
      else {
        __src = *(void **)param_3;
        __n = (long)puVar2 - (long)__src;
        uVar14 = ((long)__n >> 4) + 1;
        if (uVar14 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar9 = (long)*(undefined4 **)(param_3 + 0x10) - (long)__src;
        uVar11 = (long)uVar9 >> 3;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar14 = 0xfffffffffffffff;
        }
        if (uVar14 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        uVar16 = in_s1;
        uVar17 = in_s2;
        uVar18 = in_s3;
        __dest = operator_new(uVar14 * 0x10);
        puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
        *puVar2 = uVar15;
        puVar2[1] = in_s1;
        puVar2[2] = in_s2;
        puVar2[3] = in_s3;
        in_s1 = uVar16;
        in_s2 = uVar17;
        in_s3 = uVar18;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
          in_s1 = uVar16;
          in_s2 = uVar17;
          in_s3 = uVar18;
        }
        *(void **)param_3 = __dest;
        *(undefined4 **)(param_3 + 8) = puVar2 + 4;
        *(void **)(param_3 + 0x10) = (void *)((long)__dest + uVar14 * 0x10);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      uVar14 = this[1];
      sVar5 = *(short *)(*(long *)(param_1 + 0x2f68) + (ulong)(uVar3 >> 2) * 0x20);
      if (uVar14 == this[2] * 0x40) {
        if ((long)(uVar14 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar14 < 0x3fffffffffffffff) {
          uVar9 = this[2] << 7;
          uVar14 = uVar14 + 0x40 & 0xffffffffffffffc0;
          if (uVar14 <= uVar9) {
            uVar14 = uVar9;
          }
        }
        else {
          uVar14 = 0x7fffffffffffffff;
        }
        std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
                  ((vector<bool,std::__ndk1::allocator<bool>> *)this,uVar14);
        uVar14 = this[1];
      }
      lVar10 = *this;
      uVar11 = uVar14 >> 6;
      uVar9 = 1L << (uVar14 & 0x3f);
      this[1] = uVar14 + 1;
      if (sVar5 < 0) {
        uVar9 = *(ulong *)(lVar10 + uVar11 * 8) | uVar9;
      }
      else {
        uVar9 = *(ulong *)(lVar10 + uVar11 * 8) & (uVar9 ^ 0xffffffffffffffff);
      }
      lVar8 = *(long *)(param_1 + 0x2f68);
      *(ulong *)(lVar10 + uVar11 * 8) = uVar9;
      uVar12 = uVar1;
    }
    uVar3 = *(uint *)(lVar8 + (ulong)uVar12 * 8 + 4);
    if (uVar3 == uVar4 || uVar3 == 0xffffffff) {
      uVar13 = uVar12 + 2;
      if ((uVar12 - 1 & 3) != 0) {
        uVar13 = uVar12 - 1;
      }
      FUN_007204e4(param_2,*(long *)(param_1 + 0x2ef0) +
                           (ulong)*(ushort *)
                                   (*(long *)(param_1 + 0x2f50) +
                                   (ulong)*(ushort *)(lVar8 + (ulong)uVar13 * 8) * 0xc) * 0x10);
      return;
    }
  } while( true );
}


