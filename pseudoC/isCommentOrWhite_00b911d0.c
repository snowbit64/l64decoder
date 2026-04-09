// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isCommentOrWhite
// Entry Point: 00b911d0
// Size: 232 bytes
// Signature: undefined __thiscall isCommentOrWhite(Preprocessor * this, uint param_1, uint param_2, COMMENT_MODE param_3)


/* Preprocessor::isCommentOrWhite(unsigned int, unsigned int, Preprocessor::COMMENT_MODE) */

void __thiscall
Preprocessor::isCommentOrWhite(Preprocessor *this,uint param_1,uint param_2,COMMENT_MODE param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = param_1;
  if (param_1 < param_2) {
    do {
      skipPossibleComments(this,&local_5c,param_3,true);
      uVar2 = local_5c;
      uVar5 = local_5c;
      if (local_5c < param_2) {
        uVar5 = local_5c + 1;
        local_5c = uVar5;
        uVar3 = getChar(this,uVar2);
        uVar4 = 0;
        if ((0x20 < ((uint)uVar3 & 0xff)) || ((1L << (uVar3 & 0x3f) & 0x100000600U) == 0))
        goto LAB_00b91288;
      }
    } while (uVar5 < param_2);
  }
  uVar4 = 1;
LAB_00b91288:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


