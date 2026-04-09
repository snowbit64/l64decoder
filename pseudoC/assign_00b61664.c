// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign
// Entry Point: 00b61664
// Size: 24 bytes
// Signature: undefined __thiscall assign(BoundingSphere * this, Vector3 * param_1, float param_2)


/* BoundingSphere::assign(Vector3 const&, float) */

void __thiscall BoundingSphere::assign(BoundingSphere *this,Vector3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined8 *)(this + 0xc) = uVar2;
  return;
}


