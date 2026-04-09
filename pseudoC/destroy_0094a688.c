// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 0094a688
// Size: 548 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CustomShader::destroy() */

void CustomShader::destroy(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  MaterialShaderManager *this;
  ulong uVar3;
  long lVar4;
  Variation *this_00;
  Variation *pVVar5;
  Variation *pVVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(in_x0 + 0x28);
  if (lVar4 != *(long *)(in_x0 + 0x30)) {
    do {
      if (*(long *)(in_x0 + 0x118) != *(long *)(in_x0 + 0x110)) {
        uVar7 = 0;
        do {
          this = (MaterialShaderManager *)MaterialShaderManager::getInstance();
          MaterialShaderManager::releaseCustomShaderHash
                    (this,*(uint *)(*(long *)(lVar4 + 8) + uVar7 * 4));
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar3 = (*(long *)(in_x0 + 0x118) - *(long *)(in_x0 + 0x110) >> 5) * 0x6db6db6db6db6db7;
        } while (uVar7 <= uVar3 && uVar3 - uVar7 != 0);
      }
      if (*(void **)(lVar4 + 8) != (void *)0x0) {
        operator_delete__(*(void **)(lVar4 + 8));
      }
      lVar4 = lVar4 + 0x48;
    } while (lVar4 != *(long *)(in_x0 + 0x30));
  }
  pVVar5 = *(Variation **)(in_x0 + 0x110);
  pVVar6 = *(Variation **)(in_x0 + 0x118);
  if (*(Variation **)(in_x0 + 0x118) != pVVar5) {
    uVar7 = 0;
    do {
      if (*(void **)(pVVar5 + uVar7 * 0xe0) != (void *)0x0) {
        operator_delete__(*(void **)(pVVar5 + uVar7 * 0xe0));
        pVVar5 = *(Variation **)(in_x0 + 0x110);
      }
      if (*(void **)(pVVar5 + uVar7 * 0xe0 + 8) != (void *)0x0) {
        operator_delete__(*(void **)(pVVar5 + uVar7 * 0xe0 + 8));
        pVVar5 = *(Variation **)(in_x0 + 0x110);
      }
      this_00 = *(Variation **)(in_x0 + 0x118);
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar3 = ((long)this_00 - (long)pVVar5 >> 5) * 0x6db6db6db6db6db7;
    } while (uVar7 <= uVar3 && uVar3 - uVar7 != 0);
    while (pVVar6 = pVVar5, this_00 != pVVar5) {
      this_00 = this_00 + -0xe0;
      Variation::~Variation(this_00);
    }
  }
  lVar4 = *(long *)(in_x0 + 0x28);
  *(Variation **)(in_x0 + 0x118) = pVVar6;
  lVar1 = *(long *)(in_x0 + 0x30);
  while (lVar2 = lVar1, lVar2 != lVar4) {
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
    }
    lVar1 = lVar2 + -0x48;
    if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x20));
    }
  }
  lVar1 = *(long *)(in_x0 + 0x40);
  *(long *)(in_x0 + 0x30) = lVar4;
  lVar4 = *(long *)(in_x0 + 0x48);
  while (lVar2 = lVar4, lVar2 != lVar1) {
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
    }
    if ((*(byte *)(lVar2 + -0x68) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x58));
    }
    lVar4 = lVar2 + -0x80;
    if ((*(byte *)(lVar2 + -0x80) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x70));
    }
  }
  lVar4 = *(long *)(in_x0 + 0x58);
  *(long *)(in_x0 + 0x48) = lVar1;
  lVar1 = *(long *)(in_x0 + 0x60);
  while (lVar2 = lVar1, lVar2 != lVar4) {
    if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x10));
    }
    if ((*(byte *)(lVar2 + -0x40) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x30));
    }
    lVar1 = lVar2 + -0x58;
    if ((*(byte *)(lVar2 + -0x58) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x48));
    }
  }
  *(long *)(in_x0 + 0x60) = lVar4;
  return;
}


