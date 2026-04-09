// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e049c0
// Entry Point: 00e049c0
// Size: 1164 bytes
// Signature: undefined FUN_00e049c0(void)


undefined8 FUN_00e049c0(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  void **ppvVar6;
  void **ppvVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  
  plVar15 = *(long **)(param_2 + 0x30);
  if ((((plVar15 == (long *)0x0) || (*(int *)(plVar15 + 2) < 1)) || (*plVar15 < 0x40)) ||
     (plVar15[1] < *plVar15)) {
    uVar4 = 1;
  }
  else {
    uVar1 = *(uint *)(plVar15 + 0x2d2);
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    pvVar5 = calloc(1,0xe8);
    iVar3 = *(int *)(plVar15 + 2);
    param_1[1] = param_2;
    param_1[0x11] = pvVar5;
    uVar2 = ov_ilog(iVar3 + -1);
    *(undefined4 *)((long)pvVar5 + 0x50) = uVar2;
    ppvVar6 = (void **)calloc(1,8);
    *(void ***)((long)pvVar5 + 0x10) = ppvVar6;
    ppvVar7 = (void **)calloc(1,8);
    *(void ***)((long)pvVar5 + 0x18) = ppvVar7;
    pvVar8 = calloc(1,0x20);
    *ppvVar6 = pvVar8;
    pvVar9 = calloc(1,0x20);
    lVar10 = *plVar15;
    *ppvVar7 = pvVar9;
    mdct_init(pvVar8,lVar10 >> ((ulong)uVar1 & 0x3f));
    mdct_init(**(undefined8 **)((long)pvVar5 + 0x18),plVar15[1] >> ((ulong)uVar1 & 0x3f));
    iVar3 = ov_ilog(*(undefined4 *)plVar15);
    uVar2 = *(undefined4 *)(plVar15 + 1);
    *(int *)((long)pvVar5 + 8) = iVar3 + -7;
    iVar3 = ov_ilog(uVar2);
    *(int *)((long)pvVar5 + 0xc) = iVar3 + -7;
    if (param_3 == 0) {
      if (plVar15[0x265] == 0) {
        iVar3 = *(int *)(plVar15 + 4);
        pvVar8 = calloc((long)iVar3,0x60);
        plVar15[0x265] = (long)pvVar8;
        if (0 < iVar3) {
          if (plVar15[0x165] != 0) {
            lVar10 = 0;
            lVar14 = 0;
            do {
              iVar3 = vorbis_book_init_decode(plVar15[0x265] + lVar10);
              if (iVar3 != 0) {
                iVar3 = *(int *)(plVar15 + 4);
                break;
              }
              vorbis_staticbook_destroy(plVar15[lVar14 + 0x165]);
              iVar3 = *(int *)(plVar15 + 4);
              plVar15[lVar14 + 0x165] = 0;
              if ((long)iVar3 <= lVar14 + 1) goto LAB_00e04bb4;
              lVar10 = lVar10 + 0x60;
              lVar12 = lVar14 + 0x166;
              lVar14 = lVar14 + 1;
            } while (plVar15[lVar12] != 0);
          }
          if (0 < iVar3) {
            lVar10 = 0;
            do {
              if (plVar15[lVar10 + 0x165] != 0) {
                vorbis_staticbook_destroy();
                iVar3 = *(int *)(plVar15 + 4);
                plVar15[lVar10 + 0x165] = 0;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < iVar3);
          }
          vorbis_dsp_clear(param_1);
          return 0xffffffff;
        }
      }
    }
    else {
      drft_init((long)pvVar5 + 0x20,*(undefined4 *)plVar15);
      drft_init((long)pvVar5 + 0x38,*(undefined4 *)(plVar15 + 1));
      if (plVar15[0x265] == 0) {
        iVar3 = *(int *)(plVar15 + 4);
        pvVar8 = calloc((long)iVar3,0x60);
        plVar15[0x265] = (long)pvVar8;
        if ((0 < iVar3) &&
           (vorbis_book_init_encode(pvVar8,plVar15[0x165]), 1 < *(int *)(plVar15 + 4))) {
          lVar10 = 0x60;
          lVar14 = 0x166;
          do {
            vorbis_book_init_encode(plVar15[0x265] + lVar10,plVar15[lVar14]);
            lVar12 = lVar14 + -0x164;
            lVar10 = lVar10 + 0x60;
            lVar14 = lVar14 + 1;
          } while (lVar12 < *(int *)(plVar15 + 4));
        }
      }
      iVar3 = *(int *)((long)plVar15 + 0x24);
      pvVar8 = calloc((long)iVar3,0x60);
      *(void **)((long)pvVar5 + 0x68) = pvVar8;
      if (0 < iVar3) {
        lVar10 = 0;
        lVar14 = 0x266;
        while( true ) {
          uVar11 = plVar15[*(int *)plVar15[lVar14]];
          if ((long)uVar11 < 0) {
            uVar11 = uVar11 + 1;
          }
          _vp_psy_init((long)pvVar8 + lVar10,(int *)plVar15[lVar14],plVar15 + 0x26a,uVar11 >> 1,
                       *(undefined8 *)(param_2 + 8));
          if ((long)*(int *)((long)plVar15 + 0x24) <= lVar14 + -0x265) break;
          pvVar8 = *(void **)((long)pvVar5 + 0x68);
          lVar10 = lVar10 + 0x60;
          lVar14 = lVar14 + 1;
        }
      }
      *(undefined4 *)param_1 = 1;
    }
LAB_00e04bb4:
    uVar1 = *(uint *)(param_2 + 4);
    iVar3 = (int)plVar15[1];
    *(int *)(param_1 + 4) = iVar3;
    ppvVar6 = (void **)malloc((long)(int)uVar1 << 3);
    param_1[2] = ppvVar6;
    pvVar8 = malloc((long)(int)uVar1 << 3);
    param_1[3] = pvVar8;
    if (0 < (int)uVar1) {
      pvVar8 = calloc((long)iVar3,4);
      *ppvVar6 = pvVar8;
      if (uVar1 != 1) {
        uVar11 = 1;
        do {
          lVar10 = param_1[2];
          pvVar8 = calloc((long)iVar3,4);
          *(void **)(lVar10 + uVar11 * 8) = pvVar8;
          uVar11 = uVar11 + 1;
        } while (uVar1 != uVar11);
      }
    }
    param_1[7] = 0;
    param_1[8] = 0;
    lVar10 = plVar15[1];
    iVar3 = *(int *)(plVar15 + 3);
    if (lVar10 < 0) {
      lVar10 = lVar10 + 1;
    }
    param_1[10] = lVar10 >> 1;
    *(int *)((long)param_1 + 0x24) = (int)(lVar10 >> 1);
    pvVar8 = calloc((long)iVar3,8);
    iVar13 = *(int *)((long)plVar15 + 0x1c);
    *(void **)((long)pvVar5 + 0x58) = pvVar8;
    pvVar8 = calloc((long)iVar13,8);
    *(void **)((long)pvVar5 + 0x60) = pvVar8;
    if (0 < iVar3) {
      lVar10 = 0;
      do {
        lVar14 = lVar10 * 8;
        uVar4 = (**(code **)(*(long *)(_floor_P +
                                      (long)*(int *)((long)plVar15 + lVar10 * 4 + 0x528) * 8) + 0x10
                            ))(param_1,plVar15[lVar10 + 0xc5]);
        iVar3 = *(int *)(plVar15 + 3);
        lVar10 = lVar10 + 1;
        *(undefined8 *)(*(long *)((long)pvVar5 + 0x58) + lVar14) = uVar4;
      } while (lVar10 < iVar3);
      iVar13 = *(int *)((long)plVar15 + 0x1c);
    }
    if (0 < iVar13) {
      lVar10 = 0;
      do {
        lVar14 = lVar10 * 8;
        uVar4 = (**(code **)(*(long *)(_residue_P +
                                      (long)*(int *)((long)plVar15 + lVar10 * 4 + 0x828) * 8) + 0x10
                            ))(param_1,plVar15[lVar10 + 0x125]);
        iVar3 = *(int *)((long)plVar15 + 0x1c);
        lVar10 = lVar10 + 1;
        *(undefined8 *)(*(long *)((long)pvVar5 + 0x60) + lVar14) = uVar4;
      } while (lVar10 < iVar3);
    }
    uVar4 = 0;
  }
  return uVar4;
}


