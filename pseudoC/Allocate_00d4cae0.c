// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Allocate
// Entry Point: 00d4cae0
// Size: 356 bytes
// Signature: undefined __thiscall Allocate(Graph * this, ulong param_1, ulong param_2)


/* HACD::Graph::Allocate(unsigned long, unsigned long) */

void __thiscall HACD::Graph::Allocate(Graph *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong *puVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  ulong *puVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  pvVar11 = *(void **)(this + 0x20);
  *(ulong *)(this + 0x10) = param_1;
  if ((ulong)((*(long *)(this + 0x30) - (long)pvVar11 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar12 = *(void **)(this + 0x28);
    pvVar2 = operator_new(param_2 * 0x30);
    pvVar3 = (void *)((long)pvVar2 + (((long)pvVar12 - (long)pvVar11) / 0x30) * 0x30);
    pvVar6 = pvVar3;
    pvVar8 = pvVar3;
    if ((long)pvVar12 - (long)pvVar11 != 0) {
      do {
        uVar15 = *(undefined8 *)((long)pvVar12 + -0x20);
        uVar14 = *(undefined8 *)((long)pvVar12 + -8);
        uVar13 = *(undefined8 *)((long)pvVar12 + -0x10);
        pvVar8 = (void *)((long)pvVar6 + -0x30);
        pvVar10 = (void *)((long)pvVar12 + -0x30);
        uVar17 = *(undefined8 *)((long)pvVar12 + -0x28);
        uVar16 = *(undefined8 *)((long)pvVar12 + -0x30);
        *(undefined8 *)((long)pvVar6 + -0x18) = *(undefined8 *)((long)pvVar12 + -0x18);
        *(undefined8 *)((long)pvVar6 + -0x20) = uVar15;
        *(undefined8 *)((long)pvVar6 + -8) = uVar14;
        *(undefined8 *)((long)pvVar6 + -0x10) = uVar13;
        *(undefined8 *)((long)pvVar6 + -0x28) = uVar17;
        *(undefined8 *)((long)pvVar6 + -0x30) = uVar16;
        pvVar6 = pvVar8;
        pvVar12 = pvVar10;
      } while (pvVar10 != pvVar11);
    }
    *(void **)(this + 0x20) = pvVar8;
    *(void **)(this + 0x28) = pvVar3;
    *(void **)(this + 0x30) = (void *)((long)pvVar2 + param_2 * 0x30);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  std::__ndk1::vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>>::resize
            ((vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *)(this + 0x38),
             param_1);
  if (param_1 != 0) {
    puVar5 = *(ulong **)(this + 0x38);
    if (param_1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar7 = 0;
      uVar4 = param_1 & 0xfffffffffffffffe;
      puVar9 = puVar5;
      do {
        uVar1 = uVar7 + 1;
        *puVar9 = uVar7;
        uVar7 = uVar7 + 2;
        puVar9[0x62] = uVar1;
        puVar9 = puVar9 + 0xc4;
      } while (uVar7 != uVar4);
      if (uVar4 == param_1) {
        return;
      }
    }
    puVar5 = puVar5 + uVar4 * 0x62;
    do {
      *puVar5 = uVar4;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x62;
    } while (param_1 != uVar4);
  }
  return;
}


