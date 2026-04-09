// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 00b540f8
// Size: 120 bytes
// Signature: undefined __thiscall getPositionAndDirection(CubicSpline * this, float param_1, Vector3 * param_2, Vector3 * param_3)


/* CubicSpline::getPositionAndDirection(float, Vector3&, Vector3&) const */

void __thiscall
CubicSpline::getPositionAndDirection
          (CubicSpline *this,float param_1,Vector3 *param_2,Vector3 *param_3)

{
  long lVar1;
  float local_40;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getKnotAndParam(this,&local_3c,&local_40,param_1);
  evaluate(this,local_3c,local_40,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


