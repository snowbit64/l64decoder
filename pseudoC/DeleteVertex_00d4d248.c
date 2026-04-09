// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteVertex
// Entry Point: 00d4d248
// Size: 388 bytes
// Signature: undefined __thiscall DeleteVertex(Graph * this, long param_1)


/* HACD::Graph::DeleteVertex(long) */

bool __thiscall HACD::Graph::DeleteVertex(Graph *this,long param_1)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void **ppvVar8;
  
  lVar7 = *(long *)(this + 0x38);
  lVar4 = (*(long *)(this + 0x40) - lVar7 >> 4) * 0x7d6343eb1a1f58d1;
  if (lVar4 - param_1 != 0 && param_1 <= lVar4) {
    lVar6 = lVar7 + param_1 * 0x310;
    pvVar1 = *(void **)(lVar6 + 0x90);
    *(undefined *)(lVar6 + 0xa8) = 1;
    *(undefined8 *)(lVar6 + 0x98) = 0;
    lVar5 = lVar7;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      lVar5 = *(long *)(this + 0x38);
    }
    *(void **)(lVar6 + 0x90) = (void *)0x0;
    lVar6 = lVar5 + param_1 * 0x310;
    ppvVar8 = (void **)(lVar6 + 0xb0);
    pvVar1 = *ppvVar8;
    *(undefined8 *)(lVar7 + param_1 * 0x310 + 0xa0) = 0x10;
    if (pvVar1 != (void *)0x0) {
      *(void **)(lVar5 + param_1 * 0x310 + 0xb8) = pvVar1;
      operator_delete(pvVar1);
      *ppvVar8 = (void *)0x0;
      *(undefined8 *)(lVar6 + 0xb8) = 0;
      *(undefined8 *)(lVar6 + 0xc0) = 0;
    }
    *ppvVar8 = (void *)0x0;
    *(undefined8 *)(lVar6 + 0xb8) = 0;
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    lVar7 = *(long *)(this + 0x38);
    plVar2 = *(long **)(lVar7 + param_1 * 0x310 + 0x270);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      lVar7 = *(long *)(this + 0x38);
    }
    lVar6 = lVar7 + param_1 * 0x310;
    *(undefined8 *)(lVar6 + 0x250) = 0;
    lVar5 = lVar7;
    if (*(long *)(lVar6 + 0x248) != 0) {
      operator_delete__((void *)(*(long *)(lVar6 + 0x248) + -8));
      lVar5 = *(long *)(this + 0x38);
    }
    *(undefined8 *)(lVar6 + 0x248) = 0;
    lVar6 = lVar5 + param_1 * 0x310;
    pvVar1 = *(void **)(lVar6 + 0x2f8);
    *(undefined8 *)(lVar7 + param_1 * 0x310 + 600) = 0x10;
    *(undefined8 *)(lVar6 + 0x300) = 0;
    lVar7 = lVar5;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      lVar7 = *(long *)(this + 0x38);
    }
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar6 + 0x2f8) = 0;
    *(undefined8 *)(lVar5 + param_1 * 0x310 + 0x308) = 0x10;
    *(undefined8 *)(lVar7 + param_1 * 0x310 + 0x270) = 0;
    *(long *)(this + 0x10) = lVar3 + -1;
  }
  return lVar4 - param_1 != 0 && param_1 <= lVar4;
}


