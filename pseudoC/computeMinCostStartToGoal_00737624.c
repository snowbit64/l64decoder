// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMinCostStartToGoal
// Entry Point: 00737624
// Size: 128 bytes
// Signature: undefined computeMinCostStartToGoal(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::computeMinCostStartToGoal() const */

float VehicleNavigationAgent::computeMinCostStartToGoal(void)

{
  long lVar1;
  VehicleNavigationAgent *in_x0;
  float fVar2;
  bool abStack_48 [4];
  bool abStack_44 [4];
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  fVar2 = (float)getNextCurvature(in_x0,(ExtractionState *)&local_38,&fStack_3c,&fStack_40,
                                  abStack_44,abStack_48,(PlanarPose *)(in_x0 + 0x1310),0.0,1.0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return fVar2 + *(float *)(in_x0 + 0x137c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


