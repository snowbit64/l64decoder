// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToHeightmap
// Entry Point: 0085f380
// Size: 2204 bytes
// Signature: undefined __cdecl addToHeightmap(deque * param_1, ushort * param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, short param_9, short param_10, short param_11, short param_12, short param_13, short * param_14, bool param_15)


/* DensityMapHeightUpdater::addToHeightmap(std::__ndk1::deque<std::__ndk1::pair<short, short>,
   std::__ndk1::allocator<std::__ndk1::pair<short, short> > >&, unsigned short*, int, int, int, int,
   int, int, short, short, short, short, short, short const*, bool) */

void DensityMapHeightUpdater::addToHeightmap
               (deque *param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8,short param_9,short param_10,short param_11,short param_12,
               short param_13,short *param_14,bool param_15)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  short sVar21;
  ulong uVar22;
  ulong uVar23;
  short sVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ushort *puVar33;
  ushort *puVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  short local_80 [2];
  short local_7c [2];
  short local_78 [2];
  short local_74 [2];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::
    deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>::
    __erase_to_end((__deque_iterator)param_1);
  }
  iVar7 = param_5 + param_6 * param_3;
  if ((param_2[iVar7] & 0x6000) == 0) {
    lVar17 = *(long *)(param_1 + 8);
    uVar22 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    uVar12 = 0;
    if (*(long *)(param_1 + 0x10) - lVar17 != 0) {
      uVar12 = (*(long *)(param_1 + 0x10) - lVar17) * 0x80 - 1;
    }
    if (uVar12 == uVar22) {
      std::__ndk1::
      deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>::
      __add_back_capacity();
      lVar17 = *(long *)(param_1 + 8);
      uVar22 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    }
    *(uint *)(*(long *)(lVar17 + (uVar22 >> 7 & 0x1fffffffffffff8)) + (uVar22 & 0x3ff) * 4) =
         param_5 & 0xffffU | param_6 << 0x10;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    param_2[iVar7] = param_2[iVar7] | 0x800;
  }
  local_78[0] = (short)param_5;
  local_80[0] = (short)param_6;
  local_7c[0] = local_80[0];
  local_74[0] = local_78[0];
  if (0 < param_7) {
    lVar28 = (long)(param_3 + -1);
    lVar30 = (long)param_6;
    lVar27 = (long)param_5;
    lVar26 = (long)(param_4 + -1);
    uVar12 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_3 << 1;
    lVar25 = 0;
    puVar13 = param_2 + (long)param_3 + (long)param_6 * (long)param_3 + lVar27;
    iVar8 = param_6 * param_3;
    uVar6 = param_6 << 0x10;
    puVar14 = param_2 + (lVar30 + -1) * (long)param_3;
    puVar33 = param_2 + lVar27 + (long)param_6 * (long)param_3 + 1;
    iVar15 = -2;
    uVar22 = 1;
    lVar16 = lVar30;
    lVar17 = lVar27;
    lVar31 = lVar30;
    uVar9 = uVar6;
    iVar7 = param_5;
    do {
      lVar36 = 0;
      lVar29 = lVar27 - uVar22;
      lVar40 = lVar30 - uVar22;
      lVar2 = uVar22 + lVar27;
      lVar3 = uVar22 + lVar30;
      lVar32 = lVar31;
      puVar34 = puVar33;
      lVar37 = lVar27;
      iVar38 = iVar8;
      uVar35 = uVar6;
      uVar1 = uVar9;
      iVar39 = param_5;
      do {
        if ((((0 < lVar29) && (lVar20 = lVar16 + lVar36, 0 < lVar20)) && (lVar29 < lVar28)) &&
           ((lVar20 < lVar26 && (lVar19 = lVar29 + iVar38, (param_2[lVar19] & 0x6000) == 0)))) {
          lVar18 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar18 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar18) * 0x80 - 1;
          }
          uVar23 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar23) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar23 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar18 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar18 + (uVar23 >> 7 & 0x1fffffffffffff8)) + (uVar23 & 0x3ff) * 4) =
               uVar35 | (uint)lVar29 & 0xffff;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          param_2[lVar19] = param_2[lVar19] | 0x800;
          if (lVar29 < local_74[0]) {
            local_74[0] = (short)lVar29;
          }
          if (local_78[0] < lVar29) {
            local_78[0] = (short)lVar29;
          }
          if (lVar20 < local_7c[0]) {
            local_7c[0] = (short)lVar20;
          }
          if (local_80[0] < lVar20) {
            local_80[0] = (short)lVar20;
          }
        }
        if (((0 < lVar40) && (lVar20 = lVar25 + lVar37, 0 < lVar20)) &&
           ((lVar20 < lVar28 && ((lVar40 < lVar26 && ((puVar14[lVar37] & 0x6000) == 0)))))) {
          lVar19 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar19 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar19) * 0x80 - 1;
          }
          uVar23 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar23) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar23 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar19 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar19 + (uVar23 >> 7 & 0x1fffffffffffff8)) + (uVar23 & 0x3ff) * 4) =
               (int)lVar25 + iVar39 & 0xffffU | (int)lVar40 << 0x10;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          puVar14[lVar37] = puVar14[lVar37] | 0x800;
          if (lVar20 < local_74[0]) {
            local_74[0] = (short)lVar20;
          }
          if (local_78[0] < lVar20) {
            local_78[0] = (short)lVar20;
          }
          if (lVar40 < local_7c[0]) {
            local_7c[0] = (short)lVar40;
          }
          if (local_80[0] < lVar40) {
            local_80[0] = (short)lVar40;
          }
        }
        if ((((0 < lVar2) && (0 < lVar32)) && (lVar2 < lVar28)) &&
           ((lVar32 < lVar26 && ((*puVar34 & 0x6000) == 0)))) {
          lVar20 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar20 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar20) * 0x80 - 1;
          }
          uVar23 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar23) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar23 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar20 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar20 + (uVar23 >> 7 & 0x1fffffffffffff8)) + (uVar23 & 0x3ff) * 4) =
               uVar1 | (uint)lVar2 & 0xffff;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          *puVar34 = *puVar34 | 0x800;
          if (lVar2 < local_74[0]) {
            local_74[0] = (short)lVar2;
          }
          if (local_78[0] < lVar2) {
            local_78[0] = (short)lVar2;
          }
          if (lVar32 < local_7c[0]) {
            local_7c[0] = (short)lVar32;
          }
          if (local_80[0] < lVar32) {
            local_80[0] = (short)lVar32;
          }
        }
        if (((0 < lVar3) && (lVar20 = lVar17 + lVar36, 0 < lVar20)) &&
           ((lVar20 < lVar28 && ((lVar3 < lVar26 && ((puVar13[lVar36] & 0x6000) == 0)))))) {
          lVar19 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar19 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar19) * 0x80 - 1;
          }
          uVar23 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar23) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar23 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar19 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar19 + (uVar23 >> 7 & 0x1fffffffffffff8)) + (uVar23 & 0x3ff) * 4) =
               iVar7 + (int)lVar36 & 0xffffU | (int)lVar3 << 0x10;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          puVar13[lVar36] = puVar13[lVar36] | 0x800;
          if (lVar20 < local_74[0]) {
            local_74[0] = (short)lVar20;
          }
          if (local_78[0] < lVar20) {
            local_78[0] = (short)lVar20;
          }
          if (lVar3 < local_7c[0]) {
            local_7c[0] = (short)lVar3;
          }
          if (local_80[0] < lVar3) {
            local_80[0] = (short)lVar3;
          }
        }
        iVar38 = iVar38 - param_3;
        lVar36 = lVar36 + -1;
        lVar32 = lVar32 + 1;
        uVar1 = uVar1 + 0x10000;
        puVar34 = (ushort *)((long)puVar34 + uVar12);
        lVar37 = lVar37 + 1;
        iVar39 = iVar39 + 1;
        uVar35 = uVar35 - 0x10000;
      } while (iVar15 != (int)lVar36);
      lVar25 = lVar25 + -1;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 1;
      iVar7 = iVar7 + 1;
      iVar15 = iVar15 + -2;
      uVar22 = uVar22 + 1;
      iVar8 = iVar8 + param_3;
      lVar31 = lVar31 + -1;
      uVar9 = uVar9 - 0x10000;
      puVar13 = (ushort *)((long)puVar13 + uVar12 + 2);
      uVar6 = uVar6 + 0x10000;
      puVar33 = (ushort *)((long)puVar33 + (2 - uVar12));
      puVar14 = (ushort *)((long)puVar14 + (-2 - uVar12));
    } while (uVar22 != param_7 + 1);
  }
  lVar17 = *(long *)(param_1 + 0x28);
  do {
    if (lVar17 == 0) {
      uVar11 = 0;
LAB_0085fb68:
      if (*(long *)(lVar10 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar11);
    }
    uVar22 = *(ulong *)(param_1 + 0x20);
    psVar4 = (short *)(*(long *)((long)*(void ***)(param_1 + 8) + (uVar22 >> 7 & 0x1fffffffffffff8))
                      + (uVar22 & 0x3ff) * 4);
    sVar21 = *psVar4;
    sVar24 = psVar4[1];
    *(ulong *)(param_1 + 0x20) = uVar22 + 1;
    *(long *)(param_1 + 0x28) = lVar17 + -1;
    if (0x7ff < uVar22 + 1) {
      operator_delete(**(void ***)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x400;
    }
    uVar22 = addToHeightmapAt((int)sVar21,(int)sVar24,param_2,param_3,param_4,param_9,param_10,
                              param_11,param_12,param_13,param_14,param_15,param_1,local_74,local_78
                              ,local_7c,local_80);
    if ((uVar22 & 1) != 0) {
      sVar21 = local_7c[0];
      if (local_80[0] < local_7c[0]) {
        uVar11 = 1;
      }
      else {
        do {
          if (local_74[0] <= local_78[0]) {
            sVar24 = local_74[0];
            do {
              uVar6 = sVar21 * param_3 + (int)sVar24;
              sVar24 = sVar24 + 1;
              uVar22 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
              *(ushort *)((long)param_2 + uVar22) = *(ushort *)((long)param_2 + uVar22) & 0xf7ff;
            } while (sVar24 <= local_78[0]);
          }
          sVar21 = sVar21 + 1;
        } while (sVar21 <= local_80[0]);
        uVar11 = 1;
      }
      goto LAB_0085fb68;
    }
    lVar17 = *(long *)(param_1 + 0x28);
  } while( true );
}


