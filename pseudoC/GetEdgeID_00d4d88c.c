// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetEdgeID
// Entry Point: 00d4d88c
// Size: 188 bytes
// Signature: undefined __thiscall GetEdgeID(Graph * this, long param_1, long param_2)


/* HACD::Graph::GetEdgeID(long, long) const */

undefined8 __thiscall HACD::Graph::GetEdgeID(Graph *this,long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(this + 0x38);
  lVar1 = (*(long *)(this + 0x40) - lVar3 >> 4) * 0x7d6343eb1a1f58d1;
  if (((lVar1 - param_1 != 0 && param_1 <= lVar1) &&
      (*(char *)(lVar3 + param_1 * 0x310 + 0xa8) == '\0')) &&
     (lVar1 = *(long *)(lVar3 + param_1 * 0x310 + 0x98), lVar1 != 0)) {
    lVar3 = lVar3 + param_1 * 0x310;
    lVar2 = *(long *)(this + 0x20);
    plVar4 = (long *)(lVar3 + 0x10);
    if (*(long *)(lVar3 + 0xa0) != 0x10) {
      plVar4 = *(long **)(lVar3 + 0x90);
    }
    do {
      lVar3 = *plVar4;
      if ((*(long *)(lVar2 + lVar3 * 0x30 + 8) == param_2) ||
         (*(long *)(lVar2 + lVar3 * 0x30 + 0x10) == param_2)) {
        return *(undefined8 *)(lVar2 + lVar3 * 0x30);
      }
      lVar1 = lVar1 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar1 != 0);
  }
  return 0xffffffffffffffff;
}


