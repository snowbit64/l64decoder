// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 0087bbf0
// Size: 116 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* ObstacleWallDetector::RayReportWall::onHit(TransformGroup*, Vector3 const&, float, Vector3
   const&, int, TransformGroup*, bool) */

undefined8
ObstacleWallDetector::RayReportWall::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(ulong)(uint)param_5;
  *(undefined4 *)(param_1 + 8) = 1;
  if (((byte)param_1[9] & 1) == 0) {
    *(float *)(param_1 + 0xc) = param_3;
  }
  if (((ulong)param_7 != 0) && (*(char *)((ulong)param_7 + 0x10) < '\0')) {
    uVar3 = NEON_fmadd(*puVar1,0,puVar1[1]);
    fVar2 = (float)NEON_fmadd(puVar1[2],0,uVar3);
    if (fVar2 < 0.9) {
      *(undefined4 *)(param_1 + 0xc) = 0x7f7fffff;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}


