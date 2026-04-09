// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 008e1350
// Size: 228 bytes
// Signature: undefined deactivate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetGeometry::deactivate() */

void IndexedTriangleSetGeometry::deactivate(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  long lVar3;
  long **pplVar4;
  
  if (*(long **)(in_x0 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x150) + 8))();
  }
  lVar3 = 0;
  *(undefined8 *)(in_x0 + 0x150) = 0;
  pplVar4 = (long **)(in_x0 + 0xc0);
  do {
    lVar1 = in_x0 + 0xa8 + lVar3 * 8;
    plVar2 = *(long **)(lVar1 + 0x80);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(undefined8 *)(lVar1 + 0x80) = 0;
    if (pplVar4[-3] != (long *)0x0) {
      (**(code **)(*pplVar4[-3] + 8))();
    }
    pplVar4[-3] = (long *)0x0;
    if (pplVar4[-2] != (long *)0x0) {
      (**(code **)(*pplVar4[-2] + 8))();
    }
    pplVar4[-2] = (long *)0x0;
    if (pplVar4[-1] != (long *)0x0) {
      (**(code **)(*pplVar4[-1] + 8))();
    }
    pplVar4[-1] = (long *)0x0;
    if (*pplVar4 != (long *)0x0) {
      (**(code **)(**pplVar4 + 8))();
    }
    lVar3 = lVar3 + 1;
    *pplVar4 = (long *)0x0;
    pplVar4 = pplVar4 + 4;
  } while (lVar3 != 4);
  *(undefined4 *)(in_x0 + 0x60) = 0;
  return;
}


