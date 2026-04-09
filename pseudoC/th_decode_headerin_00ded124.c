// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_decode_headerin
// Entry Point: 00ded124
// Size: 1568 bytes
// Signature: undefined th_decode_headerin(void)


int th_decode_headerin(byte *param_1,void **param_2,void **param_3,undefined8 *param_4)

{
  long lVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined auStack_70 [32];
  undefined4 local_50;
  undefined2 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 == (undefined8 *)0x0) goto LAB_00ded324;
  if (param_1 == (byte *)0x0) goto LAB_00ded32c;
  oc_pack_readinit(auStack_70,*param_4,param_4[1]);
  uVar4 = oc_pack_read(auStack_70,8);
  if (((((uVar4 >> 7 & 1) == 0) && (*(int *)(param_1 + 4) != 0)) && (param_2[3] != (void *)0x0)) &&
     (*param_3 != (void *)0x0)) {
    iVar5 = 0;
    goto LAB_00ded330;
  }
  uVar2 = oc_pack_read(auStack_70,8);
  local_50 = CONCAT31(local_50._1_3_,uVar2);
  uVar2 = oc_pack_read(auStack_70,8);
  local_50._0_2_ = CONCAT11(uVar2,(undefined)local_50);
  uVar2 = oc_pack_read(auStack_70,8);
  local_50._0_3_ = CONCAT12(uVar2,(undefined2)local_50);
  uVar2 = oc_pack_read(auStack_70,8);
  local_50 = CONCAT13(uVar2,(undefined3)local_50);
  uVar2 = oc_pack_read(auStack_70,8);
  local_4c = CONCAT11(local_4c._1_1_,uVar2);
  uVar2 = oc_pack_read(auStack_70,8);
  local_4c = CONCAT11(uVar2,(undefined)local_4c);
  if ((local_50 ^ 0x6f656874 | local_4c ^ 0x6172) != 0) {
    iVar5 = -0x15;
    goto LAB_00ded330;
  }
  if (uVar4 == 0x82) {
    iVar5 = -1;
    if ((param_2 == (void **)0x0) || (param_3 == (void **)0x0)) goto LAB_00ded330;
    if ((*(int *)(param_1 + 4) != 0) && ((param_2[3] != (void *)0x0 && (*param_3 == (void *)0x0))))
    {
      pvVar12 = calloc(1,0x450);
      if (pvVar12 != (void *)0x0) {
        iVar5 = oc_quant_params_unpack(auStack_70,(long)pvVar12 + 0x280);
        if ((iVar5 < 0) || (iVar5 = oc_huff_trees_unpack(auStack_70,pvVar12), iVar5 < 0)) {
          oc_quant_params_clear((long)pvVar12 + 0x280);
          oc_huff_trees_clear(pvVar12);
          free(pvVar12);
        }
        else {
          iVar5 = 1;
          *param_3 = pvVar12;
        }
        goto LAB_00ded330;
      }
      goto LAB_00ded32c;
    }
  }
  else {
    if (uVar4 == 0x81) {
      if (param_2 == (void **)0x0) {
LAB_00ded32c:
        iVar5 = -1;
        goto LAB_00ded330;
      }
      if ((*(int *)(param_1 + 4) == 0) || (param_2[3] != (void *)0x0)) goto LAB_00ded324;
      uVar8 = oc_pack_read(auStack_70,8);
      lVar14 = oc_pack_read(auStack_70,8);
      lVar9 = oc_pack_read(auStack_70,8);
      lVar10 = oc_pack_read(auStack_70,8);
      uVar8 = uVar8 | lVar14 << 8 | lVar9 << 0x10 | lVar10 << 0x18;
      if (((long)uVar8 < 0) || (lVar14 = oc_pack_bytes_left(auStack_70), lVar14 < (long)uVar8)) {
LAB_00ded3b8:
        iVar5 = -0x14;
      }
      else {
        puVar11 = (undefined *)malloc(uVar8 + 1);
        param_2[3] = puVar11;
        if (puVar11 == (undefined *)0x0) {
          iVar5 = -1;
        }
        else {
          uVar15 = uVar8;
          if (uVar8 != 0) {
            do {
              uVar15 = uVar15 - 1;
              uVar2 = oc_pack_read(auStack_70,8);
              *puVar11 = uVar2;
              puVar11 = puVar11 + 1;
            } while (uVar15 != 0);
            puVar11 = (undefined *)param_2[3];
          }
          puVar11[uVar8] = 0;
          uVar8 = oc_pack_read(auStack_70,8);
          lVar14 = oc_pack_read(auStack_70,8);
          lVar9 = oc_pack_read(auStack_70,8);
          lVar10 = oc_pack_read(auStack_70,8);
          uVar8 = uVar8 | lVar14 << 8 | lVar9 << 0x10 | lVar10 << 0x18;
          uVar15 = uVar8 << 0x20;
          *(int *)(param_2 + 2) = (int)uVar8;
          if ((-1 < (long)uVar15) &&
             (lVar14 = oc_pack_bytes_left(auStack_70), (long)(uVar15 >> 0x1e) <= lVar14)) {
            iVar5 = *(int *)(param_2 + 2);
            pvVar12 = malloc((long)iVar5 << 2);
            param_2[1] = pvVar12;
            pvVar12 = malloc((long)iVar5 << 3);
            *param_2 = pvVar12;
            if (0 < iVar5) {
              lVar14 = 0;
              do {
                uVar8 = oc_pack_read(auStack_70,8);
                lVar9 = oc_pack_read(auStack_70,8);
                lVar10 = oc_pack_read(auStack_70,8);
                lVar13 = oc_pack_read(auStack_70,8);
                uVar8 = uVar8 | lVar9 << 8 | lVar10 << 0x10 | lVar13 << 0x18;
                if (((long)uVar8 < 0) ||
                   (lVar9 = oc_pack_bytes_left(auStack_70), lVar9 < (long)uVar8)) {
                  iVar5 = -0x14;
                  *(int *)(param_2 + 2) = (int)lVar14;
                  goto LAB_00ded3bc;
                }
                *(int *)((long)param_2[1] + lVar14 * 4) = (int)uVar8;
                pvVar12 = malloc(uVar8 + 1);
                *(void **)((long)*param_2 + lVar14 * 8) = pvVar12;
                puVar11 = *(undefined **)((long)*param_2 + lVar14 * 8);
                if (puVar11 == (undefined *)0x0) {
                  iVar5 = -1;
                  *(int *)(param_2 + 2) = (int)lVar14;
                  goto LAB_00ded3bc;
                }
                uVar15 = uVar8;
                if (uVar8 != 0) {
                  do {
                    uVar15 = uVar15 - 1;
                    uVar2 = oc_pack_read(auStack_70,8);
                    *puVar11 = uVar2;
                    puVar11 = puVar11 + 1;
                  } while (uVar15 != 0);
                  puVar11 = *(undefined **)((long)*param_2 + lVar14 * 8);
                }
                puVar11[uVar8] = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < *(int *)(param_2 + 2));
            }
            lVar14 = oc_pack_bytes_left(auStack_70);
            if (-1 < lVar14) {
              iVar5 = 2;
              goto LAB_00ded330;
            }
            goto LAB_00ded3b8;
          }
          iVar5 = -0x14;
          *(undefined4 *)(param_2 + 2) = 0;
        }
      }
LAB_00ded3bc:
      th_comment_clear(param_2);
      goto LAB_00ded330;
    }
    if (((uVar4 == 0x80) && (param_4[2] != 0)) && (*(int *)(param_1 + 4) == 0)) {
      bVar3 = oc_pack_read(auStack_70,8);
      *param_1 = bVar3;
      bVar3 = oc_pack_read(auStack_70,8);
      param_1[1] = bVar3;
      bVar3 = oc_pack_read(auStack_70,8);
      param_1[2] = bVar3;
      if ((*param_1 < 4) && ((*param_1 != 3 || (param_1[1] < 3)))) {
        iVar5 = oc_pack_read(auStack_70,0x10);
        *(int *)(param_1 + 4) = iVar5 << 4;
        iVar5 = oc_pack_read(auStack_70,0x10);
        *(int *)(param_1 + 8) = iVar5 << 4;
        uVar6 = oc_pack_read(auStack_70,0x18);
        *(undefined4 *)(param_1 + 0xc) = uVar6;
        uVar6 = oc_pack_read(auStack_70,0x18);
        *(undefined4 *)(param_1 + 0x10) = uVar6;
        uVar6 = oc_pack_read(auStack_70,8);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        uVar6 = oc_pack_read(auStack_70,8);
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        uVar6 = oc_pack_read(auStack_70,0x20);
        *(undefined4 *)(param_1 + 0x1c) = uVar6;
        iVar7 = oc_pack_read(auStack_70,0x20);
        *(int *)(param_1 + 0x20) = iVar7;
        if (((*(uint *)(param_1 + 4) != 0) && (uVar4 = *(uint *)(param_1 + 8), uVar4 != 0)) &&
           (((uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc)) <= *(uint *)(param_1 + 4) &&
            ((uint)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10)) <= uVar4)))) {
          iVar5 = -0x14;
          if ((*(int *)(param_1 + 0x1c) == 0) || (iVar7 == 0)) goto LAB_00ded48c;
          *(uint *)(param_1 + 0x18) = uVar4 - (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10));
          uVar6 = oc_pack_read(auStack_70,0x18);
          *(undefined4 *)(param_1 + 0x24) = uVar6;
          uVar6 = oc_pack_read(auStack_70,0x18);
          *(undefined4 *)(param_1 + 0x28) = uVar6;
          uVar6 = oc_pack_read(auStack_70,8);
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
          uVar6 = oc_pack_read(auStack_70,0x18);
          *(undefined4 *)(param_1 + 0x34) = uVar6;
          uVar6 = oc_pack_read(auStack_70,6);
          *(undefined4 *)(param_1 + 0x38) = uVar6;
          uVar6 = oc_pack_read(auStack_70,5);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
          iVar5 = oc_pack_read(auStack_70,2);
          *(int *)(param_1 + 0x30) = iVar5;
          if ((iVar5 != 1) &&
             ((lVar14 = oc_pack_read(auStack_70,3), lVar14 == 0 &&
              (lVar14 = oc_pack_bytes_left(auStack_70), -1 < lVar14)))) {
            iVar5 = 3;
            goto LAB_00ded330;
          }
        }
        iVar5 = -0x14;
      }
      else {
        iVar5 = -0x16;
      }
LAB_00ded48c:
      th_info_clear(param_1);
      goto LAB_00ded330;
    }
  }
LAB_00ded324:
  iVar5 = -0x14;
LAB_00ded330:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


