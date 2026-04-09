// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: variableQualifierErrorCheck
// Entry Point: 00c1be34
// Size: 304 bytes
// Signature: undefined __thiscall variableQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2, IR_QualFlags * param_3, bool param_4, bool param_5)


/* GISLParserContext::variableQualifierErrorCheck(GsTSourceLoc const&, SHC_Type&, IR_QualFlags&,
   bool, bool) */

bool __thiscall
GISLParserContext::variableQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2,IR_QualFlags *param_3,
          bool param_4,bool param_5)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  uint local_88 [2];
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar5 = *param_3;
  uVar1 = uVar5 & 0xfffffee0;
  bVar7 = uVar1 != 0;
  if (uVar1 != 0) {
    pcVar3 = *(char **)param_1;
    pcVar4 = *(char **)(param_1 + 2);
    local_88[0] = uVar1;
    IR_QualFlags::getAsString(SUB81(local_88,0));
    pvVar2 = (void *)((ulong)local_80 | 1);
    if ((local_80[0] & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 00c1beb4 to 00c1bed3 has its CatchHandler @ 00c1bf64 */
    error((GsTSourceLoc)this,pcVar3,pcVar4,"qualifier not allowed on variable",pvVar2,&DAT_0050a39f)
    ;
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    uVar5 = *param_3 & 0x11f;
    *param_3 = uVar5;
  }
  if (((uVar5 >> 1 & 1) != 0) && (!param_5)) {
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "variables with qualifier \'const\' must be initialized",&DAT_0050a39f,&DAT_0050a39f);
    bVar7 = true;
    *param_3 = *param_3 & 0xfffffffd;
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


