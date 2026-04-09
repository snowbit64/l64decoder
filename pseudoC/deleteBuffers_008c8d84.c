// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteBuffers
// Entry Point: 008c8d84
// Size: 200 bytes
// Signature: undefined deleteBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VertexBufferGeometry::deleteBuffers() */

void VertexBufferGeometry::deleteBuffers(void)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *(long *)(in_x0 + 0x88);
  uVar3 = *(long *)(in_x0 + 0x90) - lVar2;
  if (0 < (int)(uVar3 >> 3)) {
    lVar5 = 0;
    do {
      plVar1 = *(long **)(lVar2 + lVar5 * 8);
      plVar4 = *(long **)(*(long *)(in_x0 + 0xa0) + lVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      lVar2 = *(long *)(in_x0 + 0x88);
      lVar5 = lVar5 + 1;
      uVar3 = *(long *)(in_x0 + 0x90) - lVar2;
    } while (lVar5 < (int)(uVar3 >> 3));
  }
  if (*(long *)(in_x0 + 0x60) != *(long *)(in_x0 + 0x58)) {
    *(long *)(in_x0 + 0x60) = *(long *)(in_x0 + 0x58);
  }
  if (uVar3 != 0) {
    *(long *)(in_x0 + 0x90) = lVar2;
  }
  if (*(long *)(in_x0 + 0xa8) != *(long *)(in_x0 + 0xa0)) {
    *(long *)(in_x0 + 0xa8) = *(long *)(in_x0 + 0xa0);
  }
  if (*(long *)(in_x0 + 0x78) != *(long *)(in_x0 + 0x70)) {
    *(long *)(in_x0 + 0x78) = *(long *)(in_x0 + 0x70);
  }
  return;
}


