// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeEstimatedCostToStart
// Entry Point: 00737934
// Size: 104 bytes
// Signature: undefined __cdecl computeEstimatedCostToStart(NodeId param_1)


/* VehicleNavigationAgent::computeEstimatedCostToStart(NodeId) const */

float VehicleNavigationAgent::computeEstimatedCostToStart(NodeId param_1)

{
  ulong uVar1;
  NodeId in_w1;
  float fVar2;
  float fVar3;
  float in_s1;
  
  uVar1 = (ulong)param_1;
  fVar2 = (float)VehicleNavigationGridAdapter::getNodePos
                           (*(VehicleNavigationGridAdapter **)(uVar1 + 0x12a0),in_w1);
  fVar2 = fVar2 - *(float *)(uVar1 + 0x1310);
  in_s1 = in_s1 - *(float *)(uVar1 + 0x1314);
  fVar3 = (float)NEON_fmadd(in_s1,in_s1,fVar2 * fVar2);
  fVar2 = SQRT(fVar3) + 1048576.0;
  if (8191.75 < SQRT(fVar3)) {
    fVar2 = -NAN;
  }
  return fVar2;
}


