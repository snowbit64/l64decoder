// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeClosestPoint2D
// Entry Point: 00b54d14
// Size: 244 bytes
// Signature: undefined __thiscall computeClosestPoint2D(CubicSpline * this, uint * param_1, float * param_2, Vector2 * param_3)


/* CubicSpline::computeClosestPoint2D(unsigned int&, float&, Vector2 const&) const */

float __thiscall
CubicSpline::computeClosestPoint2D(CubicSpline *this,uint *param_1,float *param_2,Vector2 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(this + 8);
  uVar2 = *(uint *)(this + 0x28);
  if (uVar2 == (iVar1 != 1)) {
    fVar4 = INFINITY;
  }
  else {
    uVar5 = 0;
    fVar4 = INFINITY;
    do {
      fVar6 = (float)computeClosestPoint2D(this,&local_6c,uVar5,0.0,1.0,0.001,param_3);
      if (fVar6 < fVar4) {
        *param_1 = uVar5;
        *param_2 = local_6c;
        fVar4 = fVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 - (iVar1 != 1) != uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


