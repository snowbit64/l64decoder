// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stitchTop
// Entry Point: 008fbbac
// Size: 2640 bytes
// Signature: undefined __thiscall stitchTop(Decimator * this, int param_1, int param_2, int param_3, int param_4)


/* Decimator::stitchTop(int, int, int, int) const */

IndexedTriangleSet * __thiscall
Decimator::stitchTop(Decimator *this,int param_1,int param_2,int param_3,int param_4)

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
  long lVar19;
  short sVar20;
  short sVar21;
  void *pvVar22;
  void *pvVar23;
  IndexedTriangleSet *this_00;
  undefined4 *puVar24;
  float *pfVar25;
  float *pfVar26;
  ulong uVar27;
  float **ppfVar28;
  undefined8 *puVar29;
  int iVar30;
  float *pfVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  void *__src;
  short *psVar37;
  ulong uVar38;
  long lVar39;
  short sVar40;
  uint uVar41;
  uint uVar42;
  float *pfVar43;
  ulong uVar44;
  short *psVar45;
  short *psVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float *local_f0 [16];
  long local_70;
  
  lVar19 = tpidr_el0;
  iVar30 = param_2 + -1;
  local_70 = *(long *)(lVar19 + 0x28);
  iVar32 = param_2;
  iVar33 = -1;
  do {
    iVar9 = *(int *)(this + 0x14);
    uVar42 = *(uint *)(this + 0x18);
    uVar44 = (ulong)uVar42;
    iVar3 = iVar33 + param_2;
    iVar13 = *(int *)(this + 0x10);
    uVar18 = uVar42 * 4;
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    uVar34 = (ulong)uVar18;
    if ((((0 < param_1) && (-1 < iVar3)) && (param_1 < iVar13)) &&
       ((iVar3 + 1 < iVar9 && (0 < (int)uVar42)))) {
      uVar35 = param_1 + iVar13 * iVar30;
      lVar39 = *(long *)(this + 8);
      ppfVar28 = local_f0;
      uVar41 = param_1 + iVar13 * iVar32;
      uVar27 = uVar44;
      do {
        plVar4 = (long *)(lVar39 + (ulong)(uVar35 - 1) * 0x20);
        plVar5 = (long *)(lVar39 + (ulong)uVar35 * 0x20);
        plVar6 = (long *)(lVar39 + (ulong)(uVar41 - 1) * 0x20);
        plVar7 = (long *)(lVar39 + (ulong)uVar41 * 0x20);
        uVar35 = uVar35 + iVar9 * iVar13;
        uVar41 = uVar41 + iVar9 * iVar13;
        uVar27 = uVar27 - 1;
        pfVar43 = (float *)(*plVar4 + (ulong)*(ushort *)((long)plVar4 + 0x1c) * 0xc + 8);
        fVar48 = *pfVar43;
        pfVar31 = (float *)(*plVar5 + (ulong)*(ushort *)((long)plVar5 + 0x1e) * 0xc + 8);
        fVar47 = *pfVar31;
        pfVar25 = (float *)(*plVar7 + (ulong)*(ushort *)(plVar7 + 3) * 0xc + 8);
        fVar49 = *pfVar25;
        pfVar26 = (float *)(*plVar6 + (ulong)*(ushort *)((long)plVar6 + 0x1a) * 0xc + 8);
        fVar50 = *pfVar26;
        *ppfVar28 = pfVar43;
        ppfVar28[1] = pfVar31;
        ppfVar28[2] = pfVar26;
        ppfVar28[3] = pfVar25;
        ppfVar28 = ppfVar28 + 4;
      } while (uVar27 != 0);
      if (fVar50 <= fVar49) {
        fVar49 = fVar50;
      }
      if (fVar48 <= fVar47) {
        fVar47 = fVar48;
      }
      if (fVar47 <= fVar49) {
        fVar49 = fVar47;
      }
      if (0 < (int)uVar42) {
        if (uVar18 < 2) {
          uVar36 = 0;
        }
        else {
          uVar36 = uVar34 & 0x7ffffffc;
          uVar27 = uVar36;
          ppfVar28 = local_f0 + 1;
          do {
            ppfVar1 = ppfVar28 + -1;
            pfVar25 = *ppfVar28;
            ppfVar28 = ppfVar28 + 2;
            uVar27 = uVar27 - 2;
            **ppfVar1 = fVar49;
            *pfVar25 = fVar49;
          } while (uVar27 != 0);
          if (uVar36 == uVar34) goto LAB_008fbd6c;
        }
        lVar39 = uVar34 - uVar36;
        ppfVar28 = local_f0 + uVar36;
        do {
          lVar39 = lVar39 + -1;
          **ppfVar28 = fVar49;
          ppfVar28 = ppfVar28 + 1;
        } while (lVar39 != 0);
      }
    }
LAB_008fbd6c:
    if (((-1 < param_1) && (-1 < iVar3)) &&
       ((param_1 + 1 < iVar13 && ((iVar3 + 1 < iVar9 && (0 < (int)uVar42)))))) {
      lVar39 = *(long *)(this + 8);
      ppfVar28 = local_f0;
      iVar3 = param_1;
      do {
        uVar35 = iVar13 * iVar30 + iVar3;
        uVar41 = iVar13 * iVar32 + iVar3;
        uVar44 = uVar44 - 1;
        iVar3 = iVar3 + iVar9 * iVar13;
        plVar4 = (long *)(lVar39 + (ulong)uVar35 * 0x20);
        plVar5 = (long *)(lVar39 + (ulong)uVar41 * 0x20);
        plVar6 = (long *)(lVar39 + (ulong)(uVar35 + 1) * 0x20);
        plVar7 = (long *)(lVar39 + (ulong)(uVar41 + 1) * 0x20);
        pfVar26 = (float *)(*plVar4 + (ulong)*(ushort *)((long)plVar4 + 0x1c) * 0xc + 8);
        fVar48 = *pfVar26;
        pfVar43 = (float *)(*plVar5 + (ulong)*(ushort *)((long)plVar5 + 0x1a) * 0xc + 8);
        fVar50 = *pfVar43;
        pfVar31 = (float *)(*plVar6 + (ulong)*(ushort *)((long)plVar6 + 0x1e) * 0xc + 8);
        fVar47 = *pfVar31;
        pfVar25 = (float *)(*plVar7 + (ulong)*(ushort *)(plVar7 + 3) * 0xc + 8);
        fVar49 = *pfVar25;
        *ppfVar28 = pfVar26;
        ppfVar28[1] = pfVar31;
        ppfVar28[2] = pfVar43;
        ppfVar28[3] = pfVar25;
        ppfVar28 = ppfVar28 + 4;
      } while (uVar44 != 0);
      if (fVar50 <= fVar49) {
        fVar49 = fVar50;
      }
      if (fVar48 <= fVar47) {
        fVar47 = fVar48;
      }
      if (fVar47 <= fVar49) {
        fVar49 = fVar47;
      }
      if (0 < (int)uVar42) {
        if (uVar18 < 2) {
          uVar27 = 0;
        }
        else {
          uVar27 = uVar34 & 0x7ffffffc;
          uVar44 = uVar27;
          ppfVar28 = local_f0 + 1;
          do {
            ppfVar1 = ppfVar28 + -1;
            pfVar25 = *ppfVar28;
            ppfVar28 = ppfVar28 + 2;
            uVar44 = uVar44 - 2;
            **ppfVar1 = fVar49;
            *pfVar25 = fVar49;
          } while (uVar44 != 0);
          if (uVar27 == uVar34) goto LAB_008fbc00;
        }
        lVar39 = uVar34 - uVar27;
        ppfVar28 = local_f0 + uVar27;
        do {
          lVar39 = lVar39 + -1;
          **ppfVar28 = fVar49;
          ppfVar28 = ppfVar28 + 1;
        } while (lVar39 != 0);
      }
    }
LAB_008fbc00:
    iVar30 = iVar30 + 1;
    iVar32 = iVar32 + 1;
    bVar8 = iVar33 != 0;
    iVar33 = iVar33 + 1;
  } while (bVar8);
  plVar4 = (long *)(*(long *)(this + 8) +
                   (long)(param_1 + (param_2 + iVar9 * param_3) * iVar13) * 0x20);
  plVar5 = (long *)(*(long *)(this + 8) +
                   (long)(iVar13 + iVar13 * (param_2 + iVar9 * param_4) + param_1) * 0x20);
  sVar14 = *(short *)((long)plVar4 + 0x1e);
  lVar39 = *plVar4;
  lVar11 = plVar4[1];
  sVar15 = *(short *)(plVar5 + 3);
  uVar16 = *(ushort *)((long)plVar4 + 0x1c);
  uVar44 = (ulong)uVar16;
  lVar10 = *plVar5;
  lVar12 = plVar5[1];
  uVar17 = *(ushort *)((long)plVar5 + 0x1a);
  uVar34 = (ulong)uVar17;
  local_f0[0] = (float *)0x0;
  local_f0[1] = (float *)0x0;
  local_f0[2] = (float *)0x0;
                    /* try { // try from 008fbf18 to 008fbf33 has its CatchHandler @ 008fc618 */
  FUN_007204e4(local_f0,*plVar4 + uVar44 * 0xc);
  FUN_007204e4(local_f0,*plVar5 + uVar34 * 0xc);
  uVar42 = (int)((ulong)(lVar11 - lVar39) >> 2) * -0x55555555;
  psVar37 = (short *)0x0;
  __src = (void *)0x0;
  uVar35 = (int)((ulong)(lVar12 - lVar10) >> 2) * -0x55555555;
  uVar18 = 0;
  if ((uVar16 + 1 & 0xffff) != (uVar42 & 0xffff)) {
    uVar18 = uVar16 + 1;
  }
  uVar27 = (ulong)uVar18;
  psVar45 = (short *)0x0;
  sVar40 = 2;
  uVar18 = uVar35;
  if (uVar17 != 0) {
    uVar18 = (uint)uVar17;
  }
  uVar36 = (ulong)(uVar18 - 1);
  sVar20 = 1;
  sVar21 = 0;
  do {
    puVar29 = (undefined8 *)(*plVar4 + (uVar27 & 0xffff) * 0xc);
    local_f8 = *(undefined4 *)(puVar29 + 1);
    local_100 = *puVar29;
    puVar29 = (undefined8 *)(*plVar5 + (uVar36 & 0xffff) * 0xc);
    local_110 = *puVar29;
    local_108 = *(undefined4 *)(puVar29 + 1);
    if (((float)local_100 <= (float)local_110 && sVar15 != (short)uVar34) ||
       (sVar14 == (short)uVar44)) {
      FUN_007204e4(local_f0,&local_110);
      if (psVar45 == psVar37) {
        uVar38 = (long)psVar37 - (long)__src;
        if (uVar38 == 0xfffffffffffffffd || (long)(uVar38 + 3) < 0 != SCARRY8(uVar38,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar38 >> 1) + 1;
        if (uVar2 <= uVar38) {
          uVar2 = uVar38;
        }
        if (0x7ffffffffffffffd < uVar38) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar22 = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar22 = operator_new(uVar2 << 1);
        }
        psVar37 = (short *)((long)pvVar22 + ((long)uVar38 >> 1) * 2);
        psVar46 = psVar37 + 1;
        *psVar37 = sVar21;
        if (0 < (long)uVar38) {
          memcpy(pvVar22,__src,uVar38);
        }
        psVar37 = (short *)((long)pvVar22 + uVar2 * 2);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
        pvVar23 = pvVar22;
        if (psVar46 != psVar37) goto LAB_008fc07c;
LAB_008fc170:
        uVar38 = (long)psVar37 - (long)pvVar22;
        if (uVar38 == 0xfffffffffffffffd || (long)(uVar38 + 3) < 0 != SCARRY8(uVar38,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar38 >> 1) + 1;
        if (uVar2 <= uVar38) {
          uVar2 = uVar38;
        }
        if (0x7ffffffffffffffd < uVar38) {
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
                    /* try { // try from 008fc1a8 to 008fc1ab has its CatchHandler @ 008fc638 */
          pvVar23 = operator_new(uVar2 << 1);
        }
        psVar37 = (short *)((long)pvVar23 + ((long)uVar38 >> 1) * 2);
        psVar45 = psVar37 + 1;
        *psVar37 = sVar20;
        if (0 < (long)uVar38) {
          memcpy(pvVar23,pvVar22,uVar38);
        }
        psVar37 = (short *)((long)pvVar23 + uVar2 * 2);
        if (pvVar22 != (void *)0x0) {
          operator_delete(pvVar22);
        }
        __src = pvVar23;
        if (psVar45 != psVar37) goto LAB_008fc090;
LAB_008fc290:
        uVar38 = (long)psVar37 - (long)pvVar23;
        if (uVar38 == 0xfffffffffffffffd || (long)(uVar38 + 3) < 0 != SCARRY8(uVar38,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar38 >> 1) + 1;
        if (uVar2 <= uVar38) {
          uVar2 = uVar38;
        }
        if (0x7ffffffffffffffd < uVar38) {
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
                    /* try { // try from 008fc2c8 to 008fc2cb has its CatchHandler @ 008fc638 */
          __src = operator_new(uVar2 << 1);
        }
        psVar45 = (short *)((long)__src + ((long)uVar38 >> 1) * 2);
        *psVar45 = sVar40;
        if (0 < (long)uVar38) {
          memcpy(__src,pvVar23,uVar38);
        }
        psVar37 = (short *)((long)__src + uVar2 * 2);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
      }
      else {
        psVar46 = psVar45 + 1;
        *psVar45 = sVar21;
        pvVar22 = __src;
        pvVar23 = __src;
        if (psVar46 == psVar37) goto LAB_008fc170;
LAB_008fc07c:
        psVar45 = psVar46 + 1;
        *psVar46 = sVar20;
        __src = pvVar23;
        if (psVar45 == psVar37) goto LAB_008fc290;
LAB_008fc090:
        *psVar45 = sVar40;
      }
      uVar18 = uVar35;
      if ((uVar36 & 0xffff) != 0) {
        uVar18 = (uint)uVar36;
      }
      uVar36 = (ulong)(uVar18 - 1);
      uVar18 = uVar35;
      if ((uVar34 & 0xffff) != 0) {
        uVar18 = (uint)uVar34;
      }
      uVar34 = (ulong)(uVar18 - 1);
      sVar20 = sVar40;
    }
    else {
                    /* try { // try from 008fc00c to 008fc11b has its CatchHandler @ 008fc638 */
      FUN_007204e4(local_f0,&local_100);
      if (psVar45 == psVar37) {
        uVar38 = (long)psVar37 - (long)__src;
        if (uVar38 == 0xfffffffffffffffd || (long)(uVar38 + 3) < 0 != SCARRY8(uVar38,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar38 >> 1) + 1;
        if (uVar2 <= uVar38) {
          uVar2 = uVar38;
        }
        if (0x7ffffffffffffffd < uVar38) {
          uVar2 = 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar22 = (void *)0x0;
        }
        else {
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar22 = operator_new(uVar2 << 1);
        }
        psVar37 = (short *)((long)pvVar22 + ((long)uVar38 >> 1) * 2);
        psVar46 = psVar37 + 1;
        *psVar37 = sVar21;
        if (0 < (long)uVar38) {
          memcpy(pvVar22,__src,uVar38);
        }
        psVar37 = (short *)((long)pvVar22 + uVar2 * 2);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
        pvVar23 = pvVar22;
        if (psVar46 != psVar37) goto LAB_008fc034;
LAB_008fc200:
        uVar38 = (long)psVar37 - (long)pvVar22;
        if (uVar38 == 0xfffffffffffffffd || (long)(uVar38 + 3) < 0 != SCARRY8(uVar38,3)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar38 >> 1) + 1;
        if (uVar2 <= uVar38) {
          uVar2 = uVar38;
        }
        if (0x7ffffffffffffffd < uVar38) {
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
                    /* try { // try from 008fc238 to 008fc23b has its CatchHandler @ 008fc638 */
          pvVar23 = operator_new(uVar2 << 1);
        }
        psVar37 = (short *)((long)pvVar23 + ((long)uVar38 >> 1) * 2);
        psVar45 = psVar37 + 1;
        *psVar37 = sVar20;
        if (0 < (long)uVar38) {
          memcpy(pvVar23,pvVar22,uVar38);
        }
        psVar37 = (short *)((long)pvVar23 + uVar2 * 2);
        if (pvVar22 != (void *)0x0) {
          operator_delete(pvVar22);
        }
        __src = pvVar23;
        if (psVar45 != psVar37) goto LAB_008fc048;
LAB_008fc320:
        uVar38 = (long)psVar37 - (long)pvVar23;
        if (uVar38 == 0xfffffffffffffffd || (long)(uVar38 + 3) < 0 != SCARRY8(uVar38,3)) {
                    /* try { // try from 008fc580 to 008fc5f7 has its CatchHandler @ 008fc63c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar2 = ((long)uVar38 >> 1) + 1;
        if (uVar2 <= uVar38) {
          uVar2 = uVar38;
        }
        if (0x7ffffffffffffffd < uVar38) {
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
                    /* try { // try from 008fc358 to 008fc35b has its CatchHandler @ 008fc638 */
          __src = operator_new(uVar2 << 1);
        }
        psVar45 = (short *)((long)__src + ((long)uVar38 >> 1) * 2);
        *psVar45 = sVar40;
        if (0 < (long)uVar38) {
          memcpy(__src,pvVar23,uVar38);
        }
        psVar37 = (short *)((long)__src + uVar2 * 2);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
      }
      else {
        psVar46 = psVar45 + 1;
        *psVar45 = sVar21;
        pvVar22 = __src;
        pvVar23 = __src;
        if (psVar46 == psVar37) goto LAB_008fc200;
LAB_008fc034:
        psVar45 = psVar46 + 1;
        *psVar46 = sVar20;
        __src = pvVar23;
        if (psVar45 == psVar37) goto LAB_008fc320;
LAB_008fc048:
        *psVar45 = sVar40;
      }
      uVar18 = uVar42 & 0xffff;
      uVar41 = 0;
      if (uVar18 != ((int)uVar27 + 1U & 0xffff)) {
        uVar41 = (int)uVar27 + 1;
      }
      uVar27 = (ulong)uVar41;
      uVar41 = 0;
      if (uVar18 != ((int)uVar44 + 1U & 0xffff)) {
        uVar41 = (int)uVar44 + 1;
      }
      uVar44 = (ulong)uVar41;
      sVar21 = sVar40;
    }
    psVar45 = psVar45 + 1;
    sVar40 = sVar40 + 1;
    if ((sVar14 == (short)uVar44) && (sVar15 == (short)uVar34)) {
                    /* try { // try from 008fc448 to 008fc44f has its CatchHandler @ 008fc614 */
      this_00 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 008fc454 to 008fc457 has its CatchHandler @ 008fc604 */
      IndexedTriangleSet::IndexedTriangleSet(this_00);
      uVar44 = ((long)local_f0[1] - (long)local_f0[0] >> 2) * -0x5555555555555555;
      uVar18 = (uint)uVar44;
                    /* try { // try from 008fc470 to 008fc47f has its CatchHandler @ 008fc600 */
      TriangleSet::setNumVertices((TriangleSet *)this_00,uVar18,0);
      if (uVar18 != 0) {
        lVar39 = 0;
        uVar42 = 0;
        do {
                    /* try { // try from 008fc4a0 to 008fc4ab has its CatchHandler @ 008fc634 */
          TriangleSet::setPosition
                    ((TriangleSet *)this_00,(float *)((long)local_f0[0] + lVar39),uVar42);
          uVar42 = uVar42 + 1;
          lVar39 = lVar39 + 0xc;
        } while (((uVar44 & 0xffffffff) + (uVar44 & 0xffffffff) * 2) * 4 - lVar39 != 0);
      }
      uVar42 = (uint)((ulong)((long)psVar45 - (long)__src) >> 1);
                    /* try { // try from 008fc4c4 to 008fc4cf has its CatchHandler @ 008fc5fc */
      IndexedTriangleSet::setNumIndices(this_00,uVar42);
      if (uVar42 != 0) {
        uVar44 = 0;
        do {
                    /* try { // try from 008fc4e0 to 008fc4eb has its CatchHandler @ 008fc62c */
          IndexedTriangleSet::setIndex
                    (this_00,(uint)*(ushort *)((long)__src + uVar44 * 2),(uint)uVar44);
          uVar44 = uVar44 + 1;
        } while (((ulong)((long)psVar45 - (long)__src) >> 1 & 0xffffffff) != uVar44);
      }
                    /* try { // try from 008fc4f8 to 008fc527 has its CatchHandler @ 008fc628 */
      IndexedTriangleSet::setNumSubsets(this_00,1);
      puVar24 = (undefined4 *)operator_new(0x20);
      *(undefined8 *)(puVar24 + 4) = 0;
      *(undefined8 *)(puVar24 + 6) = 0;
      *puVar24 = 0;
      puVar24[1] = uVar18;
      puVar24[2] = 0;
      puVar24[3] = uVar42;
      IndexedTriangleSet::setSubset(this_00,(IndexedTriangleSubset *)puVar24,0);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      if (local_f0[0] != (float *)0x0) {
        local_f0[1] = local_f0[0];
        operator_delete(local_f0[0]);
      }
      if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return this_00;
    }
  } while( true );
}


