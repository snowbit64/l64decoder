// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddEdge
// Entry Point: 00d4cd94
// Size: 880 bytes
// Signature: undefined __thiscall AddEdge(Graph * this, long param_1, long param_2)


/* HACD::Graph::AddEdge(long, long) */

long __thiscall HACD::Graph::AddEdge(Graph *this,long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint7 uStack_6f;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x20);
  puVar17 = *(undefined8 **)(this + 0x28);
  lVar4 = ((long)puVar17 - (long)puVar2) / 0x30;
  if (puVar17 < *(undefined8 **)(this + 0x30)) {
    puVar17[1] = 0xffffffffffffffff;
    *puVar17 = 0xffffffffffffffff;
    puVar17[3] = 0;
    puVar17[2] = 0xffffffffffffffff;
    puVar17[5] = (ulong)uStack_6f << 8;
    puVar17[4] = 0;
    *(undefined8 **)(this + 0x28) = puVar17 + 6;
  }
  else {
    uVar10 = lVar4 + 1;
    if (0x555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (long)*(undefined8 **)(this + 0x30) - (long)puVar2 >> 4;
    uVar9 = lVar19 * 0x5555555555555556;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
      uVar10 = 0x555555555555555;
    }
    if (uVar10 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar10 * 0x30);
    }
    puVar11 = (undefined8 *)((long)pvVar5 + lVar4 * 0x30);
    puVar1 = puVar11 + 6;
    puVar11[1] = 0xffffffffffffffff;
    *puVar11 = 0xffffffffffffffff;
    puVar11[3] = 0;
    puVar11[2] = 0xffffffffffffffff;
    puVar11[5] = (ulong)uStack_6f << 8;
    puVar11[4] = 0;
    puVar12 = puVar11;
    if (puVar17 != puVar2) {
      do {
        uVar24 = puVar17[-3];
        uVar23 = puVar17[-4];
        uVar22 = puVar17[-2];
        puVar13 = puVar17 + -6;
        uVar26 = puVar17[-5];
        uVar25 = puVar17[-6];
        puVar12[-1] = puVar17[-1];
        puVar12[-2] = uVar22;
        puVar11 = puVar12 + -6;
        puVar12[-5] = uVar26;
        puVar12[-6] = uVar25;
        puVar12[-3] = uVar24;
        puVar12[-4] = uVar23;
        puVar12 = puVar11;
        puVar17 = puVar13;
      } while (puVar13 != puVar2);
      puVar17 = *(undefined8 **)(this + 0x20);
    }
    *(undefined8 **)(this + 0x20) = puVar11;
    *(undefined8 **)(this + 0x28) = puVar1;
    *(void **)(this + 0x30) = (void *)((long)pvVar5 + uVar10 * 0x30);
    if (puVar17 != (undefined8 *)0x0) {
      operator_delete(puVar17);
    }
  }
  plVar8 = (long *)(*(long *)(this + 0x20) + lVar4 * 0x30);
  *plVar8 = lVar4;
  plVar8[1] = param_1;
  plVar8[2] = param_2;
  lVar19 = *(long *)(this + 0x38);
  lVar20 = lVar19 + param_1 * 0x310;
  plVar16 = *(long **)(lVar20 + 0x90);
  plVar14 = (long *)(lVar20 + 0x10);
  uVar15 = *(ulong *)(lVar20 + 0xa0);
  puVar18 = (ulong *)(lVar20 + 0x98);
  uVar9 = *puVar18;
  uVar10 = uVar9;
  plVar6 = plVar14;
  plVar8 = plVar14;
  if (uVar15 != 0x10) {
    plVar6 = plVar16;
    plVar8 = plVar16;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    if (*plVar6 == lVar4) goto LAB_00d4cff8;
    plVar6 = plVar6 + 1;
  }
  if (uVar9 == uVar15) {
    uVar21 = uVar15 << 1;
    uVar10 = uVar15 << 4;
    if (uVar21 >> 0x3d != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    plVar6 = (long *)operator_new__(uVar10);
    memcpy(plVar6,plVar8,uVar15 << 3);
    uVar9 = uVar15;
    if (plVar16 != (long *)0x0) {
      operator_delete__(plVar16);
      uVar9 = *puVar18;
      lVar19 = *(long *)(this + 0x38);
    }
    *(long **)(lVar20 + 0x90) = plVar6;
    *(ulong *)(lVar20 + 0xa0) = uVar21;
    plVar16 = plVar6;
    uVar15 = uVar21;
  }
  if (uVar15 != 0x10) {
    plVar14 = plVar16;
  }
  *puVar18 = uVar9 + 1;
  plVar14[uVar9] = lVar4;
LAB_00d4cff8:
  lVar19 = lVar19 + param_2 * 0x310;
  puVar18 = (ulong *)(lVar19 + 0x98);
  uVar9 = *puVar18;
  plVar14 = (long *)(lVar19 + 0x10);
  uVar15 = *(ulong *)(lVar19 + 0xa0);
  plVar16 = *(long **)(lVar19 + 0x90);
  uVar10 = uVar9;
  plVar6 = plVar14;
  plVar8 = plVar14;
  if (uVar15 != 0x10) {
    plVar6 = plVar16;
    plVar8 = plVar16;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    if (*plVar6 == lVar4) goto LAB_00d4d0ac;
    plVar6 = plVar6 + 1;
  }
  if (uVar9 == uVar15) {
    uVar21 = uVar15 << 1;
    uVar10 = uVar15 << 4;
    if (uVar21 >> 0x3d != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    plVar6 = (long *)operator_new__(uVar10);
    memcpy(plVar6,plVar8,uVar15 << 3);
    uVar9 = uVar15;
    if (plVar16 != (long *)0x0) {
      operator_delete__(plVar16);
      uVar9 = *puVar18;
    }
    *(long **)(lVar19 + 0x90) = plVar6;
    *(ulong *)(lVar19 + 0xa0) = uVar21;
    plVar16 = plVar6;
    uVar15 = uVar21;
  }
  if (uVar15 != 0x10) {
    plVar14 = plVar16;
  }
  *puVar18 = uVar9 + 1;
  plVar14[uVar9] = lVar4;
LAB_00d4d0ac:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}


