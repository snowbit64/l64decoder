// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitConvexHull
// Entry Point: 0098a9b0
// Size: 616 bytes
// Signature: undefined __cdecl splitConvexHull(Brep * param_1, BrepPlane * param_2, Matrix4x4 * param_3, float param_4, Brep * * param_5, Brep * * param_6)


/* MeshSplitUtil::splitConvexHull(Brep*, BrepPlane const&, Matrix4x4 const&, float, Brep*&, Brep*&)
    */

void MeshSplitUtil::splitConvexHull
               (Brep *param_1,BrepPlane *param_2,Matrix4x4 *param_3,float param_4,Brep **param_5,
               Brep **param_6)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *this;
  long *plVar4;
  long *this_00;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_e8;
  float fStack_e4;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  Matrix4x4 aMStack_c8 [64];
  float local_88;
  float local_84;
  float local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *param_5 = (Brep *)0x0;
  *param_6 = (Brep *)0x0;
  uVar3 = Brep::classify(param_1,param_2);
  switch(uVar3) {
  case 0:
    *param_5 = param_1;
  case 1:
    *param_6 = param_1;
    break;
  case 2:
    *param_5 = param_1;
    break;
  case 3:
    this = (long *)Brep::clone();
    local_e0 = (void *)0x0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
                    /* try { // try from 0098aa50 to 0098aa73 has its CatchHandler @ 0098ac18 */
    Brep::clip((Brep *)this,(vector *)&local_e0,param_3,0.0,0.0,-1,1.0,true,false);
    if (local_e0 == local_d8) {
      *param_5 = param_1;
      *param_6 = param_1;
    }
    else {
      iVar1 = *(int *)(this + 0x5f6);
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
                    /* try { // try from 0098aaac to 0098aab7 has its CatchHandler @ 0098ac28 */
          plVar4 = (long *)Brep::extractShell((Brep *)this,(ushort)iVar5);
                    /* try { // try from 0098aabc to 0098aabf has its CatchHandler @ 0098ac24 */
          this_00 = (long *)BrepUtil::createConvex((Brep *)plVar4);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
                    /* try { // try from 0098aaec to 0098aafb has its CatchHandler @ 0098ac1c */
          if (((((int)((ulong)(this_00[0x5ee] - this_00[0x5ed]) >> 5) == 0) ||
               (BrepUtil::getOrientedBoundingBox((Brep *)this_00,aMStack_c8,(Vector3 *)&local_88),
               local_88 < param_4)) || (local_84 < param_4)) || (local_80 < param_4)) {
LAB_0098aa90:
            (**(code **)(*this_00 + 8))(this_00);
          }
          else {
                    /* try { // try from 0098ab20 to 0098ab57 has its CatchHandler @ 0098ac20 */
            Brep::getPlaneExtents((Brep *)this_00,param_2,&fStack_e4,&local_e8);
            if (local_e8 <= fStack_e4) {
              if (*param_6 != (Brep *)0x0) {
                    /* try { // try from 0098ab84 to 0098ab93 has its CatchHandler @ 0098ac20 */
                fVar6 = (float)Brep::volume();
                fVar7 = (float)Brep::volume();
                if (fVar7 <= fVar6) goto LAB_0098aa90;
                if ((long *)*param_6 != (long *)0x0) {
                  (**(code **)(*(long *)*param_6 + 8))();
                }
              }
              *param_6 = (Brep *)this_00;
            }
            else {
              if (*param_5 != (Brep *)0x0) {
                fVar6 = (float)Brep::volume();
                fVar7 = (float)Brep::volume();
                if (fVar7 <= fVar6) goto LAB_0098aa90;
                if ((long *)*param_5 != (long *)0x0) {
                  (**(code **)(*(long *)*param_5 + 8))();
                }
              }
              *param_5 = (Brep *)this_00;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
    }
    (**(code **)(*this + 8))(this);
    if (local_e0 != (void *)0x0) {
      local_d8 = local_e0;
      operator_delete(local_e0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


