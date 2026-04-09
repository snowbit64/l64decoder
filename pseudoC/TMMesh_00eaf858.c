// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TMMesh
// Entry Point: 00eaf858
// Size: 400 bytes
// Signature: undefined __thiscall ~TMMesh(TMMesh * this)


/* WARNING: Removing unreachable block (ram,0x00eaf8ec) */
/* WARNING: Removing unreachable block (ram,0x00eaf9d4) */
/* WARNING: Removing unreachable block (ram,0x00eaf960) */
/* VHACD::TMMesh::~TMMesh() */

void __thiscall VHACD::TMMesh::~TMMesh(TMMesh *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x30);
  *(undefined ***)this = &PTR__TMMesh_01014508;
  do {
    while (1 < uVar4) {
      pvVar3 = *(void **)(this + 0x28);
      lVar1 = *(long *)((long)pvVar3 + 0x40);
      lVar2 = *(long *)((long)pvVar3 + 0x48);
      operator_delete(pvVar3);
      uVar4 = *(long *)(this + 0x30) - 1;
      *(long *)(this + 0x28) = lVar1;
      *(ulong *)(this + 0x30) = uVar4;
      *(long *)(lVar1 + 0x48) = lVar2;
      *(long *)(lVar2 + 0x40) = lVar1;
    }
    while( true ) {
      if (uVar4 != 1) {
        uVar4 = *(ulong *)(this + 0x20);
        do {
          while (1 < uVar4) {
            pvVar3 = *(void **)(this + 0x18);
            lVar1 = *(long *)((long)pvVar3 + 0x30);
            lVar2 = *(long *)((long)pvVar3 + 0x38);
            operator_delete(pvVar3);
            uVar4 = *(long *)(this + 0x20) - 1;
            *(long *)(this + 0x18) = lVar1;
            *(ulong *)(this + 0x20) = uVar4;
            *(long *)(lVar1 + 0x38) = lVar2;
            *(long *)(lVar2 + 0x30) = lVar1;
          }
          while( true ) {
            if (uVar4 != 1) {
              uVar4 = *(ulong *)(this + 0x10);
              do {
                while (1 < uVar4) {
                  pvVar3 = *(void **)(this + 8);
                  lVar1 = *(long *)((long)pvVar3 + 0x38);
                  lVar2 = *(long *)((long)pvVar3 + 0x40);
                  operator_delete(pvVar3);
                  uVar4 = *(long *)(this + 0x10) - 1;
                  *(long *)(this + 8) = lVar1;
                  *(ulong *)(this + 0x10) = uVar4;
                  *(long *)(lVar1 + 0x40) = lVar2;
                  *(long *)(lVar2 + 0x38) = lVar1;
                }
                while( true ) {
                  if (uVar4 != 1) {
                    return;
                  }
                  if (*(void **)(this + 8) != (void *)0x0) break;
                  uVar4 = 0;
                  *(undefined8 *)(this + 8) = 0;
                  *(undefined8 *)(this + 0x10) = 0;
                }
                operator_delete(*(void **)(this + 8));
                uVar4 = *(long *)(this + 0x10) - 1;
                *(undefined8 *)(this + 8) = 0;
                *(ulong *)(this + 0x10) = uVar4;
              } while( true );
            }
            if (*(void **)(this + 0x18) != (void *)0x0) break;
            uVar4 = 0;
            *(undefined8 *)(this + 0x18) = 0;
            *(undefined8 *)(this + 0x20) = 0;
          }
          operator_delete(*(void **)(this + 0x18));
          uVar4 = *(long *)(this + 0x20) - 1;
          *(undefined8 *)(this + 0x18) = 0;
          *(ulong *)(this + 0x20) = uVar4;
        } while( true );
      }
      if (*(void **)(this + 0x28) != (void *)0x0) break;
      uVar4 = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    operator_delete(*(void **)(this + 0x28));
    uVar4 = *(long *)(this + 0x30) - 1;
    *(undefined8 *)(this + 0x28) = 0;
    *(ulong *)(this + 0x30) = uVar4;
  } while( true );
}


