// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RoadSegment
// Entry Point: 007332f8
// Size: 184 bytes
// Signature: undefined __thiscall RoadSegment(RoadSegment * this, CubicSpline * param_1, Matrix4x4 * param_2, uint param_3, bool param_4)


/* RoadSegment::RoadSegment(CubicSpline const*, Matrix4x4 const&, unsigned int, bool) */

void __thiscall
RoadSegment::RoadSegment
          (RoadSegment *this,CubicSpline *param_1,Matrix4x4 *param_2,uint param_3,bool param_4)

{
  FORM FVar1;
  uint uVar2;
  CubicSpline *this_00;
  
  FVar1 = Spline::getForm();
  this_00 = (CubicSpline *)operator_new(0x40);
                    /* try { // try from 0073333c to 00733343 has its CatchHandler @ 007333b0 */
  CubicSpline::CubicSpline(this_00,FVar1);
  *(CubicSpline **)this = this_00;
  *(undefined4 *)(this + 0x10) = 0x7f800000;
  *(uint *)(this + 0x14) = param_3;
  this[0x18] = (RoadSegment)param_4;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 8) = 0x7f8000007f800000;
                    /* try { // try from 00733370 to 00733397 has its CatchHandler @ 007333c0 */
  uVar2 = Spline::getNumOfCV();
  Spline::setCVs((Spline *)this_00,uVar2,
                 (float *)(*(long *)(param_1 + 0x18) +
                          (ulong)(uint)(*(int *)(param_1 + 0x20) * 3) * 4),param_2);
  return;
}


