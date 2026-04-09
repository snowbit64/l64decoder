// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsBoundaryEdge
// Entry Point: 00d577d0
// Size: 176 bytes
// Signature: undefined __thiscall IsBoundaryEdge(MeshDecimator * this, long param_1, long param_2)


/* HACD::MeshDecimator::IsBoundaryEdge(long, long) const */

long __thiscall HACD::MeshDecimator::IsBoundaryEdge(MeshDecimator *this,long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar8 = *(long *)(this + 0x40);
  lVar5 = *(long *)(lVar8 + param_1 * 0x188 + 0x120);
  if (lVar5 != 0) {
    lVar7 = lVar8 + param_1 * 0x188;
    lVar6 = *(long *)(lVar8 + param_2 * 0x188 + 0x120);
    lVar1 = lVar7 + 0x98;
    if (*(long *)(lVar7 + 0x128) != 0x10) {
      lVar1 = *(long *)(lVar7 + 0x118);
    }
    if (lVar6 != 0) {
      lVar8 = lVar8 + param_2 * 0x188;
      lVar7 = 0;
      lVar4 = -1;
      plVar2 = (long *)(lVar8 + 0x98);
      if (*(long *)(lVar8 + 0x128) != 0x10) {
        plVar2 = *(long **)(lVar8 + 0x118);
      }
      do {
        lVar9 = *(long *)(lVar1 + lVar7 * 8);
        plVar10 = plVar2;
        lVar8 = lVar6;
        do {
          if ((lVar9 == *plVar10) && (bVar3 = lVar4 != -1, lVar4 = lVar9, bVar3)) {
            return -1;
          }
          lVar8 = lVar8 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar8 != 0);
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar5) {
          return lVar4;
        }
      } while( true );
    }
  }
  return -1;
}


