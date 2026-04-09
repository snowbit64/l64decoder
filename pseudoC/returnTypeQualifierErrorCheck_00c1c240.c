// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: returnTypeQualifierErrorCheck
// Entry Point: 00c1c240
// Size: 336 bytes
// Signature: undefined __thiscall returnTypeQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2, IR_QualFlags * param_3)


/* GISLParserContext::returnTypeQualifierErrorCheck(GsTSourceLoc const&, SHC_Type&, IR_QualFlags&)
    */

bool __thiscall
GISLParserContext::returnTypeQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2,IR_QualFlags *param_3)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  char *pcVar6;
  uint local_88 [2];
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *param_3 & 0xfffffffc;
  bVar5 = uVar1 != 0;
  *param_3 = *param_3 & 0xfffffffd;
  if (uVar1 != 0) {
    pcVar6 = *(char **)param_1;
    pcVar3 = *(char **)(param_1 + 2);
    local_88[0] = uVar1;
    IR_QualFlags::getAsString(SUB81(local_88,0));
    pvVar2 = (void *)((ulong)local_80 | 1);
    if ((local_80[0] & 1) != 0) {
      pvVar2 = local_70;
    }
                    /* try { // try from 00c1c2c4 to 00c1c2e3 has its CatchHandler @ 00c1c390 */
    error((GsTSourceLoc)this,pcVar6,pcVar3,"no qualifiers allowed for function return",pvVar2,
          &DAT_0050a39f);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    *param_3 = *param_3 & 1;
  }
  if (**(int **)(param_2 + 8) - 7U < 2) {
    uVar1 = (*(int **)(param_2 + 8))[2];
    if (uVar1 < 10) {
      pcVar6 = (&PTR_DAT_00fed9f0)[(int)uVar1];
    }
    else {
      pcVar6 = "unknown type";
    }
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "textures and samplers cannot be return values",pcVar6,&DAT_0050a39f);
    bVar5 = true;
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


