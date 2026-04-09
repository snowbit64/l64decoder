// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_analysis_headerout
// Entry Point: 00e094bc
// Size: 1636 bytes
// Signature: undefined vorbis_analysis_headerout(void)


undefined4
vorbis_analysis_headerout
          (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined auStack_90 [16];
  void *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar13 = *(long *)(param_1 + 0x88);
  lVar7 = *(long *)(param_1 + 8);
  if (lVar13 == 0) {
LAB_00e09514:
    uVar8 = 0xffffff7f;
  }
  else {
    if (*(int *)(lVar7 + 4) - 0x101U < 0xffffff00) {
      lVar13 = 0;
      goto LAB_00e09514;
    }
    oggpack_writeinit(auStack_90);
    plVar10 = *(long **)(lVar7 + 0x30);
    if (((plVar10 != (long *)0x0) && (0x3f < *plVar10)) && (*plVar10 <= plVar10[1])) {
      oggpack_write(auStack_90,1,8);
      oggpack_write(auStack_90,0x76,8);
      oggpack_write(auStack_90,0x6f,8);
      oggpack_write(auStack_90,0x72,8);
      oggpack_write(auStack_90,0x62,8);
      oggpack_write(auStack_90,0x69,8);
      oggpack_write(auStack_90,0x73,8);
      oggpack_write(auStack_90,0,0x20);
      oggpack_write(auStack_90,(long)*(int *)(lVar7 + 4),8);
      oggpack_write(auStack_90,*(undefined8 *)(lVar7 + 8),0x20);
      oggpack_write(auStack_90,*(undefined8 *)(lVar7 + 0x10),0x20);
      oggpack_write(auStack_90,*(undefined8 *)(lVar7 + 0x18),0x20);
      oggpack_write(auStack_90,*(undefined8 *)(lVar7 + 0x20),0x20);
      iVar2 = ov_ilog(*(int *)plVar10 + -1);
      oggpack_write(auStack_90,(long)iVar2,4);
      iVar2 = ov_ilog(*(int *)(plVar10 + 1) + -1);
      oggpack_write(auStack_90,(long)iVar2,4);
      oggpack_write(auStack_90,1,1);
      if (*(void **)(lVar13 + 0x78) != (void *)0x0) {
        free(*(void **)(lVar13 + 0x78));
      }
      sVar3 = oggpack_bytes(auStack_90);
      pvVar4 = malloc(sVar3);
      pvVar6 = local_80;
      *(void **)(lVar13 + 0x78) = pvVar4;
      sVar3 = oggpack_bytes(auStack_90);
      memcpy(pvVar4,pvVar6,sVar3);
      *param_3 = *(undefined8 *)(lVar13 + 0x78);
      uVar5 = oggpack_bytes(auStack_90);
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[3] = 0;
      param_3[1] = uVar5;
      param_3[2] = 1;
      oggpack_reset(auStack_90);
      FUN_00e09340(auStack_90,param_2);
      if (*(void **)(lVar13 + 0x80) != (void *)0x0) {
        free(*(void **)(lVar13 + 0x80));
      }
      sVar3 = oggpack_bytes(auStack_90);
      pvVar4 = malloc(sVar3);
      pvVar6 = local_80;
      *(void **)(lVar13 + 0x80) = pvVar4;
      sVar3 = oggpack_bytes(auStack_90);
      memcpy(pvVar4,pvVar6,sVar3);
      *param_4 = *(undefined8 *)(lVar13 + 0x80);
      uVar5 = oggpack_bytes(auStack_90);
      param_4[1] = uVar5;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 1;
      oggpack_reset(auStack_90);
      lVar9 = *(long *)(lVar7 + 0x30);
      if (lVar9 != 0) {
        oggpack_write(auStack_90,5,8);
        oggpack_write(auStack_90,0x76,8);
        oggpack_write(auStack_90,0x6f,8);
        oggpack_write(auStack_90,0x72,8);
        oggpack_write(auStack_90,0x62,8);
        oggpack_write(auStack_90,0x69,8);
        oggpack_write(auStack_90,0x73,8);
        oggpack_write(auStack_90,(long)*(int *)(lVar9 + 0x20) + -1,8);
        if (0 < *(int *)(lVar9 + 0x20)) {
          lVar11 = 0;
          do {
            iVar2 = vorbis_staticbook_pack(*(undefined8 *)(lVar9 + 0xb28 + lVar11 * 8),auStack_90);
            if (iVar2 != 0) goto LAB_00e09a84;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(lVar9 + 0x20));
        }
        oggpack_write(auStack_90,0,6);
        oggpack_write(auStack_90,0,0x10);
        oggpack_write(auStack_90,(long)*(int *)(lVar9 + 0x18) + -1,6);
        if (0 < *(int *)(lVar9 + 0x18)) {
          lVar12 = 0;
          lVar11 = lVar9 + 0x528;
          do {
            oggpack_write(auStack_90,(long)*(int *)(lVar11 + lVar12 * 4),0x10);
            if (**(code ***)(_floor_P + (long)*(int *)(lVar11 + lVar12 * 4) * 8) == (code *)0x0)
            goto LAB_00e09a84;
            (***(code ***)(_floor_P + (long)*(int *)(lVar11 + lVar12 * 4) * 8))
                      (*(undefined8 *)(lVar11 + lVar12 * 8 + 0x100),auStack_90);
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar9 + 0x18));
        }
        oggpack_write(auStack_90,(long)*(int *)(lVar9 + 0x1c) + -1,6);
        if (0 < *(int *)(lVar9 + 0x1c)) {
          lVar12 = 0;
          lVar11 = lVar9 + 0x828;
          do {
            oggpack_write(auStack_90,(long)*(int *)(lVar11 + lVar12 * 4),0x10);
            (***(code ***)(_residue_P + (long)*(int *)(lVar11 + lVar12 * 4) * 8))
                      (*(undefined8 *)(lVar11 + lVar12 * 8 + 0x100),auStack_90);
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar9 + 0x1c));
        }
        oggpack_write(auStack_90,(long)*(int *)(lVar9 + 0x14) + -1,6);
        if (0 < *(int *)(lVar9 + 0x14)) {
          lVar12 = 0;
          lVar11 = lVar9 + 0x228;
          do {
            oggpack_write(auStack_90,(long)*(int *)(lVar11 + lVar12 * 4),0x10);
            (**(code **)(&_mapping_P)[*(int *)(lVar11 + lVar12 * 4)])
                      (lVar7,*(undefined8 *)(lVar11 + lVar12 * 8 + 0x100),auStack_90);
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar9 + 0x14));
        }
        oggpack_write(auStack_90,(long)*(int *)(lVar9 + 0x10) + -1,6);
        if (0 < *(int *)(lVar9 + 0x10)) {
          lVar11 = 0;
          lVar7 = lVar9 + 0x28;
          do {
            lVar12 = lVar11 * 8;
            oggpack_write(auStack_90,(long)**(int **)(lVar7 + lVar12),1);
            oggpack_write(auStack_90,(long)*(int *)(*(long *)(lVar7 + lVar12) + 4),0x10);
            oggpack_write(auStack_90,(long)*(int *)(*(long *)(lVar7 + lVar12) + 8),0x10);
            oggpack_write(auStack_90,(long)*(int *)(*(long *)(lVar7 + lVar12) + 0xc),8);
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(lVar9 + 0x10));
        }
        oggpack_write(auStack_90,1,1);
        if (*(void **)(lVar13 + 0x88) != (void *)0x0) {
          free(*(void **)(lVar13 + 0x88));
        }
        sVar3 = oggpack_bytes(auStack_90);
        pvVar6 = malloc(sVar3);
        *(void **)(lVar13 + 0x88) = pvVar6;
        sVar3 = oggpack_bytes(auStack_90);
        memcpy(pvVar6,local_80,sVar3);
        *param_5 = *(undefined8 *)(lVar13 + 0x88);
        uVar5 = oggpack_bytes(auStack_90);
        param_5[1] = uVar5;
        param_5[2] = 0;
        param_5[3] = 0;
        param_5[4] = 0;
        param_5[5] = 2;
        oggpack_writeclear(auStack_90);
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return 0;
        }
        goto LAB_00e09a80;
      }
    }
LAB_00e09a84:
    uVar8 = 0xffffff7e;
  }
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  param_5[4] = 0;
  param_5[1] = 0;
  *param_5 = 0;
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar7 + 4)) {
      oggpack_writeclear(auStack_90);
    }
    pvVar6 = *(void **)(lVar13 + 0x78);
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    if (*(void **)(lVar13 + 0x80) != (void *)0x0) {
      free(*(void **)(lVar13 + 0x80));
    }
    if (*(void **)(lVar13 + 0x88) != (void *)0x0) {
      free(*(void **)(lVar13 + 0x88));
    }
    *(void **)(lVar13 + 0x78) = (void *)0x0;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *(undefined8 *)(lVar13 + 0x88) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar8;
  }
LAB_00e09a80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


