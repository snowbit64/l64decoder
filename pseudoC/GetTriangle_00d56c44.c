// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetTriangle
// Entry Point: 00d56c44
// Size: 224 bytes
// Signature: undefined __thiscall GetTriangle(MeshDecimator * this, long param_1, long param_2, long param_3)


/* HACD::MeshDecimator::GetTriangle(long, long, long) const */

long __thiscall
HACD::MeshDecimator::GetTriangle(MeshDecimator *this,long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = *(long *)(*(long *)(this + 0x40) + param_1 * 0x188 + 0x120);
  if (lVar2 != 0) {
    lVar3 = *(long *)(this + 0x40) + param_1 * 0x188;
    plVar4 = (long *)(lVar3 + 0x98);
    if (*(long *)(lVar3 + 0x128) != 0x10) {
      plVar4 = *(long **)(lVar3 + 0x118);
    }
    do {
      plVar5 = (long *)(*(long *)this + *plVar4 * 0x18);
      lVar3 = *plVar5;
      lVar1 = plVar5[1];
      lVar6 = plVar5[2];
      if ((((((lVar3 == param_1 && lVar1 == param_2) && lVar6 == param_3) ||
            ((lVar3 == param_1 && lVar1 == param_3) && lVar6 == param_2)) ||
           ((lVar3 == param_2 && lVar1 == param_1) && lVar6 == param_3)) ||
          ((((lVar3 == param_2 && (lVar1 == param_3)) && (lVar6 == param_1)) ||
           (((lVar3 == param_3 && (lVar1 == param_2)) && (lVar6 == param_1)))))) ||
         (((lVar3 == param_3 && (lVar1 == param_1)) && (lVar6 == param_2)))) {
        return *plVar4;
      }
      lVar2 = lVar2 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar2 != 0);
  }
  return -1;
}


