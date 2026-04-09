// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsBoundaryVertex
// Entry Point: 00d57880
// Size: 288 bytes
// Signature: undefined __thiscall IsBoundaryVertex(MeshDecimator * this, long param_1)


/* HACD::MeshDecimator::IsBoundaryVertex(long) const */

bool __thiscall HACD::MeshDecimator::IsBoundaryVertex(MeshDecimator *this,long param_1)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar8 = *(long *)(this + 0x40);
  uVar9 = *(ulong *)(lVar8 + param_1 * 0x188 + 0x88);
  if (uVar9 == 0) {
    return false;
  }
  uVar10 = 0;
  lVar11 = lVar8 + param_1 * 0x188;
  if (*(long *)(lVar11 + 0x90) != 0x10) {
    lVar11 = *(long *)(lVar11 + 0x80);
  }
  bVar1 = true;
  do {
    plVar3 = (long *)(*(long *)(this + 0x58) + *(long *)(lVar11 + uVar10 * 8) * 0x38);
    lVar13 = *plVar3;
    lVar12 = *(long *)(lVar8 + lVar13 * 0x188 + 0x120);
    if (lVar12 != 0) {
      lVar14 = lVar8 + lVar13 * 0x188;
      lVar4 = plVar3[1];
      lVar15 = *(long *)(lVar8 + lVar4 * 0x188 + 0x120);
      lVar13 = lVar14 + 0x98;
      if (*(long *)(lVar14 + 0x128) != 0x10) {
        lVar13 = *(long *)(lVar14 + 0x118);
      }
      if (lVar15 != 0) {
        lVar5 = lVar8 + lVar4 * 0x188;
        lVar4 = 0;
        lVar14 = -1;
        plVar3 = (long *)(lVar5 + 0x98);
        if (*(long *)(lVar5 + 0x128) != 0x10) {
          plVar3 = *(long **)(lVar5 + 0x118);
        }
        do {
          lVar6 = *(long *)(lVar13 + lVar4 * 8);
          plVar7 = plVar3;
          lVar5 = lVar15;
          do {
            if ((lVar6 == *plVar7) && (bVar2 = lVar14 != -1, lVar14 = lVar6, bVar2))
            goto LAB_00d578c8;
            lVar5 = lVar5 + -1;
            plVar7 = plVar7 + 1;
          } while (lVar5 != 0);
          lVar4 = lVar4 + 1;
        } while (lVar4 != lVar12);
        if (lVar14 != -1) {
          return bVar1;
        }
      }
    }
LAB_00d578c8:
    uVar10 = uVar10 + 1;
    bVar1 = uVar10 < uVar9;
    if (uVar10 == uVar9) {
      return bVar1;
    }
  } while( true );
}


