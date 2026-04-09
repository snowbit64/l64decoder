// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteAllMixMatrices
// Entry Point: 00e3e2b8
// Size: 176 bytes
// Signature: undefined deleteAllMixMatrices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::deleteAllMixMatrices() */

void SoLoud::Soloud::deleteAllMixMatrices(void)

{
  long lVar1;
  long in_x0;
  void *pvVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = in_x0 + 0x21d0;
  do {
    pvVar2 = *(void **)(lVar1 + lVar3 + -0x38);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + lVar3 + -0x30);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + lVar3 + -0x28);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + lVar3 + -0x20);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + lVar3 + -0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + lVar3 + -0x10);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)(lVar1 + lVar3 + -8);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    if (*(void **)(lVar1 + lVar3) != (void *)0x0) {
      operator_delete__(*(void **)(lVar1 + lVar3));
    }
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x200);
  return;
}


