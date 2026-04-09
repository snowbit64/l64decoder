// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 00f374a4
// Size: 220 bytes
// Signature: undefined __thiscall addSingleResult(btClosestNotMeConvexResultCallback * this, LocalConvexResult * param_1, bool param_2)


/* btClosestNotMeConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult&, bool)
    */

undefined4 __thiscall
btClosestNotMeConvexResultCallback::addSingleResult
          (btClosestNotMeConvexResultCallback *this,LocalConvexResult *param_1,bool param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar1 = *(long *)param_1;
  uVar2 = 0x3f800000;
  if ((lVar1 != *(long *)(this + 0x58)) && ((*(byte *)(lVar1 + 0xe0) >> 2 & 1) == 0)) {
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x10),
                              *(float *)(this + 0x20) - *(float *)(this + 0x10),
                              (float)*(undefined8 *)(param_1 + 0x14) *
                              ((float)*(undefined8 *)(this + 0x24) -
                              (float)*(undefined8 *)(this + 0x14)));
    if (fVar5 + (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) *
                ((float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(this + 0x14) >> 0x20)) < -*(float *)(this + 0x60)) {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      *(long *)(this + 0x50) = lVar1;
      *(undefined4 *)(this + 8) = uVar2;
      if (param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(this + 0x30) = uVar3;
      }
      else {
        fVar5 = *(float *)(param_1 + 0x10);
        uVar8 = *(undefined4 *)(param_1 + 0x14);
        uVar7 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = NEON_fmadd(uVar8,*(undefined4 *)(lVar1 + 0xc),fVar5 * *(float *)(lVar1 + 8));
        uVar4 = *(undefined4 *)(lVar1 + 0x10);
        uVar6 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x1c),uVar8,*(float *)(lVar1 + 0x18) * fVar5);
        uVar10 = *(undefined4 *)(lVar1 + 0x30);
        uVar8 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x2c),uVar8,*(float *)(lVar1 + 0x28) * fVar5);
        uVar9 = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(this + 0x3c) = 0;
        uVar2 = NEON_fmadd(uVar7,uVar4,uVar2);
        uVar4 = NEON_fmadd(uVar9,uVar7,uVar6);
        uVar8 = NEON_fmadd(uVar10,uVar7,uVar8);
        *(undefined4 *)(this + 0x30) = uVar2;
        *(undefined4 *)(this + 0x34) = uVar4;
        *(undefined4 *)(this + 0x38) = uVar8;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(this + 0x40) = uVar3;
      uVar2 = *(undefined4 *)(param_1 + 0x30);
    }
  }
  return uVar2;
}


