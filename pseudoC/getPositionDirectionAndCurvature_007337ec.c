// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionDirectionAndCurvature
// Entry Point: 007337ec
// Size: 192 bytes
// Signature: undefined __thiscall getPositionDirectionAndCurvature(RoadSegment * this, float param_1, PlanarPose * param_2, float * param_3)


/* RoadSegment::getPositionDirectionAndCurvature(float, PlanarPose&, float&) const */

void __thiscall
RoadSegment::getPositionDirectionAndCurvature
          (RoadSegment *this,float param_1,PlanarPose *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  Vector3 aVStack_68 [4];
  float local_64;
  float local_58 [2];
  float local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  CubicSpline::getPositionDirectionAndCurvature
            (*(CubicSpline **)this,param_1,(Vector3 *)local_48,(Vector3 *)local_58,aVStack_68);
  fVar3 = (float)NEON_fmadd(local_58[0],local_58[0],local_50 * local_50);
  fVar2 = 1.0;
  *(undefined4 *)param_2 = local_48[0];
  *(undefined4 *)(param_2 + 4) = local_40;
  if (1e-06 < fVar3) {
    fVar2 = 1.0 / SQRT(fVar3);
  }
  *(float *)(param_2 + 8) = local_58[0] * fVar2;
  *(float *)(param_2 + 0xc) = local_50 * fVar2;
  *param_3 = -local_64;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


