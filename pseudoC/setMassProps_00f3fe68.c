// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMassProps
// Entry Point: 00f3fe68
// Size: 168 bytes
// Signature: undefined __thiscall setMassProps(btRigidBody * this, float param_1, btVector3 * param_2)


/* btRigidBody::setMassProps(float, btVector3 const&) */

void __thiscall btRigidBody::setMassProps(btRigidBody *this,float param_1,btVector3 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 == 0.0) {
    uVar1 = *(uint *)(this + 0xe0) | 1;
    fVar3 = 0.0;
  }
  else {
    uVar1 = *(uint *)(this + 0xe0) & 0xfffffffe;
    fVar3 = 1.0 / param_1;
  }
  *(uint *)(this + 0xe0) = uVar1;
  *(float *)(this + 0x19c) = fVar3;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(ulong *)(this + 0x1b0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1c0) >> 0x20) * param_1,
                (float)*(undefined8 *)(this + 0x1c0) * param_1);
  uVar5 = NEON_fmov(0x3f800000,4);
  *(float *)(this + 0x1b8) = *(float *)(this + 0x1c8) * param_1;
  uVar2 = *(undefined8 *)param_2;
  fVar7 = *(float *)(param_2 + 8);
  *(undefined4 *)(this + 0x1dc) = 0;
  *(ulong *)(this + 0x288) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1a0) >> 0x20) * fVar3,
                (float)*(undefined8 *)(this + 0x1a0) * fVar3);
  fVar4 = (float)uVar5 / (float)uVar2;
  fVar6 = (float)((ulong)uVar5 >> 0x20) / (float)((ulong)uVar2 >> 0x20);
  uVar2 = NEON_fcmeq(uVar2,0,4);
  *(float *)(this + 0x290) = *(float *)(this + 0x1a8) * fVar3;
  *(undefined4 *)(this + 0x294) = 0;
  *(ulong *)(this + 0x1d0) =
       CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((ulong)uVar2 >> 0x38),
                CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((ulong)uVar2 >> 0x30),
                         CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((ulong)uVar2 >> 0x28),
                                  CONCAT14(SUB41(fVar6,0) & ~(byte)((ulong)uVar2 >> 0x20),
                                           CONCAT13((byte)((uint)fVar4 >> 0x18) &
                                                    ~(byte)((ulong)uVar2 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                             ~(byte)((ulong)uVar2 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar4 >> 8) &
                                                                      ~(byte)((ulong)uVar2 >> 8),
                                                                      SUB41(fVar4,0) & ~(byte)uVar2)
                                                            ))))));
  fVar3 = 1.0 / fVar7;
  if (fVar7 == 0.0) {
    fVar3 = fVar7;
  }
  *(float *)(this + 0x1d8) = fVar3;
  return;
}


