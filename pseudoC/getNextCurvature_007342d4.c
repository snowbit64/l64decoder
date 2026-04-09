// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextCurvature
// Entry Point: 007342d4
// Size: 1408 bytes
// Signature: undefined __thiscall getNextCurvature(VehicleNavigationAgentEntity * this, float * param_1, float * param_2, AGENT_STATE * param_3, Vector2 * param_4, Vector2 * param_5, float param_6, float param_7, float param_8)


/* VehicleNavigationAgentEntity::getNextCurvature(float&, float&,
   VehicleNavigationAgentEntity::AGENT_STATE&, Vector2 const*, Vector2 const*, float, float, float)
    */

void __thiscall
VehicleNavigationAgentEntity::getNextCurvature
          (VehicleNavigationAgentEntity *this,float *param_1,float *param_2,AGENT_STATE *param_3,
          Vector2 *param_4,Vector2 *param_5,float param_6,float param_7,float param_8)

{
  vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *this_00;
  long lVar1;
  TrafficSystem *this_01;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  double dVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  float fVar18;
  void *local_c0;
  void *pvStack_b8;
  float local_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)param_3 = 0;
  *param_2 = 0.0;
  *param_1 = 0.0;
  this[0x90] = (VehicleNavigationAgentEntity)0x1;
  uVar4 = (ulong)(*(int *)(this + 0x50) + 1);
  if (*(int *)(this + 0x50) != -1) {
    pfVar9 = (float *)(this + 0xa4);
    pfVar6 = (float *)param_5;
    puVar11 = (undefined8 *)param_4;
    do {
      *(undefined8 *)(pfVar9 + -3) = *puVar11;
      fVar18 = *pfVar6;
      fVar13 = pfVar6[1];
      fVar15 = (float)NEON_fmadd(fVar18,fVar18,fVar13 * fVar13);
      fVar14 = 1.0;
      if (1e-06 < fVar15) {
        fVar14 = 1.0 / SQRT(fVar15);
      }
      puVar11 = puVar11 + 1;
      pfVar6 = pfVar6 + 2;
      uVar4 = uVar4 - 1;
      pfVar9[-1] = fVar14 * fVar18;
      *pfVar9 = fVar14 * fVar13;
      pfVar9 = pfVar9 + 4;
    } while (uVar4 != 0);
  }
  *(float *)(this + 0x94) = param_7;
  *(float *)(this + 0xe8) = param_6;
  if ((*(byte *)(*(long *)(this + 0x38) + 0x1383) & 1) == 0) {
    if (this[0x54] == (VehicleNavigationAgentEntity)0x0) {
      pvStack_b8 = *(void **)(this + 0x60);
      local_c0 = *(void **)(this + 0x58);
      this[0x54] = (VehicleNavigationAgentEntity)0x1;
      VehicleNavigationAgent::setGoal
                (*(VehicleNavigationAgent **)(this + 0x38),(PlanarPose *)&local_c0);
      VehicleNavigationAgent::setStart
                (*(VehicleNavigationAgent **)(this + 0x38),(PlanarPose *)(this + 0x98));
      VehicleNavigationPlanner::requestPath
                (*(VehicleNavigationPlanner **)(this + 0x28),
                 *(VehicleNavigationAgent **)(this + 0x38));
      *(undefined4 *)(this + 0x84) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined4 *)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x7c) = 0xffffffffffffffff;
      *(undefined4 *)param_3 = 2;
      goto LAB_007347d8;
    }
    if (this[0x120] != (VehicleNavigationAgentEntity)0x0) {
      lVar5 = *(long *)(this + 0x128);
      lVar7 = *(long *)(this + 0x130) - lVar5 >> 4;
      uVar12 = lVar7 * -0x5555555555555555;
      uVar8 = (ulong)((int)uVar12 + 1);
      uVar4 = uVar8 + lVar7 * 0x5555555555555555;
      if (uVar8 < uVar12 || uVar4 == 0) {
        if (uVar8 < uVar12) {
          *(ulong *)(this + 0x130) = lVar5 + uVar8 * 0x30;
        }
      }
      else {
        std::__ndk1::
        vector<VehicleNavigationAgentEntity::LogEntry,std::__ndk1::allocator<VehicleNavigationAgentEntity::LogEntry>>
        ::__append((vector<VehicleNavigationAgentEntity::LogEntry,std::__ndk1::allocator<VehicleNavigationAgentEntity::LogEntry>>
                    *)(this + 0x128),uVar4);
        lVar5 = *(long *)(this + 0x128);
      }
      lVar5 = lVar5 + (uVar12 & 0xffffffff) * 0x30;
      *(float *)(lVar5 + 0x10) = param_7;
      *(float *)(lVar5 + 0x14) = param_8;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)param_4;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)param_5;
      uVar16 = NEON_rev32(*(undefined8 *)(this + 0x7c),2);
      uVar16 = NEON_ext(uVar16,uVar16,2,1);
      *(undefined8 *)(lVar5 + 0x28) = uVar16;
    }
    lVar5 = *(long *)(this + 0x48);
    this_00 = (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)(this + 0x108);
    if (this_00 != (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)(lVar5 + 0x40)) {
      std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::assign<OrientedBox*>
                (this_00,*(OrientedBox **)(lVar5 + 0x40),*(OrientedBox **)(lVar5 + 0x48));
    }
    VehicleNavigationAgent::setObstacles
              (*(VehicleNavigationAgent **)(this + 0x38),(vector *)this_00);
    local_9c = 3.402823e+38;
    fVar13 = (float)VehicleNavigationAgent::getNextCurvatureAndSpeed
                              (*(VehicleNavigationAgent **)(this + 0x38),
                               *(StoppingPath **)(*(long *)(this + 0x48) + 0x20),
                               (ExtractionState *)(this + 0x7c),param_1,&local_9c,param_2,
                               (PlanarPose *)(this + 0x98),*(float *)(this + 0x8c),param_7,param_8);
    fVar18 = (param_7 * 0.5 * param_7) / (*(float *)(this + 0x100) * 0.5);
    uVar4 = VehicleNavigationMapGenerator::getHasBlockingPosition
                      (*(VehicleNavigationMapGenerator **)(this + 0x30),fVar18,fVar18 + 6.0,
                       *(ushort *)(this + 0x80),*(float *)(this + 0x84),*(ushort *)(this + 0x7e));
    if ((uVar4 & 1) != 0) {
      fVar14 = fVar18 + -3.0;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      fVar14 = fVar14 * *(float *)(this + 0x100) * 0.5;
      fVar15 = SQRT(fVar14 + fVar14);
      fVar14 = *param_2;
      if (fVar15 <= *param_2) {
        fVar14 = fVar15;
      }
      *param_2 = fVar14;
    }
    this_01 = *(TrafficSystem **)(*(long *)(this + 0x30) + 0x260);
    if ((this_01 != (TrafficSystem *)0x0) && ((ulong)*(ushort *)(this + 0x80) != 0xffff)) {
      lVar5 = *(long *)(*(long *)(*(long *)(this + 0x30) + 0x108) + 0x28);
      if ((ulong)*(ushort *)(this + 0x7e) == 0xffff) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *(uint *)(lVar5 + (ulong)*(ushort *)(this + 0x7e) * 0x50 + 0x14);
      }
      uVar4 = TrafficSystem::getHasBlockingPosition
                        (this_01,fVar18,fVar18 + 6.0,
                         *(uint *)(lVar5 + (ulong)*(ushort *)(this + 0x80) * 0x50 + 0x14),
                         *(float *)(this + 0x84),uVar2);
      if ((uVar4 & 1) != 0) {
        fVar18 = fVar18 + -3.0;
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 * *(float *)(this + 0x100) * 0.5;
        fVar14 = SQRT(fVar18 + fVar18);
        fVar18 = *param_2;
        if (fVar14 <= *param_2) {
          fVar18 = fVar14;
        }
        *param_2 = fVar18;
      }
    }
    *(float *)(this + 0x8c) = *param_1;
    fVar18 = (float)StoppingPath::getCurvature
                              (*(StoppingPath **)(*(long *)(this + 0x48) + 0x20),param_8 + param_8);
    *param_1 = fVar18;
    if (this[0x120] != (VehicleNavigationAgentEntity)0x0) {
      pfVar6 = (float *)(*(long *)(this + 0x128) +
                        (ulong)((int)((ulong)(*(long *)(this + 0x130) - *(long *)(this + 0x128)) >>
                                     4) * -0x55555555 - 1) * 0x30);
      *pfVar6 = fVar13;
      pfVar6[1] = *param_1;
      pfVar6[2] = local_9c;
      pfVar6[3] = *param_2;
    }
    if (this[0x88] == (VehicleNavigationAgentEntity)0x0) {
      DynamicAvoidance::addObstacle(*(Obstacle **)(this + 0x40));
      this[0x88] = (VehicleNavigationAgentEntity)0x1;
    }
    if (fVar13 == INFINITY) {
      uVar2 = *(uint *)(this + 0x78);
      if (uVar2 != 0) {
        *param_2 = 0.0;
        if (*(long *)(this + 0x70) != 0) {
          dVar10 = 2500.0;
          if (uVar2 < 7) {
            dVar10 = 5000.0;
          }
          lVar5 = Watch::getCurrentTicks();
          dVar17 = (double)Watch::convertTicksToMs(lVar5 - *(long *)(this + 0x70));
          if (dVar17 <= dVar10) {
            uVar3 = 1;
            goto LAB_00734420;
          }
          uVar2 = *(uint *)(this + 0x78);
        }
        *(uint *)(this + 0x78) = uVar2 - 1;
        uVar16 = Watch::getCurrentTicks();
        *(undefined8 *)(this + 0x70) = uVar16;
        VehicleNavigationAgent::setStart
                  (*(VehicleNavigationAgent **)(this + 0x38),(PlanarPose *)(this + 0x98));
        DynamicAvoidance::rangeQuery
                  (*(DynamicObstacle **)(this + 0x40),*(Vector2 **)(this + 0x48),0.5);
                    /* try { // try from 00734770 to 00734783 has its CatchHandler @ 00734854 */
        VehicleNavigationAgent::setObstacles
                  (*(VehicleNavigationAgent **)(this + 0x38),(vector *)&local_c0);
        VehicleNavigationPlanner::requestPath
                  (*(VehicleNavigationPlanner **)(this + 0x28),
                   *(VehicleNavigationAgent **)(this + 0x38));
        *(undefined4 *)param_3 = 2;
        if (local_c0 != (void *)0x0) {
          pvStack_b8 = local_c0;
          operator_delete(local_c0);
        }
        goto LAB_007347d8;
      }
      uVar3 = 3;
    }
    else {
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined4 *)(this + 0x78) = 8;
      if ((0.2 <= param_7) || (1.0 <= local_9c)) goto LAB_007347d8;
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 2;
  }
LAB_00734420:
  *(undefined4 *)param_3 = uVar3;
LAB_007347d8:
  *(bool *)(*(long *)(this + 0x48) + 0x38) =
       *(short *)(this + 0x80) == -1 && ABS(*(float *)(this + 0x94)) < 0.5;
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


