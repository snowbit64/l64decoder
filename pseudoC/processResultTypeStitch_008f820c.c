// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processResultTypeStitch
// Entry Point: 008f820c
// Size: 276 bytes
// Signature: undefined __thiscall processResultTypeStitch(TerrainPatchOccluderManager * this, Result * param_1)


/* TerrainPatchOccluderManager::processResultTypeStitch(TerrainPatchOccluderManager::Result&) */

void __thiscall
TerrainPatchOccluderManager::processResultTypeStitch
          (TerrainPatchOccluderManager *this,Result *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void **ppvVar9;
  long **pplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(this + 0x118);
  uVar6 = (ulong)*(uint *)(param_1 + 8);
  uVar7 = (ulong)(uint)(*(int *)(param_1 + 0xc) + *(int *)(this + 0xf8) * *(int *)(param_1 + 0x10));
  uVar5 = (ulong)*(uint *)(param_1 + 0x14);
  pplVar10 = (long **)(lVar8 + uVar7 * 0x380 + uVar6 * 0x80 + uVar5 * 0x20 + 8);
  plVar3 = *pplVar10;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *pplVar10 = (long *)0x0;
  ppvVar9 = (void **)(lVar8 + uVar7 * 0x380 + uVar6 * 0x80 + uVar5 * 0x20 + 0x10);
  pvVar4 = *ppvVar9;
  if (pvVar4 != (void *)0x0) {
    if (*(void **)((long)pvVar4 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar4 + 8));
    }
    operator_delete(pvVar4);
  }
  *ppvVar9 = (void *)0x0;
  pplVar10 = (long **)(lVar8 + uVar7 * 0x380 + uVar6 * 0x80 + uVar5 * 0x20 + 0x18);
  plVar3 = *pplVar10;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *pplVar10 = (long *)0x0;
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(lVar8 + uVar7 * 0x380 + uVar6 * 0x80 + uVar5 * 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  iVar2 = *(int *)(this + 0x170);
  *(undefined *)puVar1 = 0;
  *(int *)(this + 0x170) = iVar2 + -1;
  return;
}


