// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionDirectionAndCurvature
// Entry Point: 0073396c
// Size: 8 bytes
// Signature: undefined __thiscall getPositionDirectionAndCurvature(RoadSegment * this, uint param_1, float param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5)


/* RoadSegment::getPositionDirectionAndCurvature(unsigned int, float, Vector3&, Vector3&, Vector3&)
   const */

void __thiscall
RoadSegment::getPositionDirectionAndCurvature
          (RoadSegment *this,uint param_1,float param_2,Vector3 *param_3,Vector3 *param_4,
          Vector3 *param_5)

{
  CubicSpline::getPositionDirectionAndCurvature
            (*(CubicSpline **)this,param_1,param_2,param_3,param_4,param_5);
  return;
}


