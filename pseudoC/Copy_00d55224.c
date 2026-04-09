// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Copy
// Entry Point: 00d55224
// Size: 1228 bytes
// Signature: undefined __thiscall Copy(TMMesh * this, TMMesh * param_1)


/* HACD::TMMesh::Copy(HACD::TMMesh&) */

void __thiscall HACD::TMMesh::Copy(TMMesh *this,TMMesh *param_1)

{
  CircularList<HACD::TMMEdge> *this_00;
  CircularList *pCVar1;
  ulong uVar2;
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
  TMMTriangle *pTVar13;
  TMMVertex *pTVar14;
  ulong uVar15;
  ulong uVar16;
  
  CircularList<HACD::TMMVertex>::Clear();
  this_00 = (CircularList<HACD::TMMEdge> *)(this + 0x28);
  CircularList<HACD::TMMEdge>::Clear();
  do {
    uVar2 = CircularList<HACD::TMMTriangle>::Delete();
  } while ((uVar2 & 1) != 0);
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar15 = *(ulong *)(param_1 + 0x38);
  uVar16 = *(ulong *)(param_1 + 0x58);
  if (uVar2 != 0) {
    uVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(ulong *)(lVar7 + 0x20) = uVar6;
      lVar7 = *(long *)(lVar7 + 0x38);
      uVar6 = uVar6 + 1;
      *(long *)(param_1 + 0x10) = lVar7;
    } while (uVar2 != uVar6);
  }
  if (uVar15 != 0) {
    uVar6 = 0;
    puVar8 = *(ulong **)(param_1 + 0x30);
    do {
      *puVar8 = uVar6;
      puVar8 = (ulong *)puVar8[6];
      uVar6 = uVar6 + 1;
      *(ulong **)(param_1 + 0x30) = puVar8;
    } while (uVar15 != uVar6);
  }
  pCVar1 = (CircularList *)(param_1 + 0x28);
  if (uVar16 != 0) {
    uVar6 = 0;
    puVar8 = *(ulong **)(param_1 + 0x50);
    do {
      *puVar8 = uVar6;
      puVar8 = (ulong *)puVar8[0x1b];
      uVar6 = uVar6 + 1;
      *(ulong **)(param_1 + 0x50) = puVar8;
    } while (uVar16 != uVar6);
  }
  if (param_1 == this) {
    CircularList<HACD::TMMEdge>::operator=(this_00,pCVar1);
  }
  else {
    CircularList<HACD::TMMVertex>::Clear();
    lVar7 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    if (lVar7 == 0) {
      CircularList<HACD::TMMEdge>::operator=(this_00,pCVar1);
    }
    else {
      pTVar14 = *(TMMVertex **)(param_1 + 0x10);
      do {
        pTVar14 = *(TMMVertex **)(pTVar14 + 0x38);
        CircularList<HACD::TMMVertex>::Add((CircularList<HACD::TMMVertex> *)(this + 8),pTVar14);
      } while (pTVar14 != *(TMMVertex **)(param_1 + 0x10));
      CircularList<HACD::TMMEdge>::operator=(this_00,pCVar1);
      if (param_1 == this) goto LAB_00d55394;
    }
    do {
      uVar6 = CircularList<HACD::TMMTriangle>::Delete();
    } while ((uVar6 & 1) != 0);
    lVar7 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    if (lVar7 != 0) {
      pTVar13 = *(TMMTriangle **)(param_1 + 0x50);
      do {
        pTVar13 = *(TMMTriangle **)(pTVar13 + 0xd8);
        CircularList<HACD::TMMTriangle>::Add
                  ((CircularList<HACD::TMMTriangle> *)(this + 0x48),pTVar13);
      } while (pTVar13 != *(TMMTriangle **)(param_1 + 0x50));
    }
  }
LAB_00d55394:
  uVar6 = uVar2 << 3;
  if (uVar2 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  plVar3 = (long *)operator_new__(uVar6);
  uVar6 = uVar15 << 3;
  if (uVar15 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar4 = (long *)operator_new__(uVar6);
  uVar6 = uVar16 << 3;
  if (uVar16 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar5 = (long *)operator_new__(uVar6);
  if (uVar2 != 0) {
    lVar7 = *(long *)(this + 0x10);
    plVar12 = plVar3;
    uVar6 = uVar2;
    if (*(long *)(this + 0x18) == 0) {
      if (uVar2 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar2 & 0xfffffffffffffffc;
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
        if (uVar2 == uVar9) goto LAB_00d55450;
      }
      lVar10 = uVar2 - uVar9;
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
        *(long *)(this + 0x10) = lVar7;
        plVar12 = plVar12 + 1;
      } while (uVar6 != 0);
    }
  }
LAB_00d55450:
  if (uVar15 != 0) {
    lVar7 = *(long *)(this + 0x30);
    plVar12 = plVar4;
    uVar6 = uVar15;
    if (*(long *)(this + 0x38) == 0) {
      if (uVar15 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar15 & 0xfffffffffffffffc;
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
        if (uVar15 == uVar9) goto LAB_00d554c8;
      }
      lVar10 = uVar15 - uVar9;
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
        *(long *)(this + 0x30) = lVar7;
        plVar12 = plVar12 + 1;
      } while (uVar6 != 0);
    }
  }
LAB_00d554c8:
  plVar12 = plVar3;
  if (uVar16 != 0) {
    lVar7 = *(long *)(this + 0x50);
    plVar11 = plVar5;
    uVar6 = uVar16;
    if (*(long *)(this + 0x58) == 0) {
      if (uVar16 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar16 & 0xfffffffffffffffc;
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
        if (uVar16 == uVar9) goto joined_r0x00d55540;
      }
      lVar10 = uVar16 - uVar9;
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
        lVar7 = *(long *)(lVar7 + 0xd8);
        uVar6 = uVar6 - 1;
        *(long *)(this + 0x50) = lVar7;
        plVar11 = plVar11 + 1;
      } while (uVar6 != 0);
    }
  }
joined_r0x00d55540:
  for (; uVar6 = uVar15, plVar11 = plVar4, uVar2 != 0; uVar2 = uVar2 - 1) {
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
    if (uVar16 != 0) {
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
  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
    if (uVar15 != 0) {
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


