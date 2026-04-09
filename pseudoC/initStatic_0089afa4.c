// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initStatic
// Entry Point: 0089afa4
// Size: 164 bytes
// Signature: undefined __thiscall initStatic(SimulatedPedestrian * this, TransformGroup * param_1)


/* SimulatedPedestrian::initStatic(TransformGroup*) */

void __thiscall SimulatedPedestrian::initStatic(SimulatedPedestrian *this,TransformGroup *param_1)

{
  undefined4 uVar1;
  
  this[0x88] = (SimulatedPedestrian)0x0;
  this[0x71] = (SimulatedPedestrian)0x1;
  RawTransformGroup::updateWorldTransformation();
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0x24) = uVar1;
  RawTransformGroup::updateWorldTransformation();
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 0xd8),0,
                     *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 200) * 0.0);
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 0xdc),0,
                     *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xcc) * 0.0);
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 0xe0),0,
                     *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xd0) * 0.0);
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


