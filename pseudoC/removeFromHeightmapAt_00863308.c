// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromHeightmapAt
// Entry Point: 00863308
// Size: 1608 bytes
// Signature: undefined __cdecl removeFromHeightmapAt(int param_1, int param_2, ushort * param_3, int param_4, int param_5, short param_6, short param_7, short param_8, short param_9, short * param_10, deque * param_11, int * param_12, int * param_13, short * param_14, short * param_15, short * param_16, short * param_17)


/* DensityMapHeightUpdater::removeFromHeightmapAt(int, int, unsigned short*, int, int, short, short,
   short, short, short const*, std::__ndk1::deque<std::__ndk1::pair<short, short>,
   std::__ndk1::allocator<std::__ndk1::pair<short, short> > >&, int&, int&, short&, short&, short&,
   short&) */

undefined8
DensityMapHeightUpdater::removeFromHeightmapAt
          (int param_1,int param_2,ushort *param_3,int param_4,int param_5,short param_6,
          short param_7,short param_8,short param_9,short *param_10,deque *param_11,int *param_12,
          int *param_13,short *param_14,short *param_15,short *param_16,short *param_17)

{
  long lVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  short sVar18;
  short sVar19;
  long lVar20;
  int iVar21;
  
  lVar20 = (long)param_1;
  lVar1 = lVar20 + param_4 * param_2;
  uVar9 = param_3[lVar1];
  if ((short)uVar9 < 0) {
    if ((uVar9 >> 0xd & 1) != 0) {
      return 0;
    }
    iVar21 = param_1 + 1;
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,iVar21,param_2,param_14,param_15,param_16,param_17);
    iVar16 = param_1 + -1;
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,iVar16,param_2,param_14,param_15,param_16,param_17);
    iVar14 = param_2 + 1;
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,param_1,iVar14,param_14,param_15,param_16,param_17);
    iVar15 = param_2 + -1;
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,param_1,iVar15,param_14,param_15,param_16,param_17);
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,iVar21,iVar14,param_14,param_15,param_16,param_17);
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,iVar21,iVar15,param_14,param_15,param_16,param_17);
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,iVar16,iVar14,param_14,param_15,param_16,param_17);
    addToBorderInnerBlocked
              (param_11,param_3,param_4,param_5,iVar16,iVar15,param_14,param_15,param_16,param_17);
    return 0;
  }
  if (param_10 == (short *)0x0) {
    iVar21 = 0;
  }
  else {
    iVar21 = (int)param_10[lVar1];
  }
  uVar4 = uVar9 & 0x3ff;
  if ((int)uVar4 <= iVar21) {
    return 0;
  }
  iVar21 = param_2 + 1;
  iVar14 = param_2 + -1;
  uVar10 = param_3[(int)lVar1 + 1];
  puVar2 = param_3 + lVar20 + iVar21 * param_4;
  puVar3 = param_3 + lVar20 + iVar14 * param_4;
  uVar11 = param_3[lVar1 + -1];
  uVar5 = *puVar2;
  sVar19 = (short)uVar4;
  uVar17 = sVar19 - 1;
  uVar6 = *puVar3;
  uVar7 = puVar2[1];
  uVar8 = puVar3[1];
  uVar12 = puVar2[-1];
  iVar16 = (int)(short)(uVar17 + param_6);
  uVar13 = puVar3[-1];
  if (((uVar9 >> 0xd & 1) == 0) || ((uVar10 >> 0xb & 1) != 0)) {
    if (((uVar9 >> 0xd & 1) == 0) && (((uVar10 >> 0xd & 1) != 0 && (uVar4 <= (uVar10 & 0x3ff)))))
    goto LAB_008636e0;
    if (((uVar10 >> 0xc & 1) != 0) || ((int)(uVar10 & 0x3ff) <= iVar16)) goto LAB_00863550;
  }
  else {
LAB_00863550:
    if (((uVar9 >> 0xd & 1) == 0) || ((uVar11 >> 0xb & 1) != 0)) {
      if (((uVar9 >> 0xd & 1) == 0) && (((uVar11 >> 0xd & 1) != 0 && (uVar4 <= (uVar11 & 0x3ff)))))
      goto LAB_008636e0;
      if (((uVar11 >> 0xc & 1) == 0) && (iVar16 < (int)(uVar11 & 0x3ff))) goto LAB_008636dc;
    }
    if (((uVar9 >> 0xd & 1) == 0) || ((uVar5 >> 0xb & 1) != 0)) {
      if (((uVar9 >> 0xd & 1) == 0) && (((uVar5 >> 0xd & 1) != 0 && (uVar4 <= (uVar5 & 0x3ff)))))
      goto LAB_008636e0;
      if (((uVar5 >> 0xc & 1) == 0) && (iVar16 < (int)(uVar5 & 0x3ff))) goto LAB_008636dc;
    }
    if (((uVar9 >> 0xd & 1) == 0) || ((uVar6 >> 0xb & 1) != 0)) {
      if (((uVar9 >> 0xd & 1) == 0) && (((uVar6 >> 0xd & 1) != 0 && (uVar4 <= (uVar6 & 0x3ff)))))
      goto LAB_008636e0;
      if (((uVar6 >> 0xc & 1) == 0) && (iVar16 < (int)(uVar6 & 0x3ff))) goto LAB_008636dc;
    }
    iVar16 = (int)(short)(uVar17 + param_7);
    if (((uVar9 >> 0xd & 1) == 0) || ((uVar7 >> 0xb & 1) != 0)) {
      if (((uVar9 >> 0xd & 1) == 0) && (((uVar7 >> 0xd & 1) != 0 && (uVar4 <= (uVar7 & 0x3ff)))))
      goto LAB_008636e0;
      if (((uVar7 >> 0xc & 1) == 0) && (iVar16 < (int)(uVar7 & 0x3ff))) goto LAB_008636dc;
    }
    if (((uVar9 >> 0xd & 1) == 0) || ((uVar8 >> 0xb & 1) != 0)) {
      if (((uVar9 >> 0xd & 1) == 0) && (((uVar8 >> 0xd & 1) != 0 && (uVar4 <= (uVar8 & 0x3ff)))))
      goto LAB_008636e0;
      if (((uVar8 >> 0xc & 1) == 0) && (iVar16 < (int)(uVar8 & 0x3ff))) goto LAB_008636dc;
    }
    if (((uVar9 >> 0xd & 1) == 0) || ((uVar12 >> 0xb & 1) != 0)) {
      if (((uVar9 >> 0xd & 1) == 0) && (((uVar12 >> 0xd & 1) != 0 && (uVar4 <= (uVar12 & 0x3ff)))))
      goto LAB_008636e0;
      if (((uVar12 >> 0xc & 1) == 0) && (iVar16 < (int)(uVar12 & 0x3ff))) goto LAB_008636dc;
    }
    if (((uVar9 >> 0xd & 1) != 0) && ((uVar13 >> 0xb & 1) == 0)) {
LAB_00863594:
      param_3[lVar1] = uVar9 & 0xf800 | uVar17 | 0x400;
      *param_12 = param_1;
      *param_13 = param_2;
      return 1;
    }
    if (((uVar9 >> 0xd & 1) == 0) && (((uVar13 >> 0xd & 1) != 0 && (uVar4 <= (uVar13 & 0x3ff)))))
    goto LAB_008636e0;
    if (((uVar13 >> 0xc & 1) != 0) || ((int)(uVar13 & 0x3ff) <= iVar16)) goto LAB_00863594;
  }
LAB_008636dc:
  if ((uVar9 >> 0xd & 1) != 0) {
    return 0;
  }
LAB_008636e0:
  sVar18 = sVar19 + param_8;
  iVar16 = param_1 + 1;
  sVar19 = sVar19 + param_9;
  addToBorderRemove(param_11,uVar10,sVar18,param_3,param_4,param_5,iVar16,param_2,param_14,param_15,
                    param_16,param_17);
  iVar15 = param_1 + -1;
  addToBorderRemove(param_11,uVar11,sVar18,param_3,param_4,param_5,iVar15,param_2,param_14,param_15,
                    param_16,param_17);
  addToBorderRemove(param_11,uVar5,sVar18,param_3,param_4,param_5,param_1,iVar21,param_14,param_15,
                    param_16,param_17);
  addToBorderRemove(param_11,uVar6,sVar18,param_3,param_4,param_5,param_1,iVar14,param_14,param_15,
                    param_16,param_17);
  addToBorderRemove(param_11,uVar7,sVar19,param_3,param_4,param_5,iVar16,iVar21,param_14,param_15,
                    param_16,param_17);
  addToBorderRemove(param_11,uVar8,sVar19,param_3,param_4,param_5,iVar16,iVar14,param_14,param_15,
                    param_16,param_17);
  addToBorderRemove(param_11,uVar12,sVar19,param_3,param_4,param_5,iVar15,iVar21,param_14,param_15,
                    param_16,param_17);
  addToBorderRemove(param_11,uVar13,sVar19,param_3,param_4,param_5,iVar15,iVar14,param_14,param_15,
                    param_16,param_17);
  return 0;
}


