// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMeshData
// Entry Point: 00d579a0
// Size: 288 bytes
// Signature: undefined __thiscall GetMeshData(MeshDecimator * this, Vec3 * param_1, Vec3 * param_2)


/* HACD::MeshDecimator::GetMeshData(HACD::Vec3<double>*, HACD::Vec3<long>*) const */

void __thiscall HACD::MeshDecimator::GetMeshData(MeshDecimator *this,Vec3 *param_1,Vec3 *param_2)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar10 = *(ulong *)(this + 0x10);
  uVar2 = uVar10 << 3;
  if (uVar10 >> 0x3d != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  plVar1 = (long *)operator_new__(uVar2);
  if (uVar10 != 0) {
    pcVar3 = (char *)(*(long *)(this + 0x40) + 0x180);
    puVar5 = (undefined8 *)(*(long *)(this + 8) + 8);
    lVar4 = 0;
    plVar7 = plVar1;
    do {
      lVar6 = lVar4;
      if (*pcVar3 != '\0') {
        puVar8 = (undefined8 *)(param_1 + lVar4 * 0x18);
        uVar11 = puVar5[-1];
        lVar6 = lVar4 + 1;
        *plVar7 = lVar4;
        *puVar8 = uVar11;
        puVar8[1] = *puVar5;
        puVar8[2] = puVar5[1];
      }
      uVar10 = uVar10 - 1;
      plVar7 = plVar7 + 1;
      pcVar3 = pcVar3 + 0x188;
      puVar5 = puVar5 + 3;
      lVar4 = lVar6;
    } while (uVar10 != 0);
  }
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 != 0) {
    uVar10 = 0;
    lVar4 = 0;
    lVar6 = *(long *)(this + 0x98);
    plVar7 = (long *)(*(long *)this + 8);
    do {
      if (*(char *)(lVar6 + uVar10) != '\0') {
        plVar9 = (long *)(param_2 + lVar4 * 0x18);
        lVar4 = lVar4 + 1;
        *plVar9 = plVar1[plVar7[-1]];
        plVar9[1] = plVar1[*plVar7];
        plVar9[2] = plVar1[plVar7[1]];
        uVar2 = *(ulong *)(this + 0x18);
      }
      uVar10 = uVar10 + 1;
      plVar7 = plVar7 + 3;
    } while (uVar10 < uVar2);
  }
  operator_delete__(plVar1);
  return;
}


