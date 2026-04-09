// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e21e64
// Entry Point: 00e21e64
// Size: 1224 bytes
// Signature: undefined FUN_00e21e64(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


void FUN_00e21e64(long *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                 undefined8 param_6,long *param_7,int param_8,long param_9)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  size_t __size;
  long lVar14;
  long lVar15;
  int local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  void *local_b0;
  undefined auStack_a8 [32];
  undefined8 local_88;
  int local_7c;
  ulong local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x44);
  local_88 = 0xffffffffffffffff;
  local_78 = param_5;
  if (param_7 != (long *)0x0 && param_8 != 0) {
    lVar8 = 0;
    iVar2 = (int)param_6;
    do {
      lVar6 = param_4;
      if (param_7[lVar8] == (long)iVar2) goto joined_r0x00e221ac;
      lVar8 = lVar8 + 1;
    } while (param_8 != (int)lVar8);
  }
  local_b0 = (void *)0x0;
  local_b4 = 0;
  lVar8 = param_4;
  lVar6 = param_4;
  lVar5 = param_4;
  if (param_3 < param_4) {
LAB_00e21f38:
    do {
      lVar15 = param_3;
      if (0xffff < lVar5 - param_3) {
        lVar15 = lVar5 + param_3;
        if (lVar15 < 0) {
          lVar15 = lVar15 + 1;
        }
        lVar15 = lVar15 >> 1;
      }
      if (*param_1 == 0) goto LAB_00e22188;
      if (param_1[2] != lVar15) {
        if (((code *)param_1[0x73] != (code *)0x0) &&
           (iVar2 = (*(code *)param_1[0x73])(*param_1,lVar15,0), iVar2 != -1)) {
          param_1[2] = lVar15;
          ogg_sync_reset(param_1 + 4);
          goto LAB_00e21f94;
        }
LAB_00e222c4:
        uVar4 = 0xffffff80;
        if (*(long *)(lVar1 + 0x28) == local_70) {
          return;
        }
        goto LAB_00e22328;
      }
LAB_00e21f94:
      lVar8 = FUN_00e1ee34(param_1,auStack_a8,0xffffffffffffffff);
      if (lVar8 == -0x80) goto LAB_00e222c4;
      if ((-1 < lVar8) &&
         (iVar2 = ogg_page_serialno(auStack_a8), param_7 != (long *)0x0 && param_8 != 0)) {
        plVar13 = param_7;
        iVar11 = param_8;
        do {
          if (*plVar13 == (long)iVar2) {
            param_3 = param_1[2];
            lVar8 = lVar6;
            if (lVar5 <= param_3) goto LAB_00e22010;
            goto LAB_00e21f38;
          }
          iVar11 = iVar11 + -1;
          plVar13 = plVar13 + 1;
        } while (iVar11 != 0);
      }
      if (lVar8 < 0) {
        lVar8 = lVar6;
      }
      lVar6 = lVar8;
      lVar5 = lVar15;
    } while (param_3 < lVar15);
  }
LAB_00e22010:
  do {
    local_114 = iVar3;
    lVar8 = FUN_00e21ba4(param_1,lVar8,param_7,param_8,&local_114,&local_88);
  } while (local_114 != iVar3);
  if (*param_1 == 0) {
LAB_00e22188:
    uVar4 = 0xffffff7f;
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
    goto LAB_00e22328;
  }
  if (param_1[2] == lVar6) {
LAB_00e2207c:
    uVar4 = FUN_00e21660(param_1,&local_f0,&local_110,&local_b0,&local_b4,0);
    if ((int)uVar4 == 0) {
      lVar14 = param_1[0x44];
      lVar15 = param_1[2];
      lVar5 = FUN_00e21a78(param_1,&local_f0);
      lVar8 = param_9 + 1;
      uVar4 = FUN_00e21e64(param_1,lVar6,param_1[2],param_4,param_5,param_6,local_b0,local_b4,lVar8)
      ;
      if ((int)uVar4 == 0) {
        if (local_b0 != (void *)0x0) {
          free(local_b0);
        }
        lVar9 = lVar8 * 8;
        uVar4 = 0;
        *(long *)(param_1[9] + lVar9) = lVar6;
        *(long *)(param_1[0xb] + lVar9) = (long)(int)lVar14;
        *(long *)(param_1[10] + lVar9) = lVar15;
        puVar10 = (undefined8 *)(param_1[0xd] + lVar8 * 0x38);
        puVar10[3] = uStack_d8;
        puVar10[2] = local_e0;
        puVar10[5] = uStack_c8;
        puVar10[4] = uStack_d0;
        puVar10[6] = local_c0;
        puVar10[1] = uStack_e8;
        *puVar10 = local_f0;
        puVar10 = (undefined8 *)(param_1[0xe] + lVar8 * 0x20);
        puVar10[1] = uStack_108;
        *puVar10 = local_110;
        puVar10[3] = uStack_f8;
        puVar10[2] = uStack_100;
        lVar8 = param_1[0xc] + param_9 * 0x10;
        *(undefined8 *)(lVar8 + 8) = local_88;
        *(long *)(lVar8 + 0x10) = lVar5;
        uVar12 = *(long *)(lVar8 + 0x18) - lVar5;
        *(ulong *)(lVar8 + 0x18) = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
        if (*(long *)(lVar1 + 0x28) == local_70) {
          return;
        }
        goto LAB_00e22328;
      }
    }
  }
  else {
    if ((code *)param_1[0x73] != (code *)0x0) {
      iVar3 = (*(code *)param_1[0x73])(*param_1,lVar6,0);
      if (iVar3 == -1) {
        uVar4 = 0xffffff80;
        if (*(long *)(lVar1 + 0x28) == local_70) {
          return;
        }
        goto LAB_00e22328;
      }
      param_1[2] = lVar6;
      ogg_sync_reset(param_1 + 4);
      goto LAB_00e2207c;
    }
    uVar4 = 0xffffff80;
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_00e22328:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
joined_r0x00e221ac:
  while (iVar3 != iVar2) {
    local_7c = iVar3;
    lVar6 = FUN_00e21ba4(param_1,lVar6,param_7,param_8,&local_7c,&local_78);
    iVar2 = local_7c;
  }
  *(int *)(param_1 + 8) = (int)(param_9 + 1);
  if ((void *)param_1[9] != (void *)0x0) {
    free((void *)param_1[9]);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    free((void *)param_1[0xb]);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    free((void *)param_1[10]);
  }
  iVar3 = *(int *)(param_1 + 8);
  pvVar7 = malloc((long)iVar3 * 8 + 8);
  param_1[9] = (long)pvVar7;
  pvVar7 = realloc((void *)param_1[0xd],(long)iVar3 * 0x38);
  param_1[0xd] = (long)pvVar7;
  pvVar7 = realloc((void *)param_1[0xe],(long)*(int *)(param_1 + 8) << 5);
  iVar3 = *(int *)(param_1 + 8);
  param_1[0xe] = (long)pvVar7;
  __size = (long)iVar3 << 3;
  pvVar7 = malloc(__size);
  param_1[0xb] = (long)pvVar7;
  pvVar7 = malloc(__size);
  param_1[10] = (long)pvVar7;
  pvVar7 = malloc((long)iVar3 << 4);
  lVar8 = param_1[9];
  uVar4 = 0;
  param_1[0xc] = (long)pvVar7;
  *(long *)(lVar8 + (param_9 + 1) * 8) = param_4;
  *(undefined8 *)(lVar8 + param_9 * 8) = param_2;
  *(ulong *)((long)pvVar7 + param_9 * 0x10 + 8) =
       local_78 & ((long)local_78 >> 0x3f ^ 0xffffffffffffffffU);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
  goto LAB_00e22328;
}


