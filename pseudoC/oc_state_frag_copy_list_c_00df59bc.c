// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_frag_copy_list_c
// Entry Point: 00df59bc
// Size: 140 bytes
// Signature: undefined oc_state_frag_copy_list_c(void)


void oc_state_frag_copy_list_c
               (long param_1,long *param_2,long param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (0 < param_3) {
    uVar1 = *(undefined4 *)(param_1 + (long)param_6 * 4 + 0x2e0);
    lVar5 = *(long *)(param_1 + 0x118);
    lVar3 = *(long *)(param_1 + 0x2c0 + (long)*(int *)(param_1 + 400 + (long)param_4 * 4) * 8);
    lVar4 = *(long *)(param_1 + 0x2c0 + (long)*(int *)(param_1 + 400 + (long)param_5 * 4) * 8);
    do {
      lVar2 = *(long *)(lVar5 + *param_2 * 8);
      oc_frag_copy(param_1,lVar3 + lVar2,lVar4 + lVar2,uVar1);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


