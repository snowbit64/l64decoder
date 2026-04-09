// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00872718
// Size: 300 bytes
// Signature: undefined __thiscall set(NavigationPath * this, NavigationMeshPath * param_1, Matrix4x4 * param_2)


/* NavigationPath::set(NavigationMeshPath*, Matrix4x4 const&) */

void __thiscall
NavigationPath::set(NavigationPath *this,NavigationMeshPath *param_1,Matrix4x4 *param_2)

{
  int iVar1;
  uint uVar2;
  void *__src;
  float *pfVar3;
  float *pfVar4;
  LinearSpline *this_00;
  int iVar5;
  
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  *(undefined8 *)(this + 0x20) = 0;
  uVar2 = NavigationMeshPath::getNumOfWaypoints();
  __src = (void *)NavigationMeshPath::getWaypoints();
  iVar5 = 1;
  if (this[0x28] != (NavigationPath)0x0) {
    iVar5 = 2;
  }
  pfVar3 = (float *)operator_new__((ulong)((iVar5 + uVar2) * 3) << 2);
  pfVar4 = (float *)NavigationMeshPath::getStartPoint();
  *pfVar3 = *pfVar4;
  pfVar3[1] = pfVar4[1];
  pfVar3[2] = pfVar4[2];
  memcpy(pfVar3 + 3,__src,(ulong)uVar2 * 0xc);
  if (this[0x28] != (NavigationPath)0x0) {
    pfVar4 = (float *)NavigationMeshPath::getEndPoint();
    iVar1 = uVar2 * 3;
    pfVar3[iVar1 + 3] = *pfVar4;
    pfVar3[iVar1 + 4] = pfVar4[1];
    pfVar3[iVar1 + 5] = pfVar4[2];
  }
  this_00 = (LinearSpline *)operator_new(0x38);
                    /* try { // try from 00872808 to 0087280f has its CatchHandler @ 00872844 */
  LinearSpline::LinearSpline(this_00,0);
  *(LinearSpline **)(this + 0x20) = this_00;
  Spline::setCVs((Spline *)this_00,iVar5 + uVar2,pfVar3,param_2);
  operator_delete__(pfVar3);
  return;
}


