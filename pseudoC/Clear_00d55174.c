// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00d55174
// Size: 176 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::CircularList<HACD::TMMEdge>::Clear() */

void HACD::CircularList<HACD::TMMEdge>::Clear(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  void *pvVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(in_x0 + 0x10);
  while( true ) {
    while (1 < uVar4) {
      pvVar3 = *(void **)(in_x0 + 8);
      lVar1 = *(long *)((long)pvVar3 + 0x30);
      lVar2 = *(long *)((long)pvVar3 + 0x38);
      if (*(HeapManager **)(in_x0 + 0x18) == (HeapManager *)0x0) {
        operator_delete(pvVar3);
      }
      else {
        heap_free(*(HeapManager **)(in_x0 + 0x18),pvVar3);
      }
      uVar4 = *(long *)(in_x0 + 0x10) - 1;
      *(long *)(in_x0 + 8) = lVar1;
      *(ulong *)(in_x0 + 0x10) = uVar4;
      *(long *)(lVar1 + 0x38) = lVar2;
      *(long *)(lVar2 + 0x30) = lVar1;
    }
    if (uVar4 != 1) break;
    if (*(HeapManager **)(in_x0 + 0x18) == (HeapManager *)0x0) {
      if (*(void **)(in_x0 + 8) != (void *)0x0) {
        operator_delete(*(void **)(in_x0 + 8));
      }
    }
    else {
      heap_free(*(HeapManager **)(in_x0 + 0x18),*(void **)(in_x0 + 8));
    }
    uVar4 = *(long *)(in_x0 + 0x10) - 1;
    *(undefined8 *)(in_x0 + 8) = 0;
    *(ulong *)(in_x0 + 0x10) = uVar4;
  }
  return;
}


