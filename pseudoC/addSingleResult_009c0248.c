// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009c0248
// Size: 148 bytes
// Signature: undefined __thiscall addSingleResult(ClosestSingleRayResultCallback * this, LocalRayResult * param_1, bool param_2)


/* Bt2SceneQueryUtil::ClosestSingleRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult&,
   bool) */

undefined4 __thiscall
Bt2SceneQueryUtil::ClosestSingleRayResultCallback::addSingleResult
          (ClosestSingleRayResultCallback *this,LocalRayResult *param_1,bool param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = *(undefined4 **)(this + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  lVar2 = *(long *)param_1;
  *(undefined4 *)(this + 8) = uVar3;
  **(undefined4 **)(this + 0x20) = uVar3;
  *(long *)(this + 0x10) = lVar2;
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2) {
      *puVar1 = *(undefined4 *)(param_1 + 0x10);
      puVar1[1] = *(undefined4 *)(param_1 + 0x14);
      uVar3 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
      uVar3 = NEON_fmadd(*(undefined4 *)(lVar2 + 8),uVar7,*(float *)(lVar2 + 0xc) * fVar4);
      uVar5 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x18),uVar7,fVar4 * *(float *)(lVar2 + 0x1c));
      uVar7 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x28),uVar7,fVar4 * *(float *)(lVar2 + 0x2c));
      uVar8 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x10),uVar8,uVar3);
      uVar5 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x20),uVar8,uVar5);
      uVar3 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x30),uVar8,uVar7);
      *puVar1 = uVar6;
      puVar1[1] = uVar5;
    }
    puVar1[2] = uVar3;
  }
  return *(undefined4 *)(param_1 + 0x20);
}


