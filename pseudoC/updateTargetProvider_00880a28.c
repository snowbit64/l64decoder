// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTargetProvider
// Entry Point: 00880a28
// Size: 100 bytes
// Signature: undefined __thiscall updateTargetProvider(AnimalSteering * this, float param_1)


/* AnimalSteering::updateTargetProvider(float) */

void __thiscall AnimalSteering::updateTargetProvider(AnimalSteering *this,float param_1)

{
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(*(long *)(this + 0xd8) + 0x18) = *(undefined8 *)(this + 4);
    *(undefined8 *)(*(long *)(this + 0xd8) + 0x20) = *(undefined8 *)(this + 0xc);
    (**(code **)(**(long **)(this + 0xd8) + 0x10))(param_1 * 0.001);
    *(undefined8 *)(this + 0x24) = *(undefined8 *)(*(long *)(this + 0xd8) + 8);
  }
  return;
}


