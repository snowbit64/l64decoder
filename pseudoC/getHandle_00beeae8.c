// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHandle
// Entry Point: 00beeae8
// Size: 104 bytes
// Signature: undefined __thiscall getHandle(AdhocShader * this, vector * param_1, char * param_2)


/* AdhocShader::getHandle(std::__ndk1::vector<AdhocShader::HandleName,
   std::__ndk1::allocator<AdhocShader::HandleName> > const&, char const*) const */

undefined4 __thiscall AdhocShader::getHandle(AdhocShader *this,vector *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 - lVar1 != 0) {
    uVar4 = 0;
    do {
      iVar3 = strcmp(*(char **)(lVar1 + uVar4 * 0x10 + 8),param_2);
      if (iVar3 == 0) {
        return *(undefined4 *)(lVar1 + uVar4 * 0x10);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar2 - lVar1 >> 4));
  }
  return 0xffffffff;
}


