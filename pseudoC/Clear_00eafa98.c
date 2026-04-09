// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00eafa98
// Size: 384 bytes
// Signature: undefined Clear(void)


/* WARNING: Removing unreachable block (ram,0x00eafb1c) */
/* WARNING: Removing unreachable block (ram,0x00eafc04) */
/* WARNING: Removing unreachable block (ram,0x00eafb90) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::TMMesh::Clear() */

void VHACD::TMMesh::Clear(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  void *pvVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(in_x0 + 0x10);
  do {
    while (1 < uVar4) {
      pvVar3 = *(void **)(in_x0 + 8);
      lVar1 = *(long *)((long)pvVar3 + 0x38);
      lVar2 = *(long *)((long)pvVar3 + 0x40);
      operator_delete(pvVar3);
      uVar4 = *(long *)(in_x0 + 0x10) - 1;
      *(long *)(in_x0 + 8) = lVar1;
      *(ulong *)(in_x0 + 0x10) = uVar4;
      *(long *)(lVar1 + 0x40) = lVar2;
      *(long *)(lVar2 + 0x38) = lVar1;
    }
    while( true ) {
      if (uVar4 != 1) {
        uVar4 = *(ulong *)(in_x0 + 0x20);
        do {
          while (1 < uVar4) {
            pvVar3 = *(void **)(in_x0 + 0x18);
            lVar1 = *(long *)((long)pvVar3 + 0x30);
            lVar2 = *(long *)((long)pvVar3 + 0x38);
            operator_delete(pvVar3);
            uVar4 = *(long *)(in_x0 + 0x20) - 1;
            *(long *)(in_x0 + 0x18) = lVar1;
            *(ulong *)(in_x0 + 0x20) = uVar4;
            *(long *)(lVar1 + 0x38) = lVar2;
            *(long *)(lVar2 + 0x30) = lVar1;
          }
          while( true ) {
            if (uVar4 != 1) {
              uVar4 = *(ulong *)(in_x0 + 0x30);
              do {
                while (1 < uVar4) {
                  pvVar3 = *(void **)(in_x0 + 0x28);
                  lVar1 = *(long *)((long)pvVar3 + 0x40);
                  lVar2 = *(long *)((long)pvVar3 + 0x48);
                  operator_delete(pvVar3);
                  uVar4 = *(long *)(in_x0 + 0x30) - 1;
                  *(long *)(in_x0 + 0x28) = lVar1;
                  *(ulong *)(in_x0 + 0x30) = uVar4;
                  *(long *)(lVar1 + 0x48) = lVar2;
                  *(long *)(lVar2 + 0x40) = lVar1;
                }
                while( true ) {
                  if (uVar4 != 1) {
                    return;
                  }
                  if (*(void **)(in_x0 + 0x28) != (void *)0x0) break;
                  uVar4 = 0;
                  *(undefined8 *)(in_x0 + 0x28) = 0;
                  *(undefined8 *)(in_x0 + 0x30) = 0;
                }
                operator_delete(*(void **)(in_x0 + 0x28));
                uVar4 = *(long *)(in_x0 + 0x30) - 1;
                *(undefined8 *)(in_x0 + 0x28) = 0;
                *(ulong *)(in_x0 + 0x30) = uVar4;
              } while( true );
            }
            if (*(void **)(in_x0 + 0x18) != (void *)0x0) break;
            uVar4 = 0;
            *(undefined8 *)(in_x0 + 0x18) = 0;
            *(undefined8 *)(in_x0 + 0x20) = 0;
          }
          operator_delete(*(void **)(in_x0 + 0x18));
          uVar4 = *(long *)(in_x0 + 0x20) - 1;
          *(undefined8 *)(in_x0 + 0x18) = 0;
          *(ulong *)(in_x0 + 0x20) = uVar4;
        } while( true );
      }
      if (*(void **)(in_x0 + 8) != (void *)0x0) break;
      uVar4 = 0;
      *(undefined8 *)(in_x0 + 8) = 0;
      *(undefined8 *)(in_x0 + 0x10) = 0;
    }
    operator_delete(*(void **)(in_x0 + 8));
    uVar4 = *(long *)(in_x0 + 0x10) - 1;
    *(undefined8 *)(in_x0 + 8) = 0;
    *(ulong *)(in_x0 + 0x10) = uVar4;
  } while( true );
}


