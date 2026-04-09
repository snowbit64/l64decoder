// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00d4e770
// Size: 172 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::Graph::Clear() */

void HACD::Graph::Clear(void)

{
  long lVar1;
  long in_x0;
  void *pvVar2;
  void **ppvVar3;
  long lVar4;
  
  lVar1 = *(long *)(in_x0 + 0x38);
  lVar4 = *(long *)(in_x0 + 0x40);
  while (lVar4 != lVar1) {
    if (*(long **)(lVar4 + -0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0xa0) + 8))();
    }
    if (*(void **)(lVar4 + -0x18) != (void *)0x0) {
      operator_delete__(*(void **)(lVar4 + -0x18));
    }
    if (*(long *)(lVar4 + -200) != 0) {
      operator_delete__((void *)(*(long *)(lVar4 + -200) + -8));
    }
    pvVar2 = *(void **)(lVar4 + -0x260);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar4 + -600) = pvVar2;
      operator_delete(pvVar2);
    }
    ppvVar3 = (void **)(lVar4 + -0x280);
    lVar4 = lVar4 + -0x310;
    if (*ppvVar3 != (void *)0x0) {
      operator_delete__(*ppvVar3);
    }
  }
  *(long *)(in_x0 + 0x40) = lVar1;
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(undefined8 *)(in_x0 + 0x28) = *(undefined8 *)(in_x0 + 0x20);
  return;
}


