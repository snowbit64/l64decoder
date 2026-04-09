// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: containsAnyTextureOrSampler
// Entry Point: 00c50c20
// Size: 132 bytes
// Signature: undefined containsAnyTextureOrSampler(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Type::containsAnyTextureOrSampler() const */

uint IR_Type::containsAnyTextureOrSampler(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *in_x0;
  long lVar4;
  
  for (; iVar2 = *in_x0, iVar2 == 4; in_x0 = *(int **)(in_x0 + 2)) {
  }
  if (iVar2 - 7U < 2) {
    uVar3 = 1;
  }
  else {
    if (iVar2 == 3) {
      lVar4 = *(long *)(*(long *)(in_x0 + 2) + 0x30);
      lVar1 = *(long *)(*(long *)(in_x0 + 2) + 0x38);
      if (lVar4 != lVar1) {
        do {
          lVar4 = lVar4 + 0x38;
          uVar3 = containsAnyTextureOrSampler();
          if ((uVar3 & 1) != 0) break;
        } while (lVar4 != lVar1);
        goto LAB_00c50c94;
      }
    }
    uVar3 = 0;
  }
LAB_00c50c94:
  return uVar3 & 1;
}


