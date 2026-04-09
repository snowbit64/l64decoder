// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveCoordExtremes
// Entry Point: 00733984
// Size: 8 bytes
// Signature: undefined __thiscall solveCoordExtremes(RoadSegment * this, float * param_1, float * param_2, float * param_3, float * param_4, uint param_5, float param_6, float param_7, int param_8)


/* RoadSegment::solveCoordExtremes(float&, float&, float&, float&, unsigned int, float, float, int)
   const */

void __thiscall
RoadSegment::solveCoordExtremes
          (RoadSegment *this,float *param_1,float *param_2,float *param_3,float *param_4,
          uint param_5,float param_6,float param_7,int param_8)

{
  CubicSpline::solveCoordExtremes
            (*(CubicSpline **)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


