// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad624
// Entry Point: 007ad624
// Size: 188 bytes
// Signature: undefined FUN_007ad624(void)


void FUN_007ad624(long param_1,char **param_2)

{
  long lVar1;
  uint uVar2;
  CustomShader *this;
  long lVar3;
  char *pcVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (CustomShader *)GsMaterial::getCustomShader();
  if ((((this == (CustomShader *)0x0) ||
       (uVar2 = CustomShader::getTextureIndex(this,*(uint *)(param_1 + 0x88),*param_2,&local_3c),
       (uVar2 & 1) == 0)) || (*(long *)(param_1 + 0x70) == 0)) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x70) + (ulong)local_3c * 8), lVar3 == 0)) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)(lVar3 + 0x31);
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      pcVar4 = *(char **)(lVar3 + 0x40);
    }
  }
  param_2[0x20] = pcVar4;
  *(undefined4 *)(param_2 + 0x21) = 6;
  *(ushort *)((long)param_2 + 0x10c) = *(ushort *)((long)param_2 + 0x10c) & 0xfffe;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


