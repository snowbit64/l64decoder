// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_quant_LTP_gains
// Entry Point: 00e90440
// Size: 1428 bytes
// Signature: undefined silk_quant_LTP_gains(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void silk_quant_LTP_gains
               (long param_1,char *param_2,char *param_3,int *param_4,int *param_5,long param_6,
               long param_7,undefined4 param_8,uint param_9)

{
  long lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  size_t __n;
  long lVar11;
  long lVar12;
  int local_cc;
  int local_94;
  int local_80;
  int local_7c;
  int iStack_78;
  undefined auStack_74 [4];
  long local_70;
  
  uVar8 = (ulong)param_9;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __n = (size_t)(int)param_9;
  if ((int)param_9 < 1) {
    memcpy(param_2,auStack_74,__n);
    *param_3 = '\x01';
    memcpy(param_2,auStack_74,__n);
    local_cc = *param_4;
    *param_3 = '\x02';
    memcpy(param_2,auStack_74,__n);
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    puVar5 = auStack_74;
    local_cc = *param_4;
    uVar9 = uVar8;
    lVar11 = param_7;
    lVar12 = param_6;
    do {
      while( true ) {
        iVar3 = silk_log2lin(0x1855 - local_cc);
        silk_VQ_WMat_EC_c(puVar5,&iStack_78,&local_7c,&local_80,lVar12,lVar11,&DAT_00564f24,
                          &DAT_0056503c,&DAT_00564eec,param_8,iVar3 + -0x33,8);
        local_94 = local_7c + iVar10;
        iVar10 = local_94;
        if (local_94 < 0) {
          iVar10 = 0x7fffffff;
        }
        iVar3 = silk_lin2log(local_80 + 0x33);
        if (0x37f < iVar3 + local_cc) break;
        local_cc = 0;
        lVar12 = lVar12 + 100;
        lVar11 = lVar11 + 0x14;
        puVar5 = puVar5 + 1;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_00e905cc;
      }
      iVar3 = silk_lin2log(local_80 + 0x33);
      local_cc = local_cc + iVar3 + -0x380;
      lVar12 = lVar12 + 100;
      lVar11 = lVar11 + 0x14;
      puVar5 = puVar5 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
LAB_00e905cc:
    puVar5 = auStack_74;
    *param_3 = '\0';
    memcpy(param_2,auStack_74,__n);
    iVar3 = 0;
    iVar7 = *param_4;
    lVar11 = param_7;
    lVar12 = param_6;
    uVar9 = uVar8;
    do {
      while( true ) {
        iVar4 = silk_log2lin(0x1855 - iVar7);
        silk_VQ_WMat_EC_c(puVar5,&iStack_78,&local_7c,&local_80,lVar12,lVar11,&DAT_00564f4c,
                          &DAT_00565044,&DAT_00564ef4,param_8,iVar4 + -0x33,0x10);
        iVar3 = local_7c + iVar3;
        if (iVar3 < 0) {
          iVar3 = 0x7fffffff;
        }
        iVar4 = silk_lin2log(local_80 + 0x33);
        if (0x37f < iVar4 + iVar7) break;
        iVar7 = 0;
        lVar12 = lVar12 + 100;
        lVar11 = lVar11 + 0x14;
        uVar9 = uVar9 - 1;
        puVar5 = puVar5 + 1;
        if (uVar9 == 0) goto LAB_00e906f4;
      }
      iVar4 = silk_lin2log(local_80 + 0x33);
      iVar7 = iVar7 + iVar4 + -0x380;
      lVar12 = lVar12 + 100;
      lVar11 = lVar11 + 0x14;
      uVar9 = uVar9 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 != 0);
LAB_00e906f4:
    if (iVar3 <= iVar10) {
      *param_3 = '\x01';
      memcpy(param_2,auStack_74,__n);
      local_cc = iVar7;
      local_94 = iVar3;
    }
    iVar3 = 0;
    iVar10 = 0;
    puVar5 = auStack_74;
    iVar7 = *param_4;
    uVar9 = uVar8;
    do {
      while( true ) {
        iVar4 = silk_log2lin(0x1855 - iVar7);
        silk_VQ_WMat_EC_c(puVar5,&iStack_78,&local_7c,&local_80,param_6,param_7,&DAT_00564f9c,
                          &DAT_00565054,&DAT_00564f04,param_8,iVar4 + -0x33,0x20);
        iVar10 = iStack_78 + iVar10;
        iVar3 = local_7c + iVar3;
        if (iVar10 < 0) {
          iVar10 = 0x7fffffff;
        }
        if (iVar3 < 0) {
          iVar3 = 0x7fffffff;
        }
        iVar4 = silk_lin2log(local_80 + 0x33);
        if (0x37f < iVar4 + iVar7) break;
        iVar7 = 0;
        param_6 = param_6 + 100;
        param_7 = param_7 + 0x14;
        uVar9 = uVar9 - 1;
        puVar5 = puVar5 + 1;
        if (uVar9 == 0) goto LAB_00e90844;
      }
      iVar4 = silk_lin2log(local_80 + 0x33);
      iVar7 = iVar7 + iVar4 + -0x380;
      param_6 = param_6 + 100;
      param_7 = param_7 + 0x14;
      uVar9 = uVar9 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 != 0);
LAB_00e90844:
    if (iVar3 <= local_94) {
      *param_3 = '\x02';
      memcpy(param_2,auStack_74,__n);
      local_cc = iVar7;
    }
    if (0 < (int)param_9) {
      puVar5 = (&silk_LTP_vq_ptrs_Q7)[*param_3];
      puVar6 = (undefined2 *)(param_1 + 4);
      do {
        uVar8 = uVar8 - 1;
        puVar6[-2] = (short)((int)(char)puVar5[(long)*param_2 * 5] << 7);
        puVar6[-1] = (short)((int)(char)puVar5[(long)*param_2 * 5 + 1] << 7);
        *puVar6 = (short)((int)(char)puVar5[(long)*param_2 * 5 + 2] << 7);
        puVar6[1] = (short)((int)(char)puVar5[(long)*param_2 * 5 + 3] << 7);
        puVar6[2] = (short)((int)(char)puVar5[(long)*param_2 * 5 + 4] << 7);
        puVar6 = puVar6 + 5;
        param_2 = param_2 + 1;
      } while (uVar8 != 0);
    }
  }
  iVar3 = 1;
  if (param_9 != 2) {
    iVar3 = 2;
  }
  *param_4 = local_cc;
  sVar2 = silk_lin2log(iVar10 >> iVar3);
  *param_5 = (int)(short)(sVar2 + -0x780) + (short)(sVar2 + -0x780) * -4;
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


