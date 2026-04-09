// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: containsAnyTextureOrSampler
// Entry Point: 00c50ca4
// Size: 80 bytes
// Signature: undefined containsAnyTextureOrSampler(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Struct::containsAnyTextureOrSampler() const */

uint IR_Struct::containsAnyTextureOrSampler(void)

{
  long lVar1;
  uint uVar2;
  long in_x0;
  long lVar3;
  
  lVar3 = *(long *)(in_x0 + 0x30);
  lVar1 = *(long *)(in_x0 + 0x38);
  if (lVar3 == lVar1) {
    uVar2 = 0;
  }
  else {
    do {
      lVar3 = lVar3 + 0x38;
      uVar2 = IR_Type::containsAnyTextureOrSampler();
      if ((uVar2 & 1) != 0) break;
    } while (lVar3 != lVar1);
  }
  return uVar2 & 1;
}


