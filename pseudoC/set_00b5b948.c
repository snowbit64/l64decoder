// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b5b948
// Size: 56 bytes
// Signature: undefined __thiscall set(Plane * this, Vector3 * param_1, Vector3 * param_2)


/* Plane::set(Vector3 const&, Vector3 const&) */

void __thiscall Plane::set(Plane *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)this = uVar1;
  fVar2 = (float)NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)param_1,
                            *(float *)(param_2 + 4) * *(float *)(param_1 + 4));
  uVar3 = NEON_fnmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),-fVar2);
  *(undefined4 *)(this + 0xc) = uVar3;
  return;
}


