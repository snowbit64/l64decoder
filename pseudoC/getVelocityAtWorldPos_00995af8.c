// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVelocityAtWorldPos
// Entry Point: 00995af8
// Size: 384 bytes
// Signature: undefined __thiscall getVelocityAtWorldPos(Bt2PhysicsRBObject * this, Vector3 * param_1, Vector3 * param_2)


/* Bt2PhysicsRBObject::getVelocityAtWorldPos(Vector3 const&, Vector3&) const */

void __thiscall
Bt2PhysicsRBObject::getVelocityAtWorldPos
          (Bt2PhysicsRBObject *this,Vector3 *param_1,Vector3 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  if ((*(long *)(this + 0x30) == 0) ||
     (lVar2 = *(long *)(*(long *)(this + 0x30) + 0x228), lVar2 == 0)) {
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar2 + 0x88);
    fVar3 = -*(float *)(lVar2 + 0x8c);
    lVar1 = *(long *)(this + 0x28);
    uVar13 = *(undefined4 *)(lVar2 + 0x90);
    uVar6 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x58),uVar4,*(float *)(lVar2 + 0x68) * fVar3);
    uVar7 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x5c),uVar4,*(float *)(lVar2 + 0x6c) * fVar3);
    uVar4 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x60),uVar4,*(float *)(lVar2 + 0x70) * fVar3);
    uVar11 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x78),uVar13,uVar6);
    fVar12 = (float)NEON_fmsub(*(undefined4 *)(lVar2 + 0x7c),uVar13,uVar7);
    uVar7 = NEON_fmsub(*(undefined4 *)(lVar2 + 0x80),uVar13,uVar4);
    RawTransformGroup::updateWorldTransformation();
    uVar4 = NEON_fmadd(uVar11,*(undefined4 *)(lVar1 + 0xbc),fVar12 * *(float *)(lVar1 + 0xcc));
    uVar6 = NEON_fmadd(uVar11,*(undefined4 *)(lVar1 + 0xc0),fVar12 * *(float *)(lVar1 + 0xd0));
    fVar3 = (float)NEON_fmadd(uVar7,*(undefined4 *)(lVar1 + 0xdc),uVar4);
    fVar5 = (float)NEON_fmadd(uVar7,*(undefined4 *)(lVar1 + 0xe0),uVar6);
    fVar10 = *(float *)param_1;
    fVar3 = *(float *)(param_1 + 4) - (*(float *)(lVar1 + 0xec) + fVar3);
    uVar4 = NEON_fmadd(uVar11,*(undefined4 *)(lVar1 + 0xb8),fVar12 * *(float *)(lVar1 + 200));
    fVar9 = *(float *)(lVar1 + 0xe8);
    fVar5 = *(float *)(param_1 + 8) - (*(float *)(lVar1 + 0xf0) + fVar5);
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xac),fVar5,fVar3 * -*(float *)(lVar2 + 0xb0)
                              );
    fVar8 = (float)NEON_fmadd(uVar7,*(undefined4 *)(lVar1 + 0xd8),uVar4);
    *(float *)param_2 = fVar12;
    fVar10 = fVar10 - (fVar9 + fVar8);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xb0),fVar10,fVar5 * -*(float *)(lVar2 + 0xa8)
                             );
    *(float *)(param_2 + 4) = fVar5;
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0xa8),fVar3,fVar10 * -*(float *)(lVar2 + 0xac)
                             );
    *(float *)(param_2 + 8) = fVar3;
    *(float *)param_2 = fVar12 + *(float *)(lVar2 + 0x9c);
    *(float *)(param_2 + 4) = fVar5 + *(float *)(lVar2 + 0xa0);
    *(float *)(param_2 + 8) = fVar3 + *(float *)(lVar2 + 0xa4);
  }
  return;
}


