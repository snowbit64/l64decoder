// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetEdge
// Entry Point: 00d56bb8
// Size: 140 bytes
// Signature: undefined __thiscall GetEdge(MeshDecimator * this, long param_1, long param_2)


/* HACD::MeshDecimator::GetEdge(long, long) const */

long __thiscall HACD::MeshDecimator::GetEdge(MeshDecimator *this,long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(this + 0x40) + param_1 * 0x188 + 0x88);
  if (lVar2 != 0) {
    plVar4 = (long *)(*(long *)(this + 0x40) + param_1 * 0x188);
    lVar3 = *(long *)(this + 0x58);
    if (plVar4[0x12] != 0x10) {
      plVar4 = (long *)plVar4[0x10];
    }
    do {
      lVar1 = *plVar4;
      lVar5 = *(long *)(lVar3 + lVar1 * 0x38);
      if (((lVar5 == param_1) && (*(long *)(lVar3 + lVar1 * 0x38 + 8) == param_2)) ||
         ((lVar5 == param_2 && (*(long *)(lVar3 + lVar1 * 0x38 + 8) == param_1)))) {
        return lVar1;
      }
      lVar2 = lVar2 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar2 != 0);
  }
  return -1;
}


