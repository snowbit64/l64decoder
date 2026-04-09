// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findCommentEnd
// Entry Point: 00b8f27c
// Size: 316 bytes
// Signature: undefined __thiscall findCommentEnd(Preprocessor * this, char * param_1, char param_2, char param_3, uint param_4, uint param_5)


/* Preprocessor::findCommentEnd(char const*, char, char, unsigned int, unsigned int) */

uint __thiscall
Preprocessor::findCommentEnd
          (Preprocessor *this,char *param_1,char param_2,char param_3,uint param_4,uint param_5)

{
  char cVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  cVar3 = getChar(this,param_4);
  cVar1 = *param_1;
  do {
    local_5c = param_4;
    if (cVar1 == '\0') {
LAB_00b8f384:
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return param_4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar4 = matchSequence(this,param_1,&local_5c);
    if ((uVar4 & 1) != 0) {
      if (local_5c != 0) {
        getChar(this,local_5c - 1);
      }
      goto LAB_00b8f384;
    }
    if (cVar3 == '\0') {
      printError(this,"input ended while scanning a comment/string");
      goto LAB_00b8f384;
    }
    if (cVar3 == param_3) {
      printWarning(this,"possible comment/string termination problem");
      goto LAB_00b8f384;
    }
    if ((cVar3 == param_2) ||
       (((param_5 >> 2 & 1) != 0 && (*(char *)(*(long *)(this + 0x30) + 0x30) == cVar3)))) {
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
    }
    param_4 = param_4 + iVar5;
    cVar3 = getChar(this,param_4);
    cVar1 = *param_1;
  } while( true );
}


