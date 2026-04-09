// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEmitterShapeMovement
// Entry Point: 008da93c
// Size: 36 bytes
// Signature: undefined __thiscall getEmitterShapeMovement(IndexedTriangleSetEmitterShape * this, Vector3 * param_1, Vector3 * param_2)


/* IndexedTriangleSetEmitterShape::getEmitterShapeMovement(Vector3&, Vector3&) */

void __thiscall
IndexedTriangleSetEmitterShape::getEmitterShapeMovement
          (IndexedTriangleSetEmitterShape *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x30);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x34);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x3c);
  *(undefined8 *)param_2 = uVar1;
  return;
}


