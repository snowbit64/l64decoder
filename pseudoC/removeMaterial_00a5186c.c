// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeMaterial
// Entry Point: 00a5186c
// Size: 192 bytes
// Signature: undefined __thiscall removeMaterial(GsShape * this, uint param_1)


/* GsShape::removeMaterial(unsigned int) */

void __thiscall GsShape::removeMaterial(GsShape *this,uint param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  MaterialManager *pMVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = (ulong)param_1;
  if (param_1 == 0) {
    if (*(void **)(this + 0x180) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x180));
    }
    *(undefined8 *)(this + 0x180) = 0;
  }
  if (*(short *)(this + 0x196) != 0) {
    if (*(short *)(this + 0x196) == 1) {
      pMVar4 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(pMVar4,*(GsMaterial **)(this + 0x178));
      *(undefined8 *)(this + 0x178) = 0;
      *(undefined2 *)(this + 0x196) = 0;
    }
    else {
      pMVar4 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(pMVar4,*(GsMaterial **)(*(long *)(this + 0x178) + uVar5 * 8))
      ;
      uVar3 = *(ushort *)(this + 0x196) - 1;
      if (param_1 < uVar3) {
        do {
          uVar1 = uVar5 + 1;
          puVar2 = (undefined8 *)(*(long *)(this + 0x178) + uVar5 * 8);
          *puVar2 = puVar2[1];
          uVar5 = uVar1;
        } while (uVar3 != uVar1);
      }
      *(short *)(this + 0x196) = (short)uVar3;
      if (uVar3 == 1) {
        uVar6 = **(undefined8 **)(this + 0x178);
        operator_delete__(*(undefined8 **)(this + 0x178));
        *(undefined8 *)(this + 0x178) = uVar6;
      }
    }
  }
  refreshFlagsFromMaterials();
  return;
}


