// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _book_maptype1_quantvals
// Entry Point: 00e18a74
// Size: 196 bytes
// Signature: undefined _book_maptype1_quantvals(void)


long _book_maptype1_quantvals(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  
  lVar10 = param_1[1];
  if (lVar10 < 1) {
    lVar5 = 0;
  }
  else {
    lVar11 = *param_1;
    dVar12 = pow((double)lVar10,(double)(1.0 / (float)lVar11));
    if (lVar11 < 1) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar2 = (long)dVar12;
    if ((long)dVar12 < 2) {
      lVar2 = 1;
    }
    while( true ) {
      lVar5 = lVar2;
      lVar3 = 0;
      if (lVar5 != 0) {
        lVar3 = lVar10 / lVar5;
      }
      lVar2 = lVar5 + 1;
      lVar7 = 1;
      lVar6 = 1;
      lVar8 = lVar11;
      do {
        if (lVar3 < lVar6) goto LAB_00e18acc;
        lVar4 = 0;
        if (lVar2 != 0) {
          lVar4 = 0x7fffffffffffffff / lVar2;
        }
        lVar9 = lVar7 * lVar2;
        lVar6 = lVar6 * lVar5;
        bVar1 = lVar7 <= lVar4;
        lVar7 = 0x7fffffffffffffff;
        if (bVar1) {
          lVar7 = lVar9;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      if ((lVar6 - lVar10 == 0 || lVar6 < lVar10) && (lVar10 < lVar7)) break;
      if (lVar6 - lVar10 != 0 && lVar10 <= lVar6) {
LAB_00e18acc:
        lVar2 = lVar5 + -1;
      }
    }
  }
  return lVar5;
}


