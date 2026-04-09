// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_loop_filter_frag_rows_c
// Entry Point: 00df5a48
// Size: 528 bytes
// Signature: undefined oc_state_loop_filter_frag_rows_c(void)


void oc_state_loop_filter_frag_rows_c
               (long param_1,long param_2,int param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = param_1 + (long)param_4 * 0x28;
  iVar7 = *(int *)(lVar9 + 0x98);
  lVar10 = (long)iVar7;
  lVar8 = lVar10 * (param_6 - param_5);
  if (0 < lVar8) {
    lVar3 = *(long *)(lVar9 + 0xa0);
    param_2 = param_2 + 0x1fc;
    lVar12 = lVar3 + lVar10 * param_5;
    iVar6 = *(int *)(param_1 + (long)param_4 * 4 + 0x2e0);
    lVar9 = *(long *)(lVar9 + 0xa8) + lVar3;
    lVar4 = *(long *)(param_1 + 0x110);
    lVar5 = *(long *)(param_1 + 0x118);
    lVar11 = *(long *)(param_1 + (long)param_3 * 8 + 0x2c0);
    lVar13 = lVar12;
    do {
      lVar1 = lVar13 + lVar10;
      if (0 < iVar7) {
        lVar14 = lVar13;
        if (lVar3 < lVar13) {
          do {
            if ((*(uint *)(lVar4 + lVar14 * 4) & 1) != 0) {
              lVar2 = lVar11 + *(long *)(lVar5 + lVar14 * 8);
              if (lVar13 < lVar14) {
                FUN_00df817c(lVar2,iVar6,param_2);
              }
              FUN_00df84c8(lVar2,iVar6,param_2);
              if ((lVar14 + 1 < lVar1) && ((*(uint *)(lVar4 + (lVar14 + 1) * 4) & 1) == 0)) {
                FUN_00df817c(lVar2 + 8,iVar6,param_2);
              }
              if ((lVar14 + lVar10 < lVar9) && ((*(uint *)(lVar4 + (lVar14 + lVar10) * 4) & 1) == 0)
                 ) {
                FUN_00df84c8(lVar2 + (iVar6 << 3),iVar6,param_2);
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar1);
        }
        else {
          do {
            if ((*(uint *)(lVar4 + lVar14 * 4) & 1) != 0) {
              lVar2 = lVar11 + *(long *)(lVar5 + lVar14 * 8);
              if (lVar13 < lVar14) {
                FUN_00df817c(lVar2,iVar6,param_2);
              }
              if ((lVar14 + 1 < lVar1) && ((*(uint *)(lVar4 + (lVar14 + 1) * 4) & 1) == 0)) {
                FUN_00df817c(lVar2 + 8,iVar6,param_2);
              }
              if ((lVar14 + lVar10 < lVar9) && ((*(uint *)(lVar4 + (lVar14 + lVar10) * 4) & 1) == 0)
                 ) {
                FUN_00df84c8(lVar2 + (iVar6 << 3),iVar6,param_2);
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar1);
        }
      }
      lVar13 = lVar1;
    } while (lVar1 < lVar12 + lVar8);
  }
  return;
}


