// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drft_init
// Entry Point: 00e19d70
// Size: 728 bytes
// Signature: undefined drft_init(void)


void drft_init(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  double local_90;
  double local_88;
  
  *param_1 = param_2;
  pvVar7 = calloc((long)(int)(param_2 * 3),4);
  *(void **)(param_1 + 2) = pvVar7;
  puVar8 = (uint *)calloc(0x20,4);
  *(uint **)(param_1 + 4) = puVar8;
  if (param_2 == 1) {
    return;
  }
  uVar14 = 0;
  uVar12 = 0;
  lVar16 = -1;
  uVar17 = param_2;
  do {
    while( true ) {
      lVar20 = lVar16 + 1;
      uVar18 = (uint)uVar12;
      if (lVar16 < 3) break;
      uVar14 = uVar14 + 2;
      if (uVar14 == 2) goto LAB_00e19e5c;
LAB_00e19e18:
      uVar13 = (ulong)(uVar18 - 1);
      uVar12 = (long)(int)uVar18;
      while( true ) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = (int)uVar17 / (int)uVar14;
        }
        lVar16 = lVar20;
        if (uVar17 != uVar18 * uVar14) break;
        uVar2 = uVar12 + 1;
        puVar8[uVar12 + 2] = uVar14;
        uVar1 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar1;
        uVar12 = uVar2;
        uVar17 = uVar18;
        if (uVar18 == 1) {
          *puVar8 = param_2;
          puVar8[1] = (uint)uVar2;
          uVar12 = uVar13;
          if (uVar1 == 0) {
            return;
          }
LAB_00e19f10:
          if ((int)uVar12 < 1) {
            return;
          }
          uVar13 = 0;
          iVar15 = 0;
          iVar22 = 1;
          do {
            uVar14 = puVar8[uVar13 + 2];
            iVar5 = uVar14 * iVar22;
            if (1 < (int)uVar14) {
              uVar17 = 0;
              if (iVar5 != 0) {
                uVar17 = (int)param_2 / iVar5;
              }
              iVar6 = uVar14 - 1;
              if ((int)uVar17 < 3) {
                iVar15 = iVar15 + uVar17 * iVar6;
              }
              else {
                iVar21 = 0;
                iVar19 = 0;
                lVar16 = (long)pvVar7 + (long)iVar15 * 4 + (long)(int)param_2 * 4;
                do {
                  iVar19 = iVar19 + iVar22;
                  fVar23 = 0.0;
                  lVar20 = 0;
                  do {
                    fVar23 = fVar23 + 1.0;
                    sincos((double)((6.283185 / (float)param_2) * (float)iVar19 * fVar23),&local_88,
                           &local_90);
                    pfVar3 = (float *)(lVar16 + lVar20 * 4);
                    lVar20 = lVar20 + 2;
                    *pfVar3 = (float)local_90;
                    pfVar3[1] = (float)local_88;
                  } while ((int)lVar20 + 2 < (int)uVar17);
                  iVar21 = iVar21 + 1;
                  lVar16 = lVar16 + (ulong)uVar17 * 4;
                } while (iVar21 != iVar6);
                iVar15 = uVar17 * iVar6 + iVar15;
              }
            }
            uVar13 = uVar13 + 1;
            iVar22 = iVar5;
          } while (uVar13 != (uVar12 & 0xffffffff));
          return;
        }
      }
    }
    uVar14 = (&DAT_004c5630)[lVar20];
    if (uVar14 != 2) goto LAB_00e19e18;
LAB_00e19e5c:
    puVar11 = puVar8 + (long)(int)uVar18 + 2;
    uVar13 = (long)(int)uVar18;
    while( true ) {
      uVar12 = uVar13;
      uVar18 = uVar18 + 1;
      uVar1 = uVar17;
      if ((int)uVar17 < 0) {
        uVar1 = uVar17 + 1;
      }
      lVar9 = (ulong)uVar18 - 1;
      lVar16 = lVar20;
      if (uVar17 != (uVar1 & 0xfffffffe)) break;
      puVar8[uVar12 + 2] = 2;
      if (uVar12 != 0) {
        puVar10 = puVar11;
        if (0 < (long)uVar12) {
          do {
            lVar9 = lVar9 + -1;
            *puVar10 = puVar10[-1];
            puVar10 = puVar10 + -1;
          } while (lVar9 != 0);
        }
        puVar8[2] = 2;
      }
      uVar4 = uVar17 & 0xfffffffe;
      puVar11 = puVar11 + 1;
      uVar13 = uVar12 + 1;
      uVar17 = (int)uVar1 >> 1;
      if (uVar4 == 2) {
        *puVar8 = param_2;
        puVar8[1] = (uint)(uVar12 + 1);
        if (uVar12 == 0) {
          return;
        }
        goto LAB_00e19f10;
      }
    }
  } while( true );
}


