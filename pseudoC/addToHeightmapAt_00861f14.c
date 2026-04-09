// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToHeightmapAt
// Entry Point: 00861f14
// Size: 1476 bytes
// Signature: undefined __cdecl addToHeightmapAt(int param_1, int param_2, ushort * param_3, int param_4, int param_5, short param_6, short param_7, short param_8, short param_9, short param_10, short * param_11, bool param_12, deque * param_13, short * param_14, short * param_15, short * param_16, short * param_17)


/* DensityMapHeightUpdater::addToHeightmapAt(int, int, unsigned short*, int, int, short, short,
   short, short, short, short const*, bool, std::__ndk1::deque<std::__ndk1::pair<short, short>,
   std::__ndk1::allocator<std::__ndk1::pair<short, short> > >&, short&, short&, short&, short&) */

undefined8
DensityMapHeightUpdater::addToHeightmapAt
          (int param_1,int param_2,ushort *param_3,int param_4,int param_5,short param_6,
          short param_7,short param_8,short param_9,short param_10,short *param_11,bool param_12,
          deque *param_13,short *param_14,short *param_15,short *param_16,short *param_17)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
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
  
  lVar20 = (long)param_1;
  lVar1 = lVar20 + param_4 * param_2;
  uVar9 = param_3[lVar1];
  if ((short)uVar9 < 0) {
    if ((uVar9 >> 0xd & 1) == 0) {
      iVar2 = param_1 + 1;
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,iVar2,param_2,param_14,param_15,param_16,param_17)
      ;
      iVar16 = param_1 + -1;
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,iVar16,param_2,param_14,param_15,param_16,param_17
                );
      iVar14 = param_2 + 1;
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,param_1,iVar14,param_14,param_15,param_16,param_17
                );
      iVar15 = param_2 + -1;
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,param_1,iVar15,param_14,param_15,param_16,param_17
                );
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,iVar2,iVar14,param_14,param_15,param_16,param_17);
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,iVar2,iVar15,param_14,param_15,param_16,param_17);
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,iVar16,iVar14,param_14,param_15,param_16,param_17)
      ;
      addToBorderInnerBlocked
                (param_13,param_3,param_4,param_5,iVar16,iVar15,param_14,param_15,param_16,param_17)
      ;
    }
  }
  else {
    if ((param_11 != (short *)0x0) && (param_11[lVar1] <= param_10)) {
      param_10 = param_11[lVar1];
    }
    iVar2 = param_2 + 1;
    iVar14 = param_2 + -1;
    uVar11 = param_3[lVar1 + -1];
    uVar10 = param_3[(int)lVar1 + 1];
    puVar3 = param_3 + lVar20 + iVar14 * param_4;
    puVar4 = param_3 + lVar20 + iVar2 * param_4;
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar12 = puVar3[-1];
    uVar7 = *puVar4;
    uVar8 = puVar4[1];
    uVar13 = puVar4[-1];
    sVar19 = (short)(uVar9 & 0x3ff);
    if ((int)(uVar9 & 0x3ff) < (int)param_10) {
      uVar17 = sVar19 + 1;
      iVar16 = (int)(short)(uVar17 - param_6);
      if (((((((uVar9 >> 0xd & 1) != 0) && ((uVar10 >> 0xb & 1) == 0)) ||
            (((uVar10 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar10 & 0x3ff))))) &&
           ((((uVar9 >> 0xd & 1) != 0 && ((uVar11 >> 0xb & 1) == 0)) ||
            (((uVar11 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar11 & 0x3ff))))))) &&
          ((((uVar9 >> 0xd & 1) != 0 && ((uVar7 >> 0xb & 1) == 0)) ||
           (((uVar7 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar7 & 0x3ff))))))) &&
         ((((((uVar9 >> 0xd & 1) != 0 && ((uVar5 >> 0xb & 1) == 0)) ||
            (((uVar5 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar5 & 0x3ff))))) &&
           (((((iVar16 = (int)(short)(uVar17 - param_7), (uVar9 >> 0xd & 1) != 0 &&
               ((uVar8 >> 0xb & 1) == 0)) ||
              (((uVar8 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar8 & 0x3ff))))) &&
             ((((uVar9 >> 0xd & 1) != 0 && ((uVar6 >> 0xb & 1) == 0)) ||
              (((uVar6 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar6 & 0x3ff))))))) &&
            ((((uVar9 >> 0xd & 1) != 0 && ((uVar13 >> 0xb & 1) == 0)) ||
             (((uVar13 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar13 & 0x3ff))))))))) &&
          ((((uVar9 >> 0xd & 1) != 0 && ((uVar12 >> 0xb & 1) == 0)) ||
           (((uVar12 & 0x3000) != 0x1000 && (iVar16 <= (int)(uVar12 & 0x3ff))))))))) {
        param_3[lVar1] = uVar9 & 0xf800 | uVar17 | 0x400;
        return 1;
      }
      if ((uVar9 >> 0xd & 1) != 0) {
        return 0;
      }
    }
    else {
      if (!param_12) {
        return 0;
      }
      if ((uVar9 >> 0xd & 1) != 0) {
        return 0;
      }
    }
    sVar18 = sVar19 - param_8;
    iVar16 = param_1 + 1;
    sVar19 = sVar19 - param_9;
    addToBorderAdd(param_13,uVar10,sVar18,param_3,param_4,param_5,iVar16,param_2,param_14,param_15,
                   param_16,param_17);
    iVar15 = param_1 + -1;
    addToBorderAdd(param_13,uVar11,sVar18,param_3,param_4,param_5,iVar15,param_2,param_14,param_15,
                   param_16,param_17);
    addToBorderAdd(param_13,uVar7,sVar18,param_3,param_4,param_5,param_1,iVar2,param_14,param_15,
                   param_16,param_17);
    addToBorderAdd(param_13,uVar5,sVar18,param_3,param_4,param_5,param_1,iVar14,param_14,param_15,
                   param_16,param_17);
    addToBorderAdd(param_13,uVar8,sVar19,param_3,param_4,param_5,iVar16,iVar2,param_14,param_15,
                   param_16,param_17);
    addToBorderAdd(param_13,uVar6,sVar19,param_3,param_4,param_5,iVar16,iVar14,param_14,param_15,
                   param_16,param_17);
    addToBorderAdd(param_13,uVar13,sVar19,param_3,param_4,param_5,iVar15,iVar2,param_14,param_15,
                   param_16,param_17);
    addToBorderAdd(param_13,uVar12,sVar19,param_3,param_4,param_5,iVar15,iVar14,param_14,param_15,
                   param_16,param_17);
  }
  return 0;
}


