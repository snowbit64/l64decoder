// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_init_encode
// Entry Point: 00e18fa0
// Size: 376 bytes
// Signature: undefined vorbis_book_init_encode(void)


undefined8 vorbis_book_init_encode(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar5 = param_2[1];
  lVar6 = *param_2;
  param_1[2] = lVar5;
  param_1[3] = (long)param_2;
  *param_1 = lVar6;
  param_1[1] = lVar5;
  lVar5 = _make_words(param_2[2],lVar5,0);
  lVar6 = param_2[1];
  param_1[5] = lVar5;
  if (lVar6 < 1) {
    lVar5 = 0;
  }
  else {
    lVar12 = *param_2;
    dVar13 = pow((double)lVar6,(double)(1.0 / (float)lVar12));
    if (lVar12 < 1) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar2 = (long)dVar13;
    if ((long)dVar13 < 2) {
      lVar2 = 1;
    }
    while( true ) {
      lVar5 = lVar2;
      lVar3 = 0;
      if (lVar5 != 0) {
        lVar3 = lVar6 / lVar5;
      }
      lVar2 = lVar5 + 1;
      lVar9 = 1;
      lVar8 = 1;
      lVar10 = lVar12;
      do {
        if (lVar3 < lVar8) goto LAB_00e19038;
        lVar4 = 0;
        if (lVar2 != 0) {
          lVar4 = 0x7fffffffffffffff / lVar2;
        }
        lVar11 = lVar9 * lVar2;
        lVar8 = lVar8 * lVar5;
        bVar1 = lVar9 <= lVar4;
        lVar9 = 0x7fffffffffffffff;
        if (bVar1) {
          lVar9 = lVar11;
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if ((lVar8 - lVar6 == 0 || lVar8 < lVar6) && (lVar6 < lVar9)) break;
      if (lVar8 - lVar6 != 0 && lVar6 <= lVar8) {
LAB_00e19038:
        lVar2 = lVar5 + -1;
      }
    }
  }
  uVar7 = param_2[4];
  *(int *)(param_1 + 10) = (int)lVar5;
  dVar13 = (double)(uVar7 & 0x1fffff);
  if ((uVar7 & 0x80000000) != 0) {
    dVar13 = -(double)(uVar7 & 0x1fffff);
  }
  dVar14 = ldexp(dVar13,((uint)uVar7 >> 0x15 & 0x3ff) - 0x314);
  uVar7 = param_2[5];
  dVar13 = (double)(uVar7 & 0x1fffff);
  if ((uVar7 & 0x80000000) != 0) {
    dVar13 = -(double)(uVar7 & 0x1fffff);
  }
  dVar13 = ldexp(dVar13,((uint)uVar7 >> 0x15 & 0x3ff) - 0x314);
  *(ulong *)((long)param_1 + 0x54) = CONCAT44((int)(float)(int)dVar13,(int)(float)(int)dVar14);
  return 0;
}


