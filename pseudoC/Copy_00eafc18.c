// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Copy
// Entry Point: 00eafc18
// Size: 1068 bytes
// Signature: undefined __thiscall Copy(TMMesh * this, TMMesh * param_1)


/* VHACD::TMMesh::Copy(VHACD::TMMesh&) */

void __thiscall VHACD::TMMesh::Copy(TMMesh *this,TMMesh *param_1)

{
  ulong **ppuVar1;
  ulong **ppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  Clear();
  uVar15 = *(ulong *)(param_1 + 0x10);
  plVar3 = (long *)(param_1 + 8);
  uVar13 = *(ulong *)(param_1 + 0x20);
  uVar14 = *(ulong *)(param_1 + 0x30);
  if (uVar15 != 0) {
    uVar6 = 0;
    lVar7 = *plVar3;
    do {
      *(ulong *)(lVar7 + 0x20) = uVar6;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar6 = uVar6 + 1;
      *plVar3 = lVar7;
    } while (uVar15 != uVar6);
  }
  ppuVar1 = (ulong **)(param_1 + 0x18);
  if (uVar13 != 0) {
    uVar6 = 0;
    puVar8 = *ppuVar1;
    do {
      *puVar8 = uVar6;
      puVar8 = (ulong *)puVar8[6];
      uVar6 = uVar6 + 1;
      *ppuVar1 = puVar8;
    } while (uVar13 != uVar6);
  }
  ppuVar2 = (ulong **)(param_1 + 0x28);
  if (uVar14 != 0) {
    uVar6 = 0;
    puVar8 = *ppuVar2;
    do {
      *puVar8 = uVar6;
      puVar8 = (ulong *)puVar8[8];
      uVar6 = uVar6 + 1;
      *ppuVar2 = puVar8;
    } while (uVar14 != uVar6);
  }
  CircularList<VHACD::TMMVertex>::operator=
            ((CircularList<VHACD::TMMVertex> *)(this + 8),(CircularList *)plVar3);
  CircularList<VHACD::TMMEdge>::operator=
            ((CircularList<VHACD::TMMEdge> *)(this + 0x18),(CircularList *)ppuVar1);
  CircularList<VHACD::TMMTriangle>::operator=
            ((CircularList<VHACD::TMMTriangle> *)(this + 0x28),(CircularList *)ppuVar2);
  uVar6 = uVar15 << 3;
  if (uVar15 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar3 = (long *)operator_new__(uVar6);
  uVar6 = uVar13 << 3;
  if (uVar13 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar4 = (long *)operator_new__(uVar6);
  uVar6 = uVar14 << 3;
  if (uVar14 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar5 = (long *)operator_new__(uVar6);
  if (uVar15 != 0) {
    lVar7 = *(long *)(this + 8);
    plVar12 = plVar3;
    uVar6 = uVar15;
    if (*(long *)(this + 0x10) == 0) {
      if (uVar15 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar15 & 0xfffffffffffffffc;
        plVar12 = plVar3 + 2;
        uVar6 = uVar9;
        do {
          plVar12[-1] = lVar7;
          plVar12[-2] = lVar7;
          plVar12[1] = lVar7;
          *plVar12 = lVar7;
          plVar12 = plVar12 + 4;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (uVar15 == uVar9) goto LAB_00eafda4;
      }
      lVar10 = uVar15 - uVar9;
      plVar12 = plVar3 + uVar9;
      do {
        lVar10 = lVar10 + -1;
        *plVar12 = lVar7;
        plVar12 = plVar12 + 1;
      } while (lVar10 != 0);
    }
    else {
      do {
        *plVar12 = lVar7;
        lVar7 = *(long *)(lVar7 + 0x38);
        uVar6 = uVar6 - 1;
        *(long *)(this + 8) = lVar7;
        plVar12 = plVar12 + 1;
      } while (uVar6 != 0);
    }
  }
LAB_00eafda4:
  if (uVar13 != 0) {
    lVar7 = *(long *)(this + 0x18);
    plVar12 = plVar4;
    uVar6 = uVar13;
    if (*(long *)(this + 0x20) == 0) {
      if (uVar13 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar13 & 0xfffffffffffffffc;
        plVar12 = plVar4 + 2;
        uVar6 = uVar9;
        do {
          plVar12[-1] = lVar7;
          plVar12[-2] = lVar7;
          plVar12[1] = lVar7;
          *plVar12 = lVar7;
          plVar12 = plVar12 + 4;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (uVar13 == uVar9) goto LAB_00eafe1c;
      }
      lVar10 = uVar13 - uVar9;
      plVar12 = plVar4 + uVar9;
      do {
        lVar10 = lVar10 + -1;
        *plVar12 = lVar7;
        plVar12 = plVar12 + 1;
      } while (lVar10 != 0);
    }
    else {
      do {
        *plVar12 = lVar7;
        lVar7 = *(long *)(lVar7 + 0x30);
        uVar6 = uVar6 - 1;
        *(long *)(this + 0x18) = lVar7;
        plVar12 = plVar12 + 1;
      } while (uVar6 != 0);
    }
  }
LAB_00eafe1c:
  plVar12 = plVar3;
  if (uVar14 != 0) {
    lVar7 = *(long *)(this + 0x28);
    plVar11 = plVar5;
    uVar6 = uVar14;
    if (*(long *)(this + 0x30) == 0) {
      if (uVar14 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar14 & 0xfffffffffffffffc;
        plVar11 = plVar5 + 2;
        uVar6 = uVar9;
        do {
          plVar11[-1] = lVar7;
          plVar11[-2] = lVar7;
          plVar11[1] = lVar7;
          *plVar11 = lVar7;
          plVar11 = plVar11 + 4;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (uVar14 == uVar9) goto joined_r0x00eafe94;
      }
      lVar10 = uVar14 - uVar9;
      plVar11 = plVar5 + uVar9;
      do {
        lVar10 = lVar10 + -1;
        *plVar11 = lVar7;
        plVar11 = plVar11 + 1;
      } while (lVar10 != 0);
    }
    else {
      do {
        *plVar11 = lVar7;
        lVar7 = *(long *)(lVar7 + 0x40);
        uVar6 = uVar6 - 1;
        *(long *)(this + 0x28) = lVar7;
        plVar11 = plVar11 + 1;
      } while (uVar6 != 0);
    }
  }
joined_r0x00eafe94:
  for (; uVar6 = uVar13, plVar11 = plVar4, uVar15 != 0; uVar15 = uVar15 - 1) {
    plVar11 = *(long **)(*plVar12 + 0x28);
    if (plVar11 != (long *)0x0) {
      *(long *)(*plVar12 + 0x28) = plVar4[*plVar11];
    }
    plVar12 = plVar12 + 1;
  }
  for (; plVar12 = plVar5, uVar6 != 0; uVar6 = uVar6 - 1) {
    plVar12 = *(long **)(*plVar11 + 0x28);
    if (plVar12 != (long *)0x0) {
      *(long *)(*plVar11 + 0x28) = plVar5[*plVar12];
    }
    if (uVar14 != 0) {
      lVar7 = *plVar11;
      if (*(long **)(lVar7 + 8) != (long *)0x0) {
        *(long *)(lVar7 + 8) = plVar5[**(long **)(lVar7 + 8)];
        lVar7 = *plVar11;
      }
      if (*(long **)(lVar7 + 0x10) != (long *)0x0) {
        *(long *)(lVar7 + 0x10) = plVar5[**(long **)(lVar7 + 0x10)];
      }
    }
    lVar7 = *plVar11;
    if (*(long *)(lVar7 + 0x18) != 0) {
      *(long *)(lVar7 + 0x18) = plVar3[*(long *)(*(long *)(lVar7 + 0x18) + 0x20)];
      lVar7 = *plVar11;
    }
    if (*(long *)(lVar7 + 0x20) != 0) {
      *(long *)(lVar7 + 0x20) = plVar3[*(long *)(*(long *)(lVar7 + 0x20) + 0x20)];
    }
    plVar11 = plVar11 + 1;
  }
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    if (uVar13 != 0) {
      lVar7 = *plVar12;
      if (*(long **)(lVar7 + 8) != (long *)0x0) {
        *(long *)(lVar7 + 8) = plVar4[**(long **)(lVar7 + 8)];
        lVar7 = *plVar12;
      }
      if (*(long **)(lVar7 + 0x10) != (long *)0x0) {
        *(long *)(lVar7 + 0x10) = plVar4[**(long **)(lVar7 + 0x10)];
        lVar7 = *plVar12;
      }
      if (*(long **)(lVar7 + 0x18) != (long *)0x0) {
        *(long *)(lVar7 + 0x18) = plVar4[**(long **)(lVar7 + 0x18)];
      }
    }
    lVar7 = *plVar12;
    if (*(long *)(lVar7 + 0x20) != 0) {
      *(long *)(lVar7 + 0x20) = plVar3[*(long *)(*(long *)(lVar7 + 0x20) + 0x20)];
      lVar7 = *plVar12;
    }
    if (*(long *)(lVar7 + 0x28) != 0) {
      *(long *)(lVar7 + 0x28) = plVar3[*(long *)(*(long *)(lVar7 + 0x28) + 0x20)];
      lVar7 = *plVar12;
    }
    if (*(long *)(lVar7 + 0x30) != 0) {
      *(long *)(lVar7 + 0x30) = plVar3[*(long *)(*(long *)(lVar7 + 0x30) + 0x20)];
    }
    plVar12 = plVar12 + 1;
  }
  operator_delete__(plVar3);
  operator_delete__(plVar4);
  operator_delete__(plVar5);
  return;
}


