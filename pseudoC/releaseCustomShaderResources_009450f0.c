// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseCustomShaderResources
// Entry Point: 009450f0
// Size: 212 bytes
// Signature: undefined releaseCustomShaderResources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::releaseCustomShaderResources() */

void GsMaterial::releaseCustomShaderResources(void)

{
  long in_x0;
  ResourceManager *this;
  MaterialManager *this_00;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(in_x0 + 0x80);
  if (lVar1 != 0) {
    uVar4 = 0;
    while( true ) {
      uVar2 = (ulong)*(uint *)(in_x0 + 0x88);
      uVar3 = (*(long *)(lVar1 + 0x118) - *(long *)(lVar1 + 0x110) >> 5) * 0x6db6db6db6db6db7;
      if ((uVar3 < uVar2 || uVar3 - uVar2 == 0) ||
         (lVar1 = *(long *)(lVar1 + 0x110) + uVar2 * 0xe0,
         ((ulong)(*(long *)(lVar1 + 0x60) - *(long *)(lVar1 + 0x58)) >> 3 & 0xffffffff) <= uVar4))
      break;
      this = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(this,*(Resource **)(*(long *)(in_x0 + 0x70) + uVar4 * 8));
      lVar1 = *(long *)(in_x0 + 0x80);
      uVar4 = uVar4 + 1;
    }
    this_00 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::releaseCustomShader(this_00,*(CustomShader **)(in_x0 + 0x80));
  }
  if (*(void **)(in_x0 + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x70));
  }
  if (*(void **)(in_x0 + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x78));
    return;
  }
  return;
}


