// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstantBufferHandle
// Entry Point: 00beeb50
// Size: 104 bytes
// Signature: undefined __thiscall getConstantBufferHandle(AdhocShader * this, char * param_1)


/* AdhocShader::getConstantBufferHandle(char const*) const */

undefined4 __thiscall AdhocShader::getConstantBufferHandle(AdhocShader *this,char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + 0xa0);
  lVar2 = *(long *)(this + 0xa8);
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


