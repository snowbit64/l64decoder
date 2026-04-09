// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Frustum
// Entry Point: 00b55824
// Size: 372 bytes
// Signature: undefined __thiscall Frustum(Frustum * this, Plane * param_1)


/* Frustum::Frustum(Plane const*) */

void __thiscall Frustum::Frustum(Frustum *this,Plane *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  *(undefined ***)this = &PTR__CullingBody_00fea1a8;
  Plane::Plane((Plane *)(this + 8));
  Plane::Plane((Plane *)(this + 0x18));
  Plane::Plane((Plane *)(this + 0x28));
  Plane::Plane((Plane *)(this + 0x38));
  Plane::Plane((Plane *)(this + 0x48));
  Plane::Plane((Plane *)(this + 0x58));
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x48) = uVar1;
  auVar2 = *(undefined (*) [16])(param_1 + 0x50);
  *(long *)(this + 0x60) = auVar2._8_8_;
  *(long *)(this + 0x58) = auVar2._0_8_;
  auVar2 = NEON_fmov(0x3f800000,4);
  auVar2._8_4_ = *(undefined4 *)(this + 100);
  *(ulong *)(this + 0x78) = CONCAT44(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x18));
  *(ulong *)(this + 0x70) = CONCAT44(*(undefined4 *)(this + 0x28),(int)*(undefined8 *)(this + 0x38))
  ;
  *(ulong *)(this + 0x88) = CONCAT44(*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x58));
  *(undefined8 *)(this + 0x80) = 0;
  auVar2._12_4_ = *(undefined4 *)(this + 0x54);
  *(ulong *)(this + 0x98) = CONCAT44(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x1c));
  *(ulong *)(this + 0x90) = CONCAT44(*(undefined4 *)(this + 0x2c),(int)*(undefined8 *)(this + 0x3c))
  ;
  *(ulong *)(this + 0xa8) = CONCAT44(*(undefined4 *)(this + 0x4c),*(undefined4 *)(this + 0x5c));
  *(undefined8 *)(this + 0xa0) = 0;
  *(ulong *)(this + 0xb8) = CONCAT44(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x20));
  *(ulong *)(this + 0xb0) = CONCAT44(*(undefined4 *)(this + 0x30),(int)*(undefined8 *)(this + 0x40))
  ;
  *(ulong *)(this + 200) = CONCAT44(*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x60));
  *(undefined8 *)(this + 0xc0) = 0;
  *(ulong *)(this + 0xd8) = CONCAT44(*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x24));
  *(ulong *)(this + 0xd0) = CONCAT44(*(undefined4 *)(this + 0x34),(int)*(undefined8 *)(this + 0x44))
  ;
  *(long *)(this + 0xe8) = auVar2._8_8_;
  *(undefined8 *)(this + 0xe0) = auVar2._0_8_;
  return;
}


