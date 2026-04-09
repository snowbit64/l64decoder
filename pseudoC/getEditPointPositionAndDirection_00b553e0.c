// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEditPointPositionAndDirection
// Entry Point: 00b553e0
// Size: 68 bytes
// Signature: undefined __thiscall getEditPointPositionAndDirection(CubicSpline * this, uint param_1, Vector3 * param_2, Vector3 * param_3)


/* CubicSpline::getEditPointPositionAndDirection(unsigned int, Vector3&, Vector3&) const */

void __thiscall
CubicSpline::getEditPointPositionAndDirection
          (CubicSpline *this,uint param_1,Vector3 *param_2,Vector3 *param_3)

{
  Spline::getTimeAtCV((Spline *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00b55420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(this,param_2,param_3);
  return;
}


