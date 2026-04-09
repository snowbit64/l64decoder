// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInputStructBufferHandle
// Entry Point: 00beed08
// Size: 112 bytes
// Signature: undefined __thiscall getInputStructBufferHandle(AdhocShader * this, char * param_1, SHADER_STAGE param_2)


/* AdhocShader::getInputStructBufferHandle(char const*, IProgramObject::SHADER_STAGE) const */

undefined4 __thiscall
AdhocShader::getInputStructBufferHandle(AdhocShader *this,char *param_1,SHADER_STAGE param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + (ulong)param_2 * 0x18 + 0x10);
  lVar2 = *(long *)(this + (ulong)param_2 * 0x18 + 0x18);
  if (lVar2 - lVar1 != 0) {
    uVar4 = 0;
    do {
      iVar3 = strcmp(*(char **)(lVar1 + uVar4 * 0x10 + 8),param_1);
      if (iVar3 == 0) {
        return *(undefined4 *)(lVar1 + uVar4 * 0x10);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar2 - lVar1 >> 4));
  }
  return 0xffffffff;
}


