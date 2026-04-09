// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoundingSphere
// Entry Point: 00b615a0
// Size: 88 bytes
// Signature: undefined __thiscall BoundingSphere(BoundingSphere * this, Vector3 * param_1, float param_2)


/* BoundingSphere::BoundingSphere(Vector3 const&, float) */

void __thiscall BoundingSphere::BoundingSphere(BoundingSphere *this,Vector3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  BoundingVolume::BoundingVolume((BoundingVolume *)this,0);
  *(undefined ***)this = &PTR__BoundingSphere_00fea370;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined8 *)(this + 0xc) = uVar2;
  return;
}


