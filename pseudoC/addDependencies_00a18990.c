// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDependencies
// Entry Point: 00a18990
// Size: 88 bytes
// Signature: undefined __thiscall addDependencies(RenderList * this, RenderTextureSetup * param_1)


/* RenderList::addDependencies(RenderTextureSetup*) const */

void __thiscall RenderList::addDependencies(RenderList *this,RenderTextureSetup *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x40) != lVar1) {
    uVar2 = 0;
    do {
      RenderTextureSetup::addDependency(param_1,*(RenderTextureSetup **)(lVar1 + uVar2 * 8));
      lVar1 = *(long *)(this + 0x38);
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(this + 0x40) - lVar1 >> 3));
  }
  return;
}


