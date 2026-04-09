// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertex
// Entry Point: 009ba880
// Size: 16 bytes
// Signature: undefined __thiscall getVertex(btTriangleShape * this, int param_1, btVector3 * param_2)


/* btTriangleShape::getVertex(int, btVector3&) const */

void __thiscall btTriangleShape::getVertex(btTriangleShape *this,int param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + (long)param_1 * 0x10 + 0x50);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(this + (long)param_1 * 0x10 + 0x58);
  *(undefined8 *)param_2 = uVar1;
  return;
}


