// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: matchEndSequence
// Entry Point: 00b8f3b8
// Size: 148 bytes
// Signature: undefined __thiscall matchEndSequence(Preprocessor * this, char * param_1, uint * param_2)


/* Preprocessor::matchEndSequence(char const*, unsigned int*) */

undefined8 __thiscall Preprocessor::matchEndSequence(Preprocessor *this,char *param_1,uint *param_2)

{
  ulong uVar1;
  
  if (*param_1 != '\0') {
    uVar1 = matchSequence(this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*param_2 != 0) {
      uVar1 = getChar(this,*param_2 - 1);
      if (0x20 < ((uint)uVar1 & 0xff)) {
        return 1;
      }
      if ((1L << (uVar1 & 0x3f) & 0x100000600U) == 0) {
        return 1;
      }
      *param_2 = *param_2 - 1;
      return 1;
    }
  }
  return 1;
}


