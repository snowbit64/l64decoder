// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de771c
// Entry Point: 00de771c
// Size: 976 bytes
// Signature: undefined FUN_00de771c(void)


void * FUN_00de771c(int param_1,ushort param_2,uint *param_3,void *param_4,void *param_5,
                   void *param_6,void *param_7,long *param_8)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *__dest;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  short sVar20;
  short sVar21;
  void *__src;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  
  uVar4 = *param_3;
  uVar11 = param_3[1];
  rcIntArray::resize((rcIntArray *)param_8,0);
  if ((0 < (int)uVar11) && (0 < (int)uVar4)) {
    uVar22 = 0;
    do {
      uVar23 = 0;
      do {
        uVar10 = *(uint *)(*(long *)(param_3 + 0x10) + (uVar23 + uVar22 * uVar4) * 4);
        if (uVar10 >> 0x18 != 0) {
          uVar25 = (ulong)uVar10 & 0xffffff;
          uVar1 = uVar25 + (uVar10 >> 0x18);
          do {
            if (((param_2 <= *(ushort *)(*(long *)(param_3 + 0x14) + uVar25 * 2)) &&
                (*(short *)((long)param_4 + uVar25 * 2) == 0)) &&
               (*(char *)(*(long *)(param_3 + 0x16) + uVar25) != '\0')) {
              rcIntArray::resize((rcIntArray *)param_8,*(int *)(param_8 + 1) + 1);
              *(int *)(*param_8 + (long)*(int *)(param_8 + 1) * 4 + -4) = (int)uVar23;
              rcIntArray::resize((rcIntArray *)param_8,*(int *)(param_8 + 1) + 1);
              *(int *)(*param_8 + (long)*(int *)(param_8 + 1) * 4 + -4) = (int)uVar22;
              rcIntArray::resize((rcIntArray *)param_8,*(int *)(param_8 + 1) + 1);
              *(int *)(*param_8 + (long)*(int *)(param_8 + 1) * 4 + -4) = (int)uVar25;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar1);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar4);
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar11);
  }
  if (0 < *(int *)(param_8 + 1)) {
    iVar24 = 0;
    __src = param_4;
    do {
      param_4 = param_6;
      __dest = param_7;
      memcpy(param_4,__src,(long)(int)param_3[2] << 1);
      memcpy(__dest,param_5,(long)(int)param_3[2] << 1);
      iVar14 = *(int *)(param_8 + 1);
      if (iVar14 < 1) {
        iVar15 = 0;
      }
      else {
        lVar16 = 0;
        iVar15 = 0;
        lVar17 = *param_8;
        lVar18 = *(long *)(param_3 + 0x16);
        lVar19 = *(long *)(param_3 + 0x12);
        do {
          while( true ) {
            piVar2 = (int *)(lVar17 + lVar16 * 4);
            uVar22 = (ulong)(uint)piVar2[2];
            if (-1 < piVar2[2]) break;
LAB_00de78f4:
            iVar15 = iVar15 + 1;
            lVar16 = lVar16 + 3;
            if (iVar14 <= lVar16) goto LAB_00de7aa4;
          }
          cVar7 = *(char *)(lVar18 + uVar22);
          iVar5 = *piVar2;
          iVar6 = piVar2[1];
          lVar12 = *(long *)(param_3 + 0x10);
          uVar11 = *(uint *)(lVar19 + uVar22 * 8 + 4);
          sVar20 = *(short *)((long)__src + uVar22 * 2);
          if ((((int)((ulong)uVar11 & 0x3f) == 0x3f) ||
              (lVar3 = ((ulong)*(uint *)(lVar12 + (long)(int)(iVar5 + iVar6 * uVar4 + -1) * 4) &
                       0xffffff) + ((ulong)uVar11 & 0x3f), *(char *)(lVar18 + lVar3) != cVar7)) ||
             (sVar21 = *(short *)((long)__src + lVar3 * 2), sVar21 < 1)) {
            uVar10 = 0xffff;
            uVar23 = (ulong)(uVar11 >> 6) & 0x3f;
            iVar13 = (int)uVar23;
            sVar21 = sVar20;
          }
          else {
            uVar9 = (uint)*(ushort *)((long)param_5 + lVar3 * 2);
            uVar10 = uVar9 + 2;
            if (0xfffc < uVar9) {
              uVar10 = 0xffffffff;
              sVar21 = sVar20;
            }
            uVar23 = (ulong)(uVar11 >> 6) & 0x3f;
            iVar13 = (int)uVar23;
          }
          uVar9 = uVar10;
          sVar20 = sVar21;
          if (((iVar13 != 0x3f) &&
              (lVar3 = ((ulong)*(uint *)(lVar12 + (long)(int)(iVar5 + uVar4 + uVar4 * iVar6) * 4) &
                       0xffffff) + uVar23, *(char *)(lVar18 + lVar3) == cVar7)) &&
             ((sVar8 = *(short *)((long)__src + lVar3 * 2), 0 < sVar8 &&
              (uVar9 = *(ushort *)((long)param_5 + lVar3 * 2) + 2, sVar20 = sVar8,
              (uVar10 & 0xffff) <= uVar9)))) {
            uVar9 = uVar10;
            sVar20 = sVar21;
          }
          uVar23 = (ulong)(uVar11 >> 0xc) & 0x3f;
          uVar10 = uVar9;
          sVar21 = sVar20;
          if (((((int)uVar23 != 0x3f) &&
               (lVar3 = ((ulong)*(uint *)(lVar12 + (long)(int)(iVar5 + iVar6 * uVar4 + 1) * 4) &
                        0xffffff) + uVar23, *(char *)(lVar18 + lVar3) == cVar7)) &&
              (sVar8 = *(short *)((long)__src + lVar3 * 2), 0 < sVar8)) &&
             (uVar10 = *(ushort *)((long)param_5 + lVar3 * 2) + 2, sVar21 = sVar8,
             (uVar9 & 0xffff) <= uVar10)) {
            uVar10 = uVar9;
            sVar21 = sVar20;
          }
          uVar23 = (ulong)(uVar11 >> 0x12) & 0x3f;
          if (((((int)uVar23 == 0x3f) ||
               (lVar12 = ((ulong)*(uint *)(lVar12 + (long)(int)(iVar5 + (iVar6 + -1) * uVar4) * 4) &
                         0xffffff) + uVar23, *(char *)(lVar18 + lVar12) != cVar7)) ||
              ((sVar20 = *(short *)((long)__src + lVar12 * 2), sVar20 < 1 ||
               (uVar11 = *(ushort *)((long)param_5 + lVar12 * 2) + 2, (uVar10 & 0xffff) <= uVar11)))
              ) && (uVar11 = uVar10, sVar20 = sVar21, sVar21 == 0)) goto LAB_00de78f4;
          piVar2[2] = -1;
          iVar14 = *(int *)(param_8 + 1);
          *(short *)((long)param_4 + uVar22 * 2) = sVar20;
          *(short *)((long)__dest + uVar22 * 2) = (short)uVar11;
          lVar16 = lVar16 + 3;
        } while (lVar16 < iVar14);
      }
LAB_00de7aa4:
    } while (((iVar15 * 3 != iVar14) && ((param_2 == 0 || (iVar24 = iVar24 + 1, iVar24 < param_1))))
            && (param_7 = param_5, param_6 = __src, __src = param_4, param_5 = __dest, 0 < iVar14));
  }
  return param_4;
}


