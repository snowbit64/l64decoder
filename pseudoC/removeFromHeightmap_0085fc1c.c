// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromHeightmap
// Entry Point: 0085fc1c
// Size: 2180 bytes
// Signature: undefined __cdecl removeFromHeightmap(deque * param_1, ushort * param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, short param_9, short param_10, short param_11, short param_12, short * param_13, int * param_14, int * param_15)


/* DensityMapHeightUpdater::removeFromHeightmap(std::__ndk1::deque<std::__ndk1::pair<short, short>,
   std::__ndk1::allocator<std::__ndk1::pair<short, short> > >&, unsigned short*, int, int, int, int,
   int, int, short, short, short, short, short const*, int&, int&) */

void DensityMapHeightUpdater::removeFromHeightmap
               (deque *param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8,short param_9,short param_10,short param_11,short param_12,
               short *param_13,int *param_14,int *param_15)

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
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ushort *puVar14;
  ushort *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  short sVar22;
  ulong uVar23;
  ulong uVar24;
  short sVar25;
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
    lVar18 = *(long *)(param_1 + 8);
    uVar23 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    uVar13 = 0;
    if (*(long *)(param_1 + 0x10) - lVar18 != 0) {
      uVar13 = (*(long *)(param_1 + 0x10) - lVar18) * 0x80 - 1;
    }
    if (uVar13 == uVar23) {
      std::__ndk1::
      deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>::
      __add_back_capacity();
      lVar18 = *(long *)(param_1 + 8);
      uVar23 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    }
    *(uint *)(*(long *)(lVar18 + (uVar23 >> 7 & 0x1fffffffffffff8)) + (uVar23 & 0x3ff) * 4) =
         param_5 & 0xffffU | param_6 << 0x10;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    param_2[iVar7] = param_2[iVar7] | 0x800;
  }
  local_78[0] = (short)param_5;
  local_80[0] = (short)param_6;
  local_7c[0] = local_80[0];
  local_74[0] = local_78[0];
  if (0 < param_7) {
    lVar29 = (long)(param_3 + -1);
    lVar30 = (long)param_6;
    lVar28 = (long)param_5;
    lVar27 = (long)(param_4 + -1);
    uVar13 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_3 << 1;
    lVar26 = 0;
    puVar14 = param_2 + (long)param_3 + (long)param_6 * (long)param_3 + lVar28;
    iVar8 = param_6 * param_3;
    uVar6 = param_6 << 0x10;
    puVar15 = param_2 + (lVar30 + -1) * (long)param_3;
    puVar33 = param_2 + lVar28 + (long)param_6 * (long)param_3 + 1;
    iVar16 = -2;
    uVar23 = 1;
    lVar17 = lVar30;
    lVar18 = lVar28;
    lVar31 = lVar30;
    uVar9 = uVar6;
    iVar7 = param_5;
    do {
      lVar36 = 0;
      lVar11 = lVar28 - uVar23;
      lVar40 = lVar30 - uVar23;
      lVar2 = uVar23 + lVar28;
      lVar3 = uVar23 + lVar30;
      lVar32 = lVar31;
      puVar34 = puVar33;
      lVar37 = lVar28;
      iVar38 = iVar8;
      uVar35 = uVar6;
      uVar1 = uVar9;
      iVar39 = param_5;
      do {
        if ((((0 < lVar11) && (lVar21 = lVar17 + lVar36, 0 < lVar21)) && (lVar11 < lVar29)) &&
           ((lVar21 < lVar27 && (lVar20 = lVar11 + iVar38, (param_2[lVar20] & 0x6000) == 0)))) {
          lVar19 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar19 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar19) * 0x80 - 1;
          }
          uVar24 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar24) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar24 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar19 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar19 + (uVar24 >> 7 & 0x1fffffffffffff8)) + (uVar24 & 0x3ff) * 4) =
               uVar35 | (uint)lVar11 & 0xffff;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          param_2[lVar20] = param_2[lVar20] | 0x800;
          if (lVar11 < local_74[0]) {
            local_74[0] = (short)lVar11;
          }
          if (local_78[0] < lVar11) {
            local_78[0] = (short)lVar11;
          }
          if (lVar21 < local_7c[0]) {
            local_7c[0] = (short)lVar21;
          }
          if (local_80[0] < lVar21) {
            local_80[0] = (short)lVar21;
          }
        }
        if (((0 < lVar40) && (lVar21 = lVar26 + lVar37, 0 < lVar21)) &&
           ((lVar21 < lVar29 && ((lVar40 < lVar27 && ((puVar15[lVar37] & 0x6000) == 0)))))) {
          lVar20 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar20 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar20) * 0x80 - 1;
          }
          uVar24 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar24) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar24 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar20 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar20 + (uVar24 >> 7 & 0x1fffffffffffff8)) + (uVar24 & 0x3ff) * 4) =
               (int)lVar26 + iVar39 & 0xffffU | (int)lVar40 << 0x10;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          puVar15[lVar37] = puVar15[lVar37] | 0x800;
          if (lVar21 < local_74[0]) {
            local_74[0] = (short)lVar21;
          }
          if (local_78[0] < lVar21) {
            local_78[0] = (short)lVar21;
          }
          if (lVar40 < local_7c[0]) {
            local_7c[0] = (short)lVar40;
          }
          if (local_80[0] < lVar40) {
            local_80[0] = (short)lVar40;
          }
        }
        if ((((0 < lVar2) && (0 < lVar32)) && (lVar2 < lVar29)) &&
           ((lVar32 < lVar27 && ((*puVar34 & 0x6000) == 0)))) {
          lVar21 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar21 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar21) * 0x80 - 1;
          }
          uVar24 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar24) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar24 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar21 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar21 + (uVar24 >> 7 & 0x1fffffffffffff8)) + (uVar24 & 0x3ff) * 4) =
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
        if (((0 < lVar3) && (lVar21 = lVar18 + lVar36, 0 < lVar21)) &&
           ((lVar21 < lVar29 && ((lVar3 < lVar27 && ((puVar14[lVar36] & 0x6000) == 0)))))) {
          lVar20 = *(long *)(param_1 + 8);
          uVar5 = 0;
          if (*(long *)(param_1 + 0x10) - lVar20 != 0) {
            uVar5 = (*(long *)(param_1 + 0x10) - lVar20) * 0x80 - 1;
          }
          uVar24 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
          if (uVar5 == uVar24) {
            std::__ndk1::
            deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
            ::__add_back_capacity();
            uVar24 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
            lVar20 = *(long *)(param_1 + 8);
          }
          *(uint *)(*(long *)(lVar20 + (uVar24 >> 7 & 0x1fffffffffffff8)) + (uVar24 & 0x3ff) * 4) =
               iVar7 + (int)lVar36 & 0xffffU | (int)lVar3 << 0x10;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          puVar14[lVar36] = puVar14[lVar36] | 0x800;
          if (lVar21 < local_74[0]) {
            local_74[0] = (short)lVar21;
          }
          if (local_78[0] < lVar21) {
            local_78[0] = (short)lVar21;
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
        puVar34 = (ushort *)((long)puVar34 + uVar13);
        lVar37 = lVar37 + 1;
        iVar39 = iVar39 + 1;
        uVar35 = uVar35 - 0x10000;
      } while (iVar16 != (int)lVar36);
      lVar26 = lVar26 + -1;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 1;
      iVar7 = iVar7 + 1;
      iVar16 = iVar16 + -2;
      uVar23 = uVar23 + 1;
      iVar8 = iVar8 + param_3;
      lVar31 = lVar31 + -1;
      uVar9 = uVar9 - 0x10000;
      puVar14 = (ushort *)((long)puVar14 + uVar13 + 2);
      uVar6 = uVar6 + 0x10000;
      puVar33 = (ushort *)((long)puVar33 + (2 - uVar13));
      puVar15 = (ushort *)((long)puVar15 + (-2 - uVar13));
    } while (uVar23 != param_7 + 1);
  }
  lVar18 = *(long *)(param_1 + 0x28);
  do {
    if (lVar18 == 0) {
      uVar12 = 0;
LAB_008603ec:
      if (*(long *)(lVar10 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
    uVar23 = *(ulong *)(param_1 + 0x20);
    psVar4 = (short *)(*(long *)((long)*(void ***)(param_1 + 8) + (uVar23 >> 7 & 0x1fffffffffffff8))
                      + (uVar23 & 0x3ff) * 4);
    sVar22 = *psVar4;
    sVar25 = psVar4[1];
    *(ulong *)(param_1 + 0x20) = uVar23 + 1;
    *(long *)(param_1 + 0x28) = lVar18 + -1;
    if (0x7ff < uVar23 + 1) {
      operator_delete(**(void ***)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x400;
    }
    uVar23 = removeFromHeightmapAt
                       ((int)sVar22,(int)sVar25,param_2,param_3,param_4,param_9,param_10,param_11,
                        param_12,param_13,param_1,param_14,param_15,local_74,local_78,local_7c,
                        local_80);
    if ((uVar23 & 1) != 0) {
      sVar22 = local_7c[0];
      if (local_80[0] < local_7c[0]) {
        uVar12 = 1;
      }
      else {
        do {
          if (local_74[0] <= local_78[0]) {
            sVar25 = local_74[0];
            do {
              uVar6 = sVar22 * param_3 + (int)sVar25;
              sVar25 = sVar25 + 1;
              uVar23 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
              *(ushort *)((long)param_2 + uVar23) = *(ushort *)((long)param_2 + uVar23) & 0xf7ff;
            } while (sVar25 <= local_78[0]);
          }
          sVar22 = sVar22 + 1;
        } while (sVar22 <= local_80[0]);
        uVar12 = 1;
      }
      goto LAB_008603ec;
    }
    lVar18 = *(long *)(param_1 + 0x28);
  } while( true );
}


