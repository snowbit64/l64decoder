// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeMicroChunk
// Entry Point: 00d5b630
// Size: 144 bytes
// Signature: undefined __thiscall removeMicroChunk(MyMicroAllocator * this, MemoryChunk * param_1)


/* HACD::MyMicroAllocator::removeMicroChunk(HACD::MemoryChunk*) */

void __thiscall
HACD::MyMicroAllocator::removeMicroChunk(MyMicroAllocator *this,MemoryChunk *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(this + 0x84c);
  *(undefined8 *)(this + 0x850) = 0;
  if (uVar3 != 0) {
    uVar5 = 0;
    lVar4 = 0x10;
    do {
      if (*(MemoryChunk **)(*(long *)(this + 0x858) + lVar4) == param_1) {
        *(uint *)(this + 0x84c) = uVar3 - 1;
        if (uVar3 - 1 <= (uint)uVar5) {
          return;
        }
        puVar1 = (undefined8 *)(*(long *)(this + 0x858) + lVar4);
        uVar5 = uVar5 + 1;
        puVar1[-1] = puVar1[3];
        puVar1[-2] = puVar1[2];
        puVar1[1] = puVar1[5];
        *puVar1 = puVar1[4];
        if (*(uint *)(this + 0x84c) <= uVar5) {
          return;
        }
        lVar4 = lVar4 + -0x10;
        do {
          uVar5 = uVar5 + 1;
          lVar2 = *(long *)(this + 0x858) + lVar4;
          lVar4 = lVar4 + 0x20;
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x40);
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar2 + 0x58);
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar2 + 0x50);
        } while (uVar5 < *(uint *)(this + 0x84c));
        return;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar3 != uVar5);
  }
  return;
}


