// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClipMatrix
// Entry Point: 00b55504
// Size: 800 bytes
// Signature: undefined __thiscall setClipMatrix(Frustum * this, Matrix4x4 * param_1, float param_2)


/* Frustum::setClipMatrix(Matrix4x4 const&, float) */

void __thiscall Frustum::setClipMatrix(Frustum *this,Matrix4x4 *param_1,float param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined auVar7 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Plane::Plane((Plane *)&local_58,*(float *)(param_1 + 0xc) - *(float *)param_1,
               *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10),
               *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20),
               *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x10) = uStack_50;
  *(undefined8 *)(this + 8) = local_58;
  Plane::normalize();
  Plane::Plane((Plane *)&local_58,*(float *)(param_1 + 0xc) + *(float *)param_1,
               *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x10),
               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x20),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x20) = uStack_50;
  *(undefined8 *)(this + 0x18) = local_58;
  Plane::normalize();
  Plane::Plane((Plane *)&local_58,*(float *)(param_1 + 0xc) + *(float *)(param_1 + 4),
               *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x14),
               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x34));
  *(undefined8 *)(this + 0x30) = uStack_50;
  *(undefined8 *)(this + 0x28) = local_58;
  Plane::normalize();
  Plane::Plane((Plane *)&local_58,*(float *)(param_1 + 0xc) - *(float *)(param_1 + 4),
               *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x14),
               *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x24),
               *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34));
  *(undefined8 *)(this + 0x40) = uStack_50;
  *(undefined8 *)(this + 0x38) = local_58;
  Plane::normalize();
  dVar2 = (double)*(float *)(param_1 + 0x18);
  dVar3 = (double)*(float *)(param_1 + 8);
  uVar5 = NEON_fmadd(dVar3,dVar3,dVar2 * dVar2);
  dVar4 = (double)*(float *)(param_1 + 0x28);
  dVar6 = (double)NEON_fmadd(dVar4,dVar4,uVar5);
  if (dVar6 <= 0.0) {
    Plane::Plane((Plane *)&local_58,*(float *)(param_1 + 8) - *(float *)(param_1 + 0xc),
                 *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x1c),
                 *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x2c),-*(float *)(param_1 + 0x3c)
                );
    *(undefined8 *)(this + 0x50) = uStack_50;
    *(undefined8 *)(this + 0x48) = local_58;
    Plane::normalize();
    *(float *)(this + 0x54) = *(float *)(this + 0x54) + param_2;
  }
  else {
    dVar6 = 1.0 / SQRT(dVar6);
    Plane::Plane((Plane *)&local_58,(float)(dVar6 * dVar3),(float)(dVar6 * dVar2),
                 (float)(dVar6 * dVar4),(float)(dVar6 * (double)*(float *)(param_1 + 0x38)));
    *(undefined8 *)(this + 0x50) = uStack_50;
    *(undefined8 *)(this + 0x48) = local_58;
  }
  Plane::Plane((Plane *)&local_58,*(float *)(param_1 + 0xc) - *(float *)(param_1 + 8),
               *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x18),
               *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28),
               *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38));
  *(undefined8 *)(this + 0x60) = uStack_50;
  *(undefined8 *)(this + 0x58) = local_58;
  Plane::normalize();
  auVar7 = NEON_fmov(0x3f800000,4);
  *(ulong *)(this + 0x78) = CONCAT44(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x18));
  *(ulong *)(this + 0x70) = CONCAT44(*(undefined4 *)(this + 0x28),(int)*(undefined8 *)(this + 0x38))
  ;
  *(ulong *)(this + 0x88) = CONCAT44(*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x58));
  *(undefined8 *)(this + 0x80) = 0;
  auVar7._8_4_ = *(undefined4 *)(this + 100);
  *(ulong *)(this + 0x98) = CONCAT44(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x1c));
  *(ulong *)(this + 0x90) = CONCAT44(*(undefined4 *)(this + 0x2c),(int)*(undefined8 *)(this + 0x3c))
  ;
  *(ulong *)(this + 0xa8) = CONCAT44(*(undefined4 *)(this + 0x4c),*(undefined4 *)(this + 0x5c));
  *(undefined8 *)(this + 0xa0) = 0;
  auVar7._12_4_ = *(undefined4 *)(this + 0x54);
  *(ulong *)(this + 0xb8) = CONCAT44(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x20));
  *(ulong *)(this + 0xb0) = CONCAT44(*(undefined4 *)(this + 0x30),(int)*(undefined8 *)(this + 0x40))
  ;
  *(ulong *)(this + 200) = CONCAT44(*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x60));
  *(undefined8 *)(this + 0xc0) = 0;
  *(ulong *)(this + 0xd8) = CONCAT44(*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x24));
  *(ulong *)(this + 0xd0) = CONCAT44(*(undefined4 *)(this + 0x34),(int)*(undefined8 *)(this + 0x44))
  ;
  *(long *)(this + 0xe8) = auVar7._8_8_;
  *(undefined8 *)(this + 0xe0) = auVar7._0_8_;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


