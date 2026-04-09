// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VertexBufferPool
// Entry Point: 008e3e50
// Size: 140 bytes
// Signature: undefined __thiscall ~VertexBufferPool(VertexBufferPool * this)


/* VertexBufferPool::~VertexBufferPool() */

void __thiscall VertexBufferPool::~VertexBufferPool(VertexBufferPool *this)

{
  uint uVar1;
  long lVar2;
  VertexBufferPool *pVVar3;
  ulong uVar4;
  
  lVar2 = 0;
  pVVar3 = this + 8;
  do {
    uVar1 = *(uint *)(this + lVar2 * 0x408 + 0x408);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        if (*(long **)(pVVar3 + uVar4 * 8) != (long *)0x0) {
          (**(code **)(**(long **)(pVVar3 + uVar4 * 8) + 8))();
          uVar1 = *(uint *)(this + lVar2 * 0x408 + 0x408);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    lVar2 = lVar2 + 1;
    pVVar3 = pVVar3 + 0x408;
  } while (lVar2 != 0xf);
  return;
}


