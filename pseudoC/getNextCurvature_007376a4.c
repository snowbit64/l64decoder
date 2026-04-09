// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextCurvature
// Entry Point: 007376a4
// Size: 656 bytes
// Signature: undefined __thiscall getNextCurvature(VehicleNavigationAgent * this, ExtractionState * param_1, float * param_2, float * param_3, bool * param_4, bool * param_5, PlanarPose * param_6, float param_7, float param_8)


/* VehicleNavigationAgent::getNextCurvature(ExtractionState&, float&, float&, bool&, bool&,
   PlanarPose const*, float, float) const */

float __thiscall
VehicleNavigationAgent::getNextCurvature
          (VehicleNavigationAgent *this,ExtractionState *param_1,float *param_2,float *param_3,
          bool *param_4,bool *param_5,PlanarPose *param_6,float param_7,float param_8)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool local_7c [4];
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)param_6;
  fVar5 = *(float *)(*(long *)(this + 0x12a0) + 0x34);
  fVar7 = -fVar5;
  if (((fVar8 < fVar7 || fVar5 <= fVar8) && (fVar8 < fVar7 || fVar8 != fVar5)) ||
     (fVar8 = *(float *)(param_6 + 4),
     (fVar8 < fVar7 || fVar5 <= fVar8) && (fVar8 < fVar7 || fVar8 != fVar5))) {
    fVar5 = INFINITY;
  }
  else if (*(ushort *)param_1 == 0xffff) {
    fVar5 = (float)getNextHeadingAndCurvature
                             (this,(Vector2 *)&local_70,&local_74,param_3,param_4,param_5,
                              (ushort *)&local_78,param_6,param_7,param_8 < 0.0);
    if (ABS(fVar5) != INFINITY) {
      *(ushort *)param_1 = local_78._0_2_;
      if (((local_78._0_2_ == 0xffff) && (ABS(*param_3) == INFINITY)) &&
         (uVar3 = filterClosestRoadSegment
                            (this,param_1,(Vector2 *)&local_70,&local_74,4.0,fVar5,param_6,*param_5)
         , (uVar3 & 1) != 0)) {
        fVar8 = *(float *)(this + 0x138c);
        fVar7 = fVar8;
        if (local_74 <= fVar8) {
          fVar7 = local_74;
        }
        bVar2 = -fVar8 <= local_74;
        local_74 = -fVar8;
        if (bVar2) {
          local_74 = fVar7;
        }
      }
      fVar7 = (float)NEON_fmin(param_8,0xbf800000);
      if (0.0 <= param_8) {
        fVar7 = param_8;
      }
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 8),local_6c,
                                local_70 * -*(float *)(param_6 + 0xc));
      fVar8 = local_74 + fVar8 / fVar7;
      fVar6 = *(float *)(this + 0x138c);
      fVar7 = fVar6;
      if (fVar8 <= fVar6) {
        fVar7 = fVar8;
      }
      fVar4 = -fVar6;
      if (-fVar6 <= fVar8) {
        fVar4 = fVar7;
      }
      *param_2 = fVar4;
    }
  }
  else {
    fVar5 = (float)getNextCurvatureTeleport
                             (this,(Vector2 *)&local_70,&local_74,&local_78,local_7c,
                              *(ushort *)param_1,param_6,param_7);
    if (ABS(fVar5) != INFINITY) {
      fVar7 = (float)NEON_fmin(param_8,0xbf800000);
      if (0.0 <= param_8) {
        fVar7 = param_8;
      }
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 8),local_6c,
                                local_70 * -*(float *)(param_6 + 0xc));
      fVar8 = local_74 + fVar8 / fVar7;
      fVar6 = *(float *)(this + 0x138c);
      fVar7 = fVar6;
      if (fVar8 <= fVar6) {
        fVar7 = fVar8;
      }
      fVar4 = -fVar6;
      if (-fVar6 <= fVar8) {
        fVar4 = fVar7;
      }
      *param_2 = fVar4;
      *param_3 = INFINITY;
      *param_4 = false;
      *param_5 = false;
      if (local_7c[0] != false) {
        *(undefined2 *)param_1 = 0xffff;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar5;
}


