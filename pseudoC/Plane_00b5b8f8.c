// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Plane
// Entry Point: 00b5b8f8
// Size: 24 bytes
// Signature: undefined __thiscall Plane(Plane * this, Vector3 * param_1, float param_2)


/* Plane::Plane(Vector3 const&, float) */

void __thiscall Plane::Plane(Plane *this,Vector3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)this = uVar2;
  return;
}


