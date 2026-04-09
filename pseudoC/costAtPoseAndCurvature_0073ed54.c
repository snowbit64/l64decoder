// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: costAtPoseAndCurvature
// Entry Point: 0073ed54
// Size: 140 bytes
// Signature: undefined __thiscall costAtPoseAndCurvature(VehicleNavigationAgent * this, PlanarPose * param_1, float param_2, bool param_3)


/* VehicleNavigationAgent::costAtPoseAndCurvature(PlanarPose const&, float, bool) const */

void __thiscall
VehicleNavigationAgent::costAtPoseAndCurvature
          (VehicleNavigationAgent *this,PlanarPose *param_1,float param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ushort auStack_94 [2];
  float fStack_90;
  bool abStack_8c [4];
  bool abStack_88 [4];
  float fStack_84;
  undefined8 auStack_80 [10];
  Vector2 aVStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(this + 0x13a0) != 0xffffffff) {
    lVar2 = (ulong)*(uint *)(this + 0x13a0) + 1;
    puVar3 = auStack_80;
    do {
      uVar4 = *(undefined8 *)param_1;
      lVar2 = lVar2 + -1;
      puVar3[1] = *(undefined8 *)(param_1 + 8);
      *puVar3 = uVar4;
      puVar3 = puVar3 + 2;
    } while (lVar2 != 0);
  }
  getNextHeadingAndCurvature
            (this,aVStack_30,&fStack_84,&fStack_90,abStack_88,abStack_8c,auStack_94,
             (PlanarPose *)auStack_80,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


