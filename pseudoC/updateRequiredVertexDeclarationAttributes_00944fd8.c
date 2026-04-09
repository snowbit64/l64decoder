// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRequiredVertexDeclarationAttributes
// Entry Point: 00944fd8
// Size: 116 bytes
// Signature: undefined updateRequiredVertexDeclarationAttributes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::updateRequiredVertexDeclarationAttributes() */

void GsMaterial::updateRequiredVertexDeclarationAttributes(void)

{
  long in_x0;
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = 0x25;
  if (*(long *)(in_x0 + 0x38) != 0) {
    uVar1 = 0x225;
  }
  lVar3 = *(long *)(in_x0 + 0x80);
  *(uint *)(in_x0 + 0x98) = uVar1;
  if (lVar3 != 0) {
    uVar4 = (ulong)*(uint *)(in_x0 + 0x88);
    uVar5 = (*(long *)(lVar3 + 0x118) - *(long *)(lVar3 + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x110) + uVar4 * 0xe0;
      uVar1 = *(uint *)(lVar3 + 0x70) | uVar1;
      uVar2 = ~*(uint *)(lVar3 + 0x74);
    }
    *(uint *)(in_x0 + 0x98) = uVar2 & uVar1;
  }
  return;
}


