// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: typeQualifierErrorCheck
// Entry Point: 00c1badc
// Size: 464 bytes
// Signature: undefined __thiscall typeQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2, IR_QualFlags * param_3)


/* GISLParserContext::typeQualifierErrorCheck(GsTSourceLoc const&, SHC_Type&, IR_QualFlags&) */

uint __thiscall
GISLParserContext::typeQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2,IR_QualFlags *param_3)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  GsTSourceLoc GVar9;
  uint local_68 [2];
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  uVar8 = globalQualifierErrorCheck(this,param_1,param_3);
  if ((*param_3 >> 2 & 1) != 0) {
    uVar1 = *param_3 & 4;
    iVar5 = **(int **)(param_2 + 8);
    GVar9 = (GsTSourceLoc)this;
    if (iVar5 == 3) {
      pcVar3 = *(char **)param_1;
      pcVar4 = *(char **)(param_1 + 2);
      local_68[0] = uVar1;
      IR_QualFlags::getAsString(SUB81(local_68,0));
      pvVar2 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar2 = local_50;
      }
                    /* try { // try from 00c1bbc0 to 00c1bbdf has its CatchHandler @ 00c1bcb0 */
      error(GVar9,pcVar3,pcVar4,"cannot be used with a structure",pvVar2,&DAT_0050a39f);
    }
    else if (iVar5 == 4) {
      pcVar3 = *(char **)param_1;
      pcVar4 = *(char **)(param_1 + 2);
      local_68[0] = uVar1;
      IR_QualFlags::getAsString(SUB81(local_68,0));
      pvVar2 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar2 = local_50;
      }
                    /* try { // try from 00c1bb6c to 00c1bb8b has its CatchHandler @ 00c1bcb4 */
      error(GVar9,pcVar3,pcVar4,"cannot declare arrays of this qualifier",pvVar2,&DAT_0050a39f);
    }
    else {
      if (((2 < iVar5) || (uVar6 = (*(int **)(param_2 + 8))[2], 9 < uVar6)) ||
         ((1 << (ulong)(uVar6 & 0x1f) & 0x260U) == 0)) goto LAB_00c1bc7c;
      pcVar3 = *(char **)param_1;
      pcVar4 = *(char **)(param_1 + 2);
      local_68[0] = uVar1;
      IR_QualFlags::getAsString(SUB81(local_68,0));
      pvVar2 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar2 = local_50;
      }
                    /* try { // try from 00c1bc3c to 00c1bc5b has its CatchHandler @ 00c1bcac */
      error(GVar9,pcVar3,pcVar4,"cannot be bool or int/uint",pvVar2,&DAT_0050a39f);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar8 = 1;
    *param_3 = *param_3 & 0xfffffffb;
  }
LAB_00c1bc7c:
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return uVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


