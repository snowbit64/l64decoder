// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009c01a4
// Size: 152 bytes
// Signature: undefined __thiscall addSingleResult(ClosestRayResultCallback * this, LocalRayResult * param_1, bool param_2)


/* Bt2SceneQueryUtil::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult&,
   bool) */

undefined4 __thiscall
Bt2SceneQueryUtil::ClosestRayResultCallback::addSingleResult
          (ClosestRayResultCallback *this,LocalRayResult *param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar1 = *(long *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x20);
  *(long *)(this + 0x10) = lVar1;
  if (param_2) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x20) = uVar4;
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0x14);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 8),uVar9,*(float *)(lVar1 + 0xc) * fVar5);
    uVar8 = *(undefined4 *)(lVar1 + 0x10);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x18),uVar9,fVar5 * *(float *)(lVar1 + 0x1c));
    uVar9 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x28),uVar9,fVar5 * *(float *)(lVar1 + 0x2c));
    uVar11 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = *(undefined4 *)(lVar1 + 0x20);
    uVar10 = *(undefined4 *)(lVar1 + 0x30);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar3 = NEON_fmadd(uVar8,uVar11,uVar3);
    uVar6 = NEON_fmadd(uVar7,uVar11,uVar6);
    uVar9 = NEON_fmadd(uVar10,uVar11,uVar9);
    *(undefined4 *)(this + 0x20) = uVar3;
    *(undefined4 *)(this + 0x24) = uVar6;
    *(undefined4 *)(this + 0x28) = uVar9;
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  *(undefined8 *)(this + 0x30) = uVar4;
  return *(undefined4 *)(param_1 + 0x20);
}


