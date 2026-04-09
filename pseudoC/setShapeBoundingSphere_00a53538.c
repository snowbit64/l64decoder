// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeBoundingSphere
// Entry Point: 00a53538
// Size: 32 bytes
// Signature: undefined __thiscall setShapeBoundingSphere(GsShape * this, Vector3 * param_1, float param_2)


/* GsShape::setShapeBoundingSphere(Vector3 const&, float) */

void __thiscall GsShape::setShapeBoundingSphere(GsShape *this,Vector3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0x1c4) = param_2;
  *(undefined4 *)(this + 0x1c0) = uVar1;
  *(undefined8 *)(this + 0x1b8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00a53554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x50))();
  return;
}


