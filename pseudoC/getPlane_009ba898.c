// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlane
// Entry Point: 009ba898
// Size: 28 bytes
// Signature: undefined __thiscall getPlane(btTriangleShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btTriangleShape::getPlane(btVector3&, btVector3&, int) const */

void __thiscall
btTriangleShape::getPlane(btTriangleShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x009ba8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf8))(this,param_3,param_1,param_2);
  return;
}


