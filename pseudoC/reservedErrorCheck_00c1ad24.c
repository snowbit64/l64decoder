// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reservedErrorCheck
// Entry Point: 00c1ad24
// Size: 220 bytes
// Signature: undefined __thiscall reservedErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_String * param_2)


/* GISLParserContext::reservedErrorCheck(GsTSourceLoc const&, SHC_String const&) */

undefined8 __thiscall
GISLParserContext::reservedErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_String *param_2)

{
  ulong uVar1;
  SHC_String SVar2;
  char *pcVar3;
  long lVar4;
  uint *puVar5;
  
  lVar4 = (*(long **)this)[1] - **(long **)this;
  if (lVar4 != 8 && lVar4 != 0x10) {
    SVar2 = *param_2;
    uVar1 = (ulong)((byte)SVar2 >> 1);
    if (((byte)SVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (2 < uVar1) {
      puVar5 = *(uint **)(param_2 + 0x10);
      if (((byte)SVar2 & 1) == 0) {
        puVar5 = (uint *)(param_2 + 1);
      }
      if ((ushort)(*(ushort *)puVar5 ^ 0x6c67 | *(byte *)((long)puVar5 + 2) ^ 0x5f) == 0) {
        pcVar3 = "gl_";
      }
      else {
        if (uVar1 < 5) {
          return 0;
        }
        if ((*puVar5 ^ 0x6c736967 | *(byte *)(puVar5 + 1) ^ 0x5f) != 0) {
          return 0;
        }
        pcVar3 = "gisl_";
      }
      error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),"reserved built-in name",
            pcVar3,&DAT_0050a39f);
      return 1;
    }
  }
  return 0;
}


