// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SelectOnSurface
// Entry Point: 00ecb538
// Size: 332 bytes
// Signature: undefined __thiscall SelectOnSurface(VoxelSet * this, PrimitiveSet * param_1)


/* VHACD::VoxelSet::SelectOnSurface(VHACD::PrimitiveSet*) const */

void __thiscall VHACD::VoxelSet::SelectOnSurface(VoxelSet *this,PrimitiveSet *param_1)

{
  VoxelSet *pVVar1;
  PrimitiveSet *pPVar2;
  PrimitiveSet *__dest;
  ulong uVar3;
  PrimitiveSet *pPVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)(this + 0xa08);
  if (lVar5 != 0) {
    lVar6 = 0;
    *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(this + 0x9a0);
    uVar10 = *(undefined8 *)(this + 0x9a8);
    *(undefined8 *)(param_1 + 0xa08) = 0;
    *(undefined8 *)(param_1 + 0x9a8) = uVar10;
    *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(this + 0x9b0);
    uVar10 = *(undefined8 *)(this + 0xa18);
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(this + 0x9b8);
    *(undefined8 *)(param_1 + 0xa18) = uVar10;
    *(undefined8 *)(param_1 + 0x998) = 0;
    *(undefined8 *)(param_1 + 0x990) = 0;
    do {
      pVVar1 = this + 0x9c0;
      if (*(long *)(this + 0xa10) != 8) {
        pVVar1 = *(VoxelSet **)(this + 0xa00);
      }
      uVar8 = *(ulong *)(pVVar1 + lVar6 * 8);
      if (uVar8 >> 0x30 == 4) {
        uVar7 = *(ulong *)(param_1 + 0xa08);
        uVar9 = *(ulong *)(param_1 + 0xa10);
        if (uVar7 == uVar9) {
          uVar9 = uVar7 << 1;
          uVar3 = uVar7 << 4;
          if (uVar9 >> 0x3d != 0) {
            uVar3 = 0xffffffffffffffff;
          }
          __dest = (PrimitiveSet *)operator_new__(uVar3);
          pPVar4 = *(PrimitiveSet **)(param_1 + 0xa00);
          pPVar2 = param_1 + 0x9c0;
          if (uVar7 != 8) {
            pPVar2 = pPVar4;
          }
          memcpy(__dest,pPVar2,uVar7 << 3);
          if (pPVar4 != (PrimitiveSet *)0x0) {
            operator_delete__(pPVar4);
            uVar7 = *(ulong *)(param_1 + 0xa08);
          }
          *(PrimitiveSet **)(param_1 + 0xa00) = __dest;
          *(ulong *)(param_1 + 0xa10) = uVar9;
        }
        else {
          __dest = *(PrimitiveSet **)(param_1 + 0xa00);
        }
        pPVar2 = param_1 + 0x9c0;
        if (uVar9 != 8) {
          pPVar2 = __dest;
        }
        *(ulong *)(param_1 + 0xa08) = uVar7 + 1;
        *(ulong *)(pPVar2 + uVar7 * 8) = uVar8;
        *(long *)(param_1 + 0x990) = *(long *)(param_1 + 0x990) + 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
  }
  return;
}


