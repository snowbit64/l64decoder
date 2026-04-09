// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DistanceMatrixTypeField
// Entry Point: 009c06a4
// Size: 160 bytes
// Signature: undefined __thiscall DistanceMatrixTypeField(DistanceMatrixTypeField * this, DistanceMatrixType * param_1, uint param_2)


/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::DistanceMatrixTypeField(ProceduralPlacementDistanceMatrix::DistanceMatrixType*,
   unsigned int) */

void __thiscall
ProceduralPlacementCacheManager::DistanceMatrixTypeField::DistanceMatrixTypeField
          (DistanceMatrixTypeField *this,DistanceMatrixType *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = param_2 * param_2;
  uVar8 = (ulong)uVar1;
  *(DistanceMatrixType **)this = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(uint *)(this + 0x40) = param_2;
  pvVar2 = operator_new__(uVar8 << 2);
  *(void **)(this + 8) = pvVar2;
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar8 & 0xfffffff8;
      puVar5 = (undefined8 *)((long)pvVar2 + 0x10);
      uVar7 = uVar3;
      do {
        puVar5[-1] = 0x4974240049742400;
        puVar5[-2] = 0x4974240049742400;
        puVar5[1] = 0x4974240049742400;
        *puVar5 = 0x4974240049742400;
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
      if (uVar3 == uVar8) {
        return;
      }
    }
    lVar4 = uVar8 - uVar3;
    puVar6 = (undefined4 *)((long)pvVar2 + uVar3 * 4);
    do {
      lVar4 = lVar4 + -1;
      *puVar6 = 0x49742400;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  return;
}


