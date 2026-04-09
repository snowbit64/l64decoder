// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeClosestPoint2D
// Entry Point: 00733974
// Size: 8 bytes
// Signature: undefined __thiscall computeClosestPoint2D(RoadSegment * this, uint * param_1, float * param_2, Vector2 * param_3)


/* RoadSegment::computeClosestPoint2D(unsigned int&, float&, Vector2 const&) const */

void __thiscall
RoadSegment::computeClosestPoint2D(RoadSegment *this,uint *param_1,float *param_2,Vector2 *param_3)

{
  CubicSpline::computeClosestPoint2D(*(CubicSpline **)this,param_1,param_2,param_3);
  return;
}


