// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeClosestPoint2D
// Entry Point: 0073397c
// Size: 8 bytes
// Signature: undefined __thiscall computeClosestPoint2D(RoadSegment * this, float * param_1, uint param_2, float param_3, float param_4, float param_5, Vector2 * param_6)


/* RoadSegment::computeClosestPoint2D(float&, unsigned int, float, float, float, Vector2 const&)
   const */

void __thiscall
RoadSegment::computeClosestPoint2D
          (RoadSegment *this,float *param_1,uint param_2,float param_3,float param_4,float param_5,
          Vector2 *param_6)

{
  CubicSpline::computeClosestPoint2D
            (*(CubicSpline **)this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


