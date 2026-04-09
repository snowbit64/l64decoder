// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVelocityAtLocalPos
// Entry Point: 00995c78
// Size: 356 bytes
// Signature: undefined __thiscall getVelocityAtLocalPos(Bt2PhysicsRBObject * this, Vector3 * param_1, Vector3 * param_2)


/* Bt2PhysicsRBObject::getVelocityAtLocalPos(Vector3 const&, Vector3&) const */

void __thiscall
Bt2PhysicsRBObject::getVelocityAtLocalPos
          (Bt2PhysicsRBObject *this,Vector3 *param_1,Vector3 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  if ((*(long *)(this + 0x30) == 0) ||
     (lVar2 = *(long *)(*(long *)(this + 0x30) + 0x228), lVar2 == 0)) {
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lVar2 + 0x88);
    fVar3 = -*(float *)(lVar2 + 0x8c);
    uVar13 = *(undefined4 *)(lVar2 + 0x90);
    lVar1 = *(long *)(this + 0x28);
    uVar7 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x58),uVar5,*(float *)(lVar2 + 0x68) * fVar3);
    uVar10 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x5c),uVar5,*(float *)(lVar2 + 0x6c) * fVar3);
    uVar5 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x60),uVar5,*(float *)(lVar2 + 0x70) * fVar3);
    fVar8 = (float)NEON_fmsub(*(undefined4 *)(lVar2 + 0x78),uVar13,uVar7);
    fVar11 = (float)NEON_fmsub(*(undefined4 *)(lVar2 + 0x7c),uVar13,uVar10);
    fVar3 = (float)NEON_fmsub(*(undefined4 *)(lVar2 + 0x80),uVar13,uVar5);
    fVar8 = *(float *)param_1 - fVar8;
    fVar11 = *(float *)(param_1 + 4) - fVar11;
    fVar3 = *(float *)(param_1 + 8) - fVar3;
    RawTransformGroup::updateWorldTransformation();
    uVar10 = *(undefined4 *)(lVar1 + 0xd8);
    uVar5 = NEON_fmadd(fVar8,*(undefined4 *)(lVar1 + 0xbc),fVar11 * *(float *)(lVar1 + 0xcc));
    uVar7 = NEON_fmadd(fVar8,*(undefined4 *)(lVar1 + 0xc0),fVar11 * *(float *)(lVar1 + 0xd0));
    fVar4 = (float)NEON_fmadd(fVar3,*(undefined4 *)(lVar1 + 0xdc),uVar5);
    uVar5 = *(undefined4 *)(lVar1 + 0xb8);
    fVar6 = (float)NEON_fmadd(fVar3,*(undefined4 *)(lVar1 + 0xe0),uVar7);
    fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xac),fVar6,fVar4 * -*(float *)(lVar2 + 0xb0))
    ;
    fVar12 = *(float *)(lVar1 + 200);
    *(float *)param_2 = fVar9;
    uVar5 = NEON_fmadd(fVar8,uVar5,fVar11 * fVar12);
    fVar3 = (float)NEON_fmadd(fVar3,uVar10,uVar5);
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xb0),fVar3,fVar6 * -*(float *)(lVar2 + 0xa8))
    ;
    *(float *)(param_2 + 4) = fVar6;
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xa8),fVar4,fVar3 * -*(float *)(lVar2 + 0xac))
    ;
    *(float *)(param_2 + 8) = fVar3;
    *(float *)param_2 = fVar9 + *(float *)(lVar2 + 0x9c);
    *(float *)(param_2 + 4) = fVar6 + *(float *)(lVar2 + 0xa0);
    *(float *)(param_2 + 8) = fVar3 + *(float *)(lVar2 + 0xa4);
  }
  return;
}


