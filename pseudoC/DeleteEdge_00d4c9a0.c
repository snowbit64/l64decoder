// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteEdge
// Entry Point: 00d4c9a0
// Size: 128 bytes
// Signature: undefined __thiscall DeleteEdge(GraphVertex * this, long param_1)


/* HACD::GraphVertex::DeleteEdge(long) */

undefined8 __thiscall HACD::GraphVertex::DeleteEdge(GraphVertex *this,long param_1)

{
  ulong uVar1;
  GraphVertex *pGVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0x98);
  pGVar2 = this + 0x10;
  if (*(long *)(this + 0xa0) != 0x10) {
    pGVar2 = *(GraphVertex **)(this + 0x90);
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 1;
      if (*(long *)(pGVar2 + uVar4 * 8) == param_1) {
        if (uVar1 < uVar3) {
          do {
            uVar1 = uVar4 + 2;
            *(undefined8 *)(pGVar2 + uVar4 * 8) = *(undefined8 *)((long)(pGVar2 + uVar4 * 8) + 8);
            uVar4 = uVar4 + 1;
            uVar3 = *(ulong *)(this + 0x98);
          } while (uVar1 < uVar3);
        }
        *(ulong *)(this + 0x98) = uVar3 - 1;
        return 1;
      }
      uVar4 = uVar1;
    } while (uVar3 != uVar1);
  }
  return 0;
}


