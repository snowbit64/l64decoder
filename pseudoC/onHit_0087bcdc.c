// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 0087bcdc
// Size: 48 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* ObstacleWallDetector::RayReportWater::onHit(TransformGroup*, Vector3 const&, float, Vector3
   const&, int, TransformGroup*, bool) */

undefined8
ObstacleWallDetector::RayReportWater::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  *(undefined4 *)(param_1 + 8) = 1;
  if (((byte)param_1[9] & 1) == 0) {
    *(float *)(param_1 + 0xc) = param_3;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}


