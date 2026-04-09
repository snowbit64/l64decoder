// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: globalQualifierErrorCheck
// Entry Point: 00c1b9c8
// Size: 248 bytes
// Signature: undefined __thiscall globalQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, IR_QualFlags * param_2)


/* GISLParserContext::globalQualifierErrorCheck(GsTSourceLoc const&, IR_QualFlags&) */

void __thiscall
GISLParserContext::globalQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,IR_QualFlags *param_2)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_68 [2];
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (((*(long **)this)[1] - **(long **)this == 0x18) || ((*param_2 & 0x108) == 0)) {
    uVar5 = 0;
  }
  else {
    pcVar2 = *(char **)param_1;
    pcVar3 = *(char **)(param_1 + 2);
    local_68[0] = *param_2 & 0x108;
    IR_QualFlags::getAsString(SUB81(local_68,0));
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 00c1ba48 to 00c1ba67 has its CatchHandler @ 00c1bac0 */
    error((GsTSourceLoc)this,pcVar2,pcVar3,"qualifier is only allowed at global scope",pvVar1,
          &DAT_0050a39f);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar5 = 1;
    *param_2 = *param_2 & 0xfffffef7;
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


