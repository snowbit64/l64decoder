// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 00b540f4
// Size: 4 bytes
// Signature: undefined __thiscall getPositionAndDirection(CubicSpline * this, uint param_1, float param_2, Vector3 * param_3, Vector3 * param_4)


/* CubicSpline::getPositionAndDirection(unsigned int, float, Vector3&, Vector3&) const */

void __thiscall
CubicSpline::getPositionAndDirection
          (CubicSpline *this,uint param_1,float param_2,Vector3 *param_3,Vector3 *param_4)

{
  evaluate(this,param_1,param_2,param_3,param_4);
  return;
}


