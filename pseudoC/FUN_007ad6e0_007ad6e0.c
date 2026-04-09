// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad6e0
// Entry Point: 007ad6e0
// Size: 156 bytes
// Signature: undefined FUN_007ad6e0(void)


void FUN_007ad6e0(long param_1,char **param_2)

{
  long lVar1;
  uint uVar2;
  CustomShader *this;
  ulong uVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (CustomShader *)GsMaterial::getCustomShader();
  if ((this == (CustomShader *)0x0) ||
     (uVar2 = CustomShader::getTextureIndex(this,*(uint *)(param_1 + 0x88),*param_2,&local_3c),
     (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x70);
    if ((uVar3 != 0) && (uVar3 = *(ulong *)(uVar3 + (ulong)local_3c * 8), uVar3 != 0)) {
      uVar3 = (ulong)(*(ushort *)(uVar3 + 0x48) >> 1 & 1);
    }
  }
  *(char *)(param_2 + 0x20) = (char)uVar3;
  *(undefined4 *)(param_2 + 0x21) = 3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


