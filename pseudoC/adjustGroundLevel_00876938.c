// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustGroundLevel
// Entry Point: 00876938
// Size: 416 bytes
// Signature: undefined __thiscall adjustGroundLevel(AnimalCompanionManager * this, uint param_1, bool param_2)


/* AnimalCompanionManager::adjustGroundLevel(unsigned int, bool) */

void __thiscall
AnimalCompanionManager::adjustGroundLevel(AnimalCompanionManager *this,uint param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  Bt2ScenegraphPhysicsContext *this_00;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  long local_60;
  float local_58;
  float local_54;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = (ulong)param_1;
  AnimalSteering::getPosition
            ((AnimalSteering *)(*(long *)(this + 0xf8) + (ulong)param_1 * 0xe0),(Vector3 *)&local_58
            );
  if (!param_2) {
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar1 = *(uint *)(this + 0x228);
    local_68 = 0.0;
    local_88 = &PTR__IRaycastReport_00fdc200;
    local_54 = local_54 + 1.0;
    local_90 = 0;
    uStack_80 = 0;
    uVar2 = *(uint *)(this + 0x22c);
    local_98 = 0xbf80000000000000;
    ScenegraphPhysicsContextManager::getInstance();
    this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    iVar4 = Bt2ScenegraphPhysicsContext::raycastShapes
                      (this_00,(Vector3 *)&local_58,(Vector3 *)&local_98,(IRaycastReport *)&local_88
                       ,8.0,true,uVar2 | uVar1,true,true,0);
    if (iVar4 != 0) {
      AnimalSteering::setGroundHeight
                ((AnimalSteering *)(*(long *)(this + 0xf8) + uVar7 * 0xe0),local_54 - local_68);
      if (((local_60 != 0) && (lVar5 = RawTransformGroup::getPhysicsObject(), lVar5 != 0)) &&
         ((*(byte *)(lVar5 + 8) >> 3 & 1) != 0)) {
        *(bool *)(*(long *)(*(long *)(this + 0x158) + uVar7 * 8) + 0xcc) =
             (*(uint *)(this + 0x22c) & *(uint *)(lVar5 + 0x58)) != 0;
      }
      goto LAB_00876aac;
    }
  }
  lVar5 = *(long *)(this + 0x60);
  if (lVar5 != 0) {
    fVar8 = (float)BaseTerrain::getUnitsPerPixel();
    fVar9 = (float)BaseTerrain::getTerrainHalfSize();
    lVar6 = *(long *)(this + 0xf8);
    fVar8 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                             ((BaseTerrain *)(lVar5 + 0x170),fVar9 + local_58 / fVar8,
                              fVar9 + local_50 / fVar8);
    AnimalSteering::setGroundHeight((AnimalSteering *)(lVar6 + uVar7 * 0xe0),fVar8);
  }
LAB_00876aac:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


