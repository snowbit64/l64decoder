// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009be448
// Size: 156 bytes
// Signature: undefined __thiscall addSingleResult(btKinematicClosestNotMeConvexResultCallback * this, LocalConvexResult * param_1, bool param_2)


/* btKinematicClosestNotMeConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult&,
   bool) */

undefined4 __thiscall
btKinematicClosestNotMeConvexResultCallback::addSingleResult
          (btKinematicClosestNotMeConvexResultCallback *this,LocalConvexResult *param_1,bool param_2
          )

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar1 = *(long *)param_1;
  uVar2 = 0x3f800000;
  if ((lVar1 != *(long *)(this + 0x58)) && ((*(byte *)(lVar1 + 0xe0) >> 2 & 1) == 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(long *)(this + 0x50) = lVar1;
    *(undefined4 *)(this + 8) = uVar2;
    if (param_2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(this + 0x30) = uVar3;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
      uVar2 = NEON_fmadd(*(undefined4 *)(lVar1 + 8),uVar8,*(float *)(lVar1 + 0xc) * fVar4);
      uVar7 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x18),uVar8,fVar4 * *(float *)(lVar1 + 0x1c));
      uVar8 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x28),uVar8,fVar4 * *(float *)(lVar1 + 0x2c));
      uVar10 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      *(undefined4 *)(this + 0x3c) = 0;
      uVar2 = NEON_fmadd(uVar7,uVar10,uVar2);
      uVar5 = NEON_fmadd(uVar6,uVar10,uVar5);
      uVar8 = NEON_fmadd(uVar9,uVar10,uVar8);
      *(undefined4 *)(this + 0x30) = uVar2;
      *(undefined4 *)(this + 0x34) = uVar5;
      *(undefined4 *)(this + 0x38) = uVar8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x40) = uVar3;
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  return uVar2;
}


