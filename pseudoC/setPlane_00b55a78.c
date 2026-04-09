// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPlane
// Entry Point: 00b55a78
// Size: 216 bytes
// Signature: undefined __thiscall setPlane(Frustum * this, FRUSTUM_PLANES param_1, Plane * param_2)


/* Frustum::setPlane(Frustum::FRUSTUM_PLANES, Plane const&) */

void __thiscall Frustum::setPlane(Frustum *this,FRUSTUM_PLANES param_1,Plane *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  puVar1 = (undefined4 *)(this + 8);
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)((long)(puVar1 + (ulong)param_1 * 4) + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar1 + (ulong)param_1 * 4) = uVar2;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(ulong *)(this + 0x78) = CONCAT44(*puVar1,*(undefined4 *)(this + 0x18));
  *(ulong *)(this + 0x70) = CONCAT44(*(undefined4 *)(this + 0x28),(int)*(undefined8 *)(this + 0x38))
  ;
  *(ulong *)(this + 0x88) = CONCAT44(*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x58));
  *(undefined8 *)(this + 0x80) = 0;
  auVar3._8_4_ = *(undefined4 *)(this + 100);
  *(ulong *)(this + 0x98) = CONCAT44(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x1c));
  *(ulong *)(this + 0x90) = CONCAT44(*(undefined4 *)(this + 0x2c),(int)*(undefined8 *)(this + 0x3c))
  ;
  *(ulong *)(this + 0xa8) = CONCAT44(*(undefined4 *)(this + 0x4c),*(undefined4 *)(this + 0x5c));
  *(undefined8 *)(this + 0xa0) = 0;
  auVar3._12_4_ = *(undefined4 *)(this + 0x54);
  *(ulong *)(this + 0xb8) = CONCAT44(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x20));
  *(ulong *)(this + 0xb0) = CONCAT44(*(undefined4 *)(this + 0x30),(int)*(undefined8 *)(this + 0x40))
  ;
  *(ulong *)(this + 200) = CONCAT44(*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x60));
  *(undefined8 *)(this + 0xc0) = 0;
  *(ulong *)(this + 0xd8) = CONCAT44(*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x24));
  *(ulong *)(this + 0xd0) = CONCAT44(*(undefined4 *)(this + 0x34),(int)*(undefined8 *)(this + 0x44))
  ;
  *(long *)(this + 0xe8) = auVar3._8_8_;
  *(undefined8 *)(this + 0xe0) = auVar3._0_8_;
  return;
}


