// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_dct_inplace___un_3C_s_5B_vypixel_set_5D__3E_uni
// Entry Point: 00e53ea0
// Size: 308 bytes
// Signature: undefined compute_dct_inplace___un_3C_s_5B_vypixel_set_5D__3E_uni(void)


void compute_dct_inplace___un_3C_s_5B_vypixel_set_5D__3E_uni
               (undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  if (0 < param_3) {
    iVar1 = *(int *)((long)param_2 + 0xc);
    if (iVar1 < 1) {
      iVar3 = 0;
      iVar4 = 0;
      do {
        iVar7 = *(int *)(param_2 + 1);
        if (0 < iVar7) {
          lVar6 = *param_2;
          lVar5 = 0;
          do {
            dct___un_3C_vyf_3E_uniuni(param_1,lVar6 + (long)(iVar3 + (int)lVar5) * 0x10,8,iVar1);
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar7);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar4 != param_3);
    }
    else {
      iVar3 = 0;
      iVar4 = 0;
      do {
        lVar5 = 0;
        lVar6 = *param_2;
        iVar2 = *(int *)(param_2 + 1);
        iVar7 = iVar3;
        do {
          dct___un_3C_vyf_3E_uniuni(param_1,lVar6 + (long)iVar7 * 0x10,1,iVar2);
          lVar5 = lVar5 + 1;
          iVar7 = iVar7 + 8;
        } while (lVar5 < iVar1);
        if (0 < iVar2) {
          lVar6 = *param_2;
          lVar5 = 0;
          do {
            dct___un_3C_vyf_3E_uniuni(param_1,lVar6 + (long)(iVar3 + (int)lVar5) * 0x10,8,iVar1);
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar2);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar4 != param_3);
    }
  }
  return;
}


