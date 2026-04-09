// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSwizzle
// Entry Point: 006f80b4
// Size: 104 bytes
// Signature: undefined __thiscall setSwizzle(TextureOverlayRenderer * this, char * param_1)


/* TextureOverlayRenderer::setSwizzle(char const*) */

void __thiscall TextureOverlayRenderer::setSwizzle(TextureOverlayRenderer *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = decodeSwizzle(*param_1);
  *(uint *)(this + 0x49c) = uVar1;
  uVar2 = decodeSwizzle(param_1[1]);
  uVar2 = uVar1 & 7 | (uVar2 & 7) << 3;
  *(uint *)(this + 0x49c) = uVar1 & 0xffffffc0 | uVar2;
  uVar3 = decodeSwizzle(param_1[2]);
  uVar2 = uVar2 | (uVar3 & 7) << 6;
  *(uint *)(this + 0x49c) = uVar1 & 0xfffffe00 | uVar2;
  uVar3 = decodeSwizzle(param_1[3]);
  *(uint *)(this + 0x49c) = uVar1 & 0xfffff000 | uVar2 | (uVar3 & 7) << 9;
  return;
}


