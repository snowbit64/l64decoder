// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: structDefQualifierErrorCheck
// Entry Point: 00c1c144
// Size: 224 bytes
// Signature: undefined __thiscall structDefQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, IR_QualFlags * param_2)


/* GISLParserContext::structDefQualifierErrorCheck(GsTSourceLoc const&, IR_QualFlags&) */

void __thiscall
GISLParserContext::structDefQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,IR_QualFlags *param_2)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  uint local_78 [2];
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar1 = *param_2 & 0xfffffdff;
  if (uVar1 != 0) {
    pcVar3 = *(char **)param_1;
    pcVar4 = *(char **)(param_1 + 2);
    local_78[0] = uVar1;
    IR_QualFlags::getAsString(SUB81(local_78,0));
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
                    /* try { // try from 00c1c1b0 to 00c1c1cf has its CatchHandler @ 00c1c224 */
    error((GsTSourceLoc)this,pcVar3,pcVar4,"qualifier not allowed on struct field",pvVar2,
          &DAT_0050a39f);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    *param_2 = *param_2 & 0x200;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 != 0);
}


