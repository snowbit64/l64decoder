// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stitchRight
// Entry Point: 008fb0dc
// Size: 2640 bytes
// Signature: undefined __thiscall stitchRight(Decimator * this, int param_1, int param_2, int param_3, int param_4)


/* Decimator::stitchRight(int, int, int, int) const */

IndexedTriangleSet * __thiscall
Decimator::stitchRight(Decimator *this,int param_1,int param_2,int param_3,int param_4)

{
  float **ppfVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  short sVar21;
  short sVar22;
  void *pvVar23;
  void *pvVar24;
  IndexedTriangleSet *this_00;
  undefined4 *puVar25;
  float *pfVar26;
  float *pfVar27;
  ulong uVar28;
  float **ppfVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  int iVar32;
  undefined8 uVar33;
  float *pfVar34;
  int iVar35;
  int iVar36;
  ulong uVar37;
  void *__src;
  uint uVar38;
  ulong uVar39;
  short *psVar40;
  ulong uVar41;
  long lVar42;
  short sVar43;
  uint uVar44;
  uint uVar45;
  float *pfVar46;
  ulong uVar47;
  short *psVar48;
  short *psVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float *local_f0 [16];
  long local_70;
  
  lVar20 = tpidr_el0;
  iVar32 = param_2 + -1;
  local_70 = *(long *)(lVar20 + 0x28);
  iVar35 = param_2;
  iVar36 = -1;
  do {
    iVar9 = *(int *)(this + 0x14);
    uVar45 = *(uint *)(this + 0x18);
    uVar47 = (ulong)uVar45;
    iVar13 = *(int *)(this + 0x10);
    iVar3 = iVar36 + param_2;
    uVar18 = uVar45 * 4;
    iVar19 = iVar9 * iVar13;
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    uVar37 = (ulong)uVar18;
    if ((((0 < param_1) && (-1 < iVar3)) && (param_1 < iVar13)) &&
       ((iVar3 + 1 < iVar9 && (0 < (int)uVar45)))) {
      uVar38 = param_1 + iVar13 * iVar32;
      lVar42 = *(long *)(this + 8);
      uVar44 = param_1 + iVar13 * iVar35;
      ppfVar29 = local_f0;
      uVar28 = uVar47;
      do {
        plVar4 = (long *)(lVar42 + (ulong)(uVar38 - 1) * 0x20);
        plVar5 = (long *)(lVar42 + (ulong)uVar38 * 0x20);
        plVar6 = (long *)(lVar42 + (ulong)(uVar44 - 1) * 0x20);
        plVar7 = (long *)(lVar42 + (ulong)uVar44 * 0x20);
        uVar38 = uVar38 + iVar19;
        uVar44 = uVar44 + iVar19;
        uVar28 = uVar28 - 1;
        pfVar46 = (float *)(*plVar4 + (ulong)*(ushort *)((long)plVar4 + 0x1c) * 0xc + 8);
        fVar51 = *pfVar46;
        pfVar34 = (float *)(*plVar5 + (ulong)*(ushort *)((long)plVar5 + 0x1e) * 0xc + 8);
        fVar50 = *pfVar34;
        pfVar26 = (float *)(*plVar7 + (ulong)*(ushort *)(plVar7 + 3) * 0xc + 8);
        fVar52 = *pfVar26;
        pfVar27 = (float *)(*plVar6 + (ulong)*(ushort *)((long)plVar6 + 0x1a) * 0xc + 8);
        fVar53 = *pfVar27;
        *ppfVar29 = pfVar46;
        ppfVar29[1] = pfVar34;
        ppfVar29[2] = pfVar27;
        ppfVar29[3] = pfVar26;
        ppfVar29 = ppfVar29 + 4;
      } while (uVar28 != 0);
      if (fVar53 <= fVar52) {
        fVar52 = fVar53;
      }
      if (fVar51 <= fVar50) {
        fVar50 = fVar51;
      }
      if (fVar50 <= fVar52) {
        fVar52 = fVar50;
      }
      if (0 < (int)uVar45) {
        if (uVar18 < 2) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar37 & 0x7ffffffc;
          uVar28 = uVar39;
          ppfVar29 = local_f0 + 1;
          do {
            ppfVar1 = ppfVar29 + -1;
            pfVar26 = *ppfVar29;
            ppfVar29 = ppfVar29 + 2;
            uVar28 = uVar28 - 2;
            **ppfVar1 = fVar52;
            *pfVar26 = fVar52;
          } while (uVar28 != 0);
          if (uVar39 == uVar37) goto LAB_008fb29c;
        }
        lVar42 = uVar37 - uVar39;
        ppfVar29 = local_f0 + uVar39;
        do {
          lVar42 = lVar42 + -1;
          **ppfVar29 = fVar52;
          ppfVar29 = ppfVar29 + 1;
        } while (lVar42 != 0);
      }
    }
LAB_008fb29c:
    if (((-1 < param_1) && (-1 < iVar3)) &&
       ((param_1 + 1 < iVar13 && ((iVar3 + 1 < iVar9 && (0 < (int)uVar45)))))) {
      lVar42 = *(long *)(this + 8);
      ppfVar29 = local_f0;
      iVar3 = param_1;
      do {
        uVar38 = iVar13 * iVar32 + iVar3;
        uVar44 = iVar13 * iVar35 + iVar3;
        uVar47 = uVar47 - 1;
        iVar3 = iVar3 + iVar19;
        plVar4 = (long *)(lVar42 + (ulong)uVar38 * 0x20);
        plVar5 = (long *)(lVar42 + (ulong)uVar44 * 0x20);
        plVar6 = (long *)(lVar42 + (ulong)(uVar38 + 1) * 0x20);
        plVar7 = (long *)(lVar42 + (ulong)(uVar44 + 1) * 0x20);
        pfVar27 = (float *)(*plVar4 + (ulong)*(ushort *)((long)plVar4 + 0x1c) * 0xc + 8);
        fVar51 = *pfVar27;
        pfVar46 = (float *)(*plVar5 + (ulong)*(ushort *)((long)plVar5 + 0x1a) * 0xc + 8);
        fVar53 = *pfVar46;
        pfVar34 = (float *)(*plVar6 + (ulong)*(ushort *)((long)plVar6 + 0x1e) * 0xc + 8);
        fVar50 = *pfVar34;
        pfVar26 = (float *)(*plVar7 + (ulong)*(ushort *)(plVar7 + 3) * 0xc + 8);
        fVar52 = *pfVar26;
        *ppfVar29 = pfVar27;
        ppfVar29[1] = pfVar34;
        ppfVar29[2] = pfVar46;
        ppfVar29[3] = pfVar26;
        ppfVar29 = ppfVar29 + 4;
      } while (uVar47 != 0);
      if (fVar53 <= fVar52) {
        fVar52 = fVar53;
      }
      if (fVar51 <= fVar50) {
        fVar50 = fVar51;
      }
      if (fVar50 <= fVar52) {
        fVar52 = fVar50;
      }
      if (0 < (int)uVar45) {
        if (uVar18 < 2) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar37 & 0x7ffffffc;
          uVar47 = uVar28;
          ppfVar29 = local_f0 + 1;
          do {
            ppfVar1 = ppfVar29 + -1;
            pfVar26 = *ppfVar29;
            ppfVar29 = ppfVar29 + 2;
            uVar47 = uVar47 - 2;
            **ppfVar1 = fVar52;
            *pfVar26 = fVar52;
          } while (uVar47 != 0);
          if (uVar28 == uVar37) goto LAB_008fb130;
        }
        lVar42 = uVar37 - uVar28;
        ppfVar29 = local_f0 + uVar28;
        do {
          lVar42 = lVar42 + -1;
          **ppfVar29 = fVar52;
          ppfVar29 = ppfVar29 + 1;
        } while (lVar42 != 0);
      }
    }
LAB_008fb130:
    iVar32 = iVar32 + 1;
    iVar35 = iVar35 + 1;
    bVar8 = iVar36 != 0;
    iVar36 = iVar36 + 1;
  } while (bVar8);
  iVar32 = param_1 + iVar13 * param_2;
  plVar4 = (long *)(*(long *)(this + 8) + (long)(iVar32 + iVar19 * param_3) * 0x20);
  plVar5 = (long *)(*(long *)(this + 8) + (long)(iVar32 + iVar19 * param_4 + 1) * 0x20);
  sVar14 = *(short *)((long)plVar4 + 0x1c);
  lVar42 = *plVar4;
  lVar11 = plVar4[1];
  sVar15 = *(short *)((long)plVar5 + 0x1e);
  uVar16 = *(ushort *)((long)plVar4 + 0x1a);
  uVar47 = (ulong)uVar16;
  lVar10 = *plVar5;
  lVar12 = plVar5[1];
  uVar17 = *(ushort *)(plVar5 + 3);
  uVar37 = (ulong)uVar17;
  local_f0[0] = (float *)0x0;
  local_f0[1] = (float *)0x0;
  local_f0[2] = (float *)0x0;
                    /* try { // try from 008fb448 to 008fb463 has its CatchHandler @ 008fbb48 */
  FUN_007204e4(local_f0,*plVar4 + uVar47 * 0xc);
  FUN_007204e4(local_f0,*plVar5 + uVar37 * 0xc);
  uVar45 = (int)((ulong)(lVar11 - lVar42) >> 2) * -0x55555555;
  psVar40 = (short *)0x0;
  __src = (void *)0x0;
  uVar38 = (int)((ulong)(lVar12 - lVar10) >> 2) * -0x55555555;
  uVar18 = 0;
  if ((uVar16 + 1 & 0xffff) != (uVar45 & 0xffff)) {
    uVar18 = uVar16 + 1;
  }
  uVar28 = (ulong)uVar18;
  psVar48 = (short *)0x0;
  sVar43 = 2;
  uVar18 = uVar38;
  if (uVar17 != 0) {
    uVar18 = (uint)uVar17;
  }
  uVar39 = (ulong)(uVar18 - 1);
  sVar21 = 1;
  sVar22 = 0;
  do {
    puVar30 = (undefined8 *)(*plVar4 + (uVar28 & 0xffff) * 0xc);
    local_f8 = *(undefined4 *)(puVar30 + 1);
    uVar31 = *puVar30;
    local_100._4_4_ = (float)((ulong)uVar31 >> 0x20);
    puVar30 = (undefined8 *)(*plVar5 + (uVar39 & 0xffff) * 0xc);
    uVar33 = *puVar30;
    local_108 = *(undefined4 *)(puVar30 + 1);
    local_110._4_4_ = (float)((ulong)uVar33 >> 0x20);
    local_110 = uVar33;
    local_100 = uVar31;
    if ((local_110._4_4_ <= local_100._4_4_ && sVar15 != (short)uVar37) || (sVar14 == (short)uVar47)
       ) {
      FUN_007204e4(local_f0,&local_110);
      if (psVar48 == psVar40) {
        uVar41 = (long)psVar40 - (long)__src;
        if (uVar41 == 0xfffffffffffffffd || (long)(uVar41 + 3) < 0 != SCARRY8(uVar41,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar41 >> 1) + 1;
        if (uVar2 <= uVar41) {
          uVar2 = uVar41;
        }
        if (0x7ffffffffffffffd < uVar41) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar23 = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar23 = operator_new(uVar2 << 1);
        }
        psVar40 = (short *)((long)pvVar23 + ((long)uVar41 >> 1) * 2);
        psVar49 = psVar40 + 1;
        *psVar40 = sVar22;
        if (0 < (long)uVar41) {
          memcpy(pvVar23,__src,uVar41);
        }
        psVar40 = (short *)((long)pvVar23 + uVar2 * 2);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
        pvVar24 = pvVar23;
        if (psVar49 != psVar40) goto LAB_008fb5ac;
LAB_008fb6a0:
        uVar41 = (long)psVar40 - (long)pvVar23;
        if (uVar41 == 0xfffffffffffffffd || (long)(uVar41 + 3) < 0 != SCARRY8(uVar41,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar41 >> 1) + 1;
        if (uVar2 <= uVar41) {
          uVar2 = uVar41;
        }
        if (0x7ffffffffffffffd < uVar41) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar24 = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008fb6d8 to 008fb6db has its CatchHandler @ 008fbb68 */
          pvVar24 = operator_new(uVar2 << 1);
        }
        psVar40 = (short *)((long)pvVar24 + ((long)uVar41 >> 1) * 2);
        psVar48 = psVar40 + 1;
        *psVar40 = sVar21;
        if (0 < (long)uVar41) {
          memcpy(pvVar24,pvVar23,uVar41);
        }
        psVar40 = (short *)((long)pvVar24 + uVar2 * 2);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
        __src = pvVar24;
        if (psVar48 != psVar40) goto LAB_008fb5c0;
LAB_008fb7c0:
        uVar41 = (long)psVar40 - (long)pvVar24;
        if (uVar41 == 0xfffffffffffffffd || (long)(uVar41 + 3) < 0 != SCARRY8(uVar41,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar41 >> 1) + 1;
        if (uVar2 <= uVar41) {
          uVar2 = uVar41;
        }
        if (0x7ffffffffffffffd < uVar41) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          __src = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008fb7f8 to 008fb7fb has its CatchHandler @ 008fbb68 */
          __src = operator_new(uVar2 << 1);
        }
        psVar48 = (short *)((long)__src + ((long)uVar41 >> 1) * 2);
        *psVar48 = sVar43;
        if (0 < (long)uVar41) {
          memcpy(__src,pvVar24,uVar41);
        }
        psVar40 = (short *)((long)__src + uVar2 * 2);
        if (pvVar24 != (void *)0x0) {
          operator_delete(pvVar24);
        }
      }
      else {
        psVar49 = psVar48 + 1;
        *psVar48 = sVar22;
        pvVar23 = __src;
        pvVar24 = __src;
        if (psVar49 == psVar40) goto LAB_008fb6a0;
LAB_008fb5ac:
        psVar48 = psVar49 + 1;
        *psVar49 = sVar21;
        __src = pvVar24;
        if (psVar48 == psVar40) goto LAB_008fb7c0;
LAB_008fb5c0:
        *psVar48 = sVar43;
      }
      uVar18 = uVar38;
      if ((uVar39 & 0xffff) != 0) {
        uVar18 = (uint)uVar39;
      }
      uVar39 = (ulong)(uVar18 - 1);
      uVar18 = uVar38;
      if ((uVar37 & 0xffff) != 0) {
        uVar18 = (uint)uVar37;
      }
      uVar37 = (ulong)(uVar18 - 1);
      sVar21 = sVar43;
    }
    else {
                    /* try { // try from 008fb53c to 008fb64b has its CatchHandler @ 008fbb68 */
      FUN_007204e4(local_f0,&local_100);
      if (psVar48 == psVar40) {
        uVar41 = (long)psVar40 - (long)__src;
        if (uVar41 == 0xfffffffffffffffd || (long)(uVar41 + 3) < 0 != SCARRY8(uVar41,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar41 >> 1) + 1;
        if (uVar2 <= uVar41) {
          uVar2 = uVar41;
        }
        if (0x7ffffffffffffffd < uVar41) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar23 = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar23 = operator_new(uVar2 << 1);
        }
        psVar40 = (short *)((long)pvVar23 + ((long)uVar41 >> 1) * 2);
        psVar49 = psVar40 + 1;
        *psVar40 = sVar22;
        if (0 < (long)uVar41) {
          memcpy(pvVar23,__src,uVar41);
        }
        psVar40 = (short *)((long)pvVar23 + uVar2 * 2);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
        pvVar24 = pvVar23;
        if (psVar49 != psVar40) goto LAB_008fb564;
LAB_008fb730:
        uVar41 = (long)psVar40 - (long)pvVar23;
        if (uVar41 == 0xfffffffffffffffd || (long)(uVar41 + 3) < 0 != SCARRY8(uVar41,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar41 >> 1) + 1;
        if (uVar2 <= uVar41) {
          uVar2 = uVar41;
        }
        if (0x7ffffffffffffffd < uVar41) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar24 = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008fb768 to 008fb76b has its CatchHandler @ 008fbb68 */
          pvVar24 = operator_new(uVar2 << 1);
        }
        psVar40 = (short *)((long)pvVar24 + ((long)uVar41 >> 1) * 2);
        psVar48 = psVar40 + 1;
        *psVar40 = sVar21;
        if (0 < (long)uVar41) {
          memcpy(pvVar24,pvVar23,uVar41);
        }
        psVar40 = (short *)((long)pvVar24 + uVar2 * 2);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
        __src = pvVar24;
        if (psVar48 != psVar40) goto LAB_008fb578;
LAB_008fb850:
        uVar41 = (long)psVar40 - (long)pvVar24;
        if (uVar41 == 0xfffffffffffffffd || (long)(uVar41 + 3) < 0 != SCARRY8(uVar41,3)) {
                    /* try { // try from 008fbab0 to 008fbb27 has its CatchHandler @ 008fbb6c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar41 >> 1) + 1;
        if (uVar2 <= uVar41) {
          uVar2 = uVar41;
        }
        if (0x7ffffffffffffffd < uVar41) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          __src = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008fb888 to 008fb88b has its CatchHandler @ 008fbb68 */
          __src = operator_new(uVar2 << 1);
        }
        psVar48 = (short *)((long)__src + ((long)uVar41 >> 1) * 2);
        *psVar48 = sVar43;
        if (0 < (long)uVar41) {
          memcpy(__src,pvVar24,uVar41);
        }
        psVar40 = (short *)((long)__src + uVar2 * 2);
        if (pvVar24 != (void *)0x0) {
          operator_delete(pvVar24);
        }
      }
      else {
        psVar49 = psVar48 + 1;
        *psVar48 = sVar22;
        pvVar23 = __src;
        pvVar24 = __src;
        if (psVar49 == psVar40) goto LAB_008fb730;
LAB_008fb564:
        psVar48 = psVar49 + 1;
        *psVar49 = sVar21;
        __src = pvVar24;
        if (psVar48 == psVar40) goto LAB_008fb850;
LAB_008fb578:
        *psVar48 = sVar43;
      }
      uVar18 = uVar45 & 0xffff;
      uVar44 = 0;
      if (uVar18 != ((int)uVar28 + 1U & 0xffff)) {
        uVar44 = (int)uVar28 + 1;
      }
      uVar28 = (ulong)uVar44;
      uVar44 = 0;
      if (uVar18 != ((int)uVar47 + 1U & 0xffff)) {
        uVar44 = (int)uVar47 + 1;
      }
      uVar47 = (ulong)uVar44;
      sVar22 = sVar43;
    }
    psVar48 = psVar48 + 1;
    sVar43 = sVar43 + 1;
    if ((sVar14 == (short)uVar47) && (sVar15 == (short)uVar37)) {
                    /* try { // try from 008fb978 to 008fb97f has its CatchHandler @ 008fbb44 */
      this_00 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 008fb984 to 008fb987 has its CatchHandler @ 008fbb34 */
      IndexedTriangleSet::IndexedTriangleSet(this_00);
      uVar47 = ((long)local_f0[1] - (long)local_f0[0] >> 2) * -0x5555555555555555;
      uVar18 = (uint)uVar47;
                    /* try { // try from 008fb9a0 to 008fb9af has its CatchHandler @ 008fbb30 */
      TriangleSet::setNumVertices((TriangleSet *)this_00,uVar18,0);
      if (uVar18 != 0) {
        lVar42 = 0;
        uVar45 = 0;
        do {
                    /* try { // try from 008fb9d0 to 008fb9db has its CatchHandler @ 008fbb64 */
          TriangleSet::setPosition
                    ((TriangleSet *)this_00,(float *)((long)local_f0[0] + lVar42),uVar45);
          uVar45 = uVar45 + 1;
          lVar42 = lVar42 + 0xc;
        } while (((uVar47 & 0xffffffff) + (uVar47 & 0xffffffff) * 2) * 4 - lVar42 != 0);
      }
      uVar45 = (uint)((ulong)((long)psVar48 - (long)__src) >> 1);
                    /* try { // try from 008fb9f4 to 008fb9ff has its CatchHandler @ 008fbb2c */
      IndexedTriangleSet::setNumIndices(this_00,uVar45);
      if (uVar45 != 0) {
        uVar47 = 0;
        do {
                    /* try { // try from 008fba10 to 008fba1b has its CatchHandler @ 008fbb5c */
          IndexedTriangleSet::setIndex
                    (this_00,(uint)*(ushort *)((long)__src + uVar47 * 2),(uint)uVar47);
          uVar47 = uVar47 + 1;
        } while (((ulong)((long)psVar48 - (long)__src) >> 1 & 0xffffffff) != uVar47);
      }
                    /* try { // try from 008fba28 to 008fba57 has its CatchHandler @ 008fbb58 */
      IndexedTriangleSet::setNumSubsets(this_00,1);
      puVar25 = (undefined4 *)operator_new(0x20);
      *(undefined8 *)(puVar25 + 4) = 0;
      *(undefined8 *)(puVar25 + 6) = 0;
      *puVar25 = 0;
      puVar25[1] = uVar18;
      puVar25[2] = 0;
      puVar25[3] = uVar45;
      IndexedTriangleSet::setSubset(this_00,(IndexedTriangleSubset *)puVar25,0);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      if (local_f0[0] != (float *)0x0) {
        local_f0[1] = local_f0[0];
        operator_delete(local_f0[0]);
      }
      if (*(long *)(lVar20 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return this_00;
    }
  } while( true );
}


