// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_dsp_clear
// Entry Point: 00e04e4c
// Size: 736 bytes
// Signature: undefined vorbis_dsp_clear(void)


void vorbis_dsp_clear(undefined8 *param_1)

{
  undefined8 *puVar1;
  void **__ptr;
  void *pvVar2;
  int iVar3;
  void **__ptr_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      lVar5 = 0;
      __ptr_00 = (void **)param_1[0x11];
    }
    else {
      lVar5 = *(long *)(lVar4 + 0x30);
      __ptr_00 = (void **)param_1[0x11];
    }
    if (__ptr_00 != (void **)0x0) {
      if (*__ptr_00 != (void *)0x0) {
        _ve_envelope_clear();
        free(*__ptr_00);
      }
      if ((undefined8 *)__ptr_00[2] != (undefined8 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        mdct_clear(*__ptr_00[2]);
                    /* WARNING: Load size is inaccurate */
        free(*__ptr_00[2]);
        free(__ptr_00[2]);
      }
      if ((undefined8 *)__ptr_00[3] != (undefined8 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        mdct_clear(*__ptr_00[3]);
                    /* WARNING: Load size is inaccurate */
        free(*__ptr_00[3]);
        free(__ptr_00[3]);
      }
      puVar1 = (undefined8 *)__ptr_00[0xb];
      if (puVar1 != (undefined8 *)0x0) {
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
          (**(code **)(*(long *)(_floor_P + (long)*(int *)(lVar5 + 0x528) * 8) + 0x20))(*puVar1);
          if (1 < *(int *)(lVar5 + 0x18)) {
            lVar6 = 0;
            do {
              (**(code **)(*(long *)(_floor_P + (long)*(int *)(lVar5 + 0x52c + lVar6 * 4) * 8) +
                          0x20))(*(undefined8 *)((long)__ptr_00[0xb] + lVar6 * 8 + 8));
              lVar7 = lVar6 + 2;
              lVar6 = lVar6 + 1;
            } while (lVar7 < *(int *)(lVar5 + 0x18));
          }
          puVar1 = (undefined8 *)__ptr_00[0xb];
        }
        free(puVar1);
      }
      puVar1 = (undefined8 *)__ptr_00[0xc];
      if (puVar1 != (undefined8 *)0x0) {
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x1c))) {
          (**(code **)(*(long *)(_residue_P + (long)*(int *)(lVar5 + 0x828) * 8) + 0x20))(*puVar1);
          if (1 < *(int *)(lVar5 + 0x1c)) {
            lVar6 = 0;
            do {
              (**(code **)(*(long *)(_residue_P + (long)*(int *)(lVar5 + 0x82c + lVar6 * 4) * 8) +
                          0x20))(*(undefined8 *)((long)__ptr_00[0xc] + lVar6 * 8 + 8));
              lVar7 = lVar6 + 2;
              lVar6 = lVar6 + 1;
            } while (lVar7 < *(int *)(lVar5 + 0x1c));
          }
          puVar1 = (undefined8 *)__ptr_00[0xc];
        }
        free(puVar1);
      }
      pvVar2 = __ptr_00[0xd];
      if (pvVar2 != (void *)0x0) {
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x24))) {
          _vp_psy_clear();
          if (1 < *(int *)(lVar5 + 0x24)) {
            lVar6 = 1;
            lVar7 = 0x60;
            do {
              _vp_psy_clear((long)__ptr_00[0xd] + lVar7);
              lVar6 = lVar6 + 1;
              lVar7 = lVar7 + 0x60;
            } while (lVar6 < *(int *)(lVar5 + 0x24));
          }
          pvVar2 = __ptr_00[0xd];
        }
        free(pvVar2);
      }
      if (__ptr_00[0xe] != (void *)0x0) {
        _vp_global_free();
      }
      vorbis_bitrate_clear(__ptr_00 + 0x12);
      drft_clear(__ptr_00 + 4);
      drft_clear(__ptr_00 + 7);
    }
    __ptr = (void **)param_1[2];
    if (__ptr != (void **)0x0) {
      if ((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 4), 0 < iVar3)) {
        lVar5 = 0;
        pvVar2 = *__ptr;
        while( true ) {
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            iVar3 = *(int *)(lVar4 + 4);
          }
          lVar5 = lVar5 + 1;
          if (iVar3 <= lVar5) break;
          pvVar2 = *(void **)(param_1[2] + lVar5 * 8);
        }
        __ptr = (void **)param_1[2];
      }
      free(__ptr);
      if ((void *)param_1[3] != (void *)0x0) {
        free((void *)param_1[3]);
      }
    }
    if (__ptr_00 != (void **)0x0) {
      if (__ptr_00[0xf] != (void *)0x0) {
        free(__ptr_00[0xf]);
      }
      if (__ptr_00[0x10] != (void *)0x0) {
        free(__ptr_00[0x10]);
      }
      if (__ptr_00[0x11] != (void *)0x0) {
        free(__ptr_00[0x11]);
      }
      free(__ptr_00);
    }
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
  }
  return;
}


