// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0072a96c
// Size: 2452 bytes
// Signature: undefined __cdecl update(float param_1)


/* VehicleNavigationMapGenerator::update(float) */

void VehicleNavigationMapGenerator::update(float param_1)

{
  UserAttributes *this;
  ushort *puVar1;
  uint uVar2;
  PhysicsObstacle **ppPVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  VehicleNavigationMapGenerator *in_x0;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  CubicSpline *pCVar15;
  void *pvVar16;
  long lVar17;
  undefined8 uVar18;
  IPhysicsTask *pIVar19;
  PhysicsObstacle **ppPVar20;
  void **ppvVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long **pplVar27;
  long **pplVar28;
  long **pplVar29;
  long **pplVar30;
  long **pplVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  long *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  float local_170;
  void *local_160;
  void *local_158;
  void *local_148;
  void *local_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  if ((in_x0[0x148] != (VehicleNavigationMapGenerator)0x0) &&
     (uVar12 = VehicleNavigationPlanner::isPlanningPaused(), (uVar12 & 1) != 0)) {
    if (*(char *)(*(long *)(*(long *)(in_x0 + 0x108) + 0xa8) + 0x58) != '\0') {
      lVar17 = *(long *)(in_x0 + 0x178);
      while (lVar17 != 0) {
        uVar12 = (ulong)*(uint *)(in_x0 + 0x118);
        pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x68);
        if ((((((pIVar19[0x39] == (IPhysicsTask)0x0) &&
               (pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x70),
               pIVar19[0x39] == (IPhysicsTask)0x0)) &&
              (pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x78),
              pIVar19[0x39] == (IPhysicsTask)0x0)) &&
             ((pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x80),
              pIVar19[0x39] == (IPhysicsTask)0x0 &&
              (pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x88),
              pIVar19[0x39] == (IPhysicsTask)0x0)))) &&
            ((pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x90),
             pIVar19[0x39] == (IPhysicsTask)0x0 &&
             ((pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0x98),
              pIVar19[0x39] == (IPhysicsTask)0x0 &&
              (pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0xa0),
              pIVar19[0x39] == (IPhysicsTask)0x0)))))) &&
           ((pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0xa8),
            pIVar19[0x39] == (IPhysicsTask)0x0 &&
            (pIVar19 = *(IPhysicsTask **)(in_x0 + uVar12 * 0x50 + 0xb0),
            pIVar19[0x39] == (IPhysicsTask)0x0)))) break;
        uVar12 = *(ulong *)(in_x0 + 0x170);
        puVar1 = (ushort *)
                 (*(long *)((long)*(void ***)(in_x0 + 0x158) + (uVar12 >> 7 & 0x1fffffffffffff8)) +
                 (uVar12 & 0x3ff) * 4);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        *(ulong *)(in_x0 + 0x170) = uVar12 + 1;
        *(long *)(in_x0 + 0x178) = lVar17 + -1;
        if (0x7ff < uVar12 + 1) {
          operator_delete(**(void ***)(in_x0 + 0x158));
          *(long *)(in_x0 + 0x158) = *(long *)(in_x0 + 0x158) + 8;
          *(long *)(in_x0 + 0x170) = *(long *)(in_x0 + 0x170) + -0x400;
        }
        *(undefined4 *)(pIVar19 + 0x3c) = 0;
        *(undefined4 *)(pIVar19 + 0x40) = 0;
        pIVar19[0x39] = (IPhysicsTask)0x1;
        uVar18 = *(undefined8 *)(in_x0 + 0x108);
        *(uint *)(pIVar19 + 0x30) = (uint)uVar5;
        *(uint *)(pIVar19 + 0x34) = (uint)uVar6;
        *(undefined8 *)(pIVar19 + 0x18) = uVar18;
        fillTerrainHeights(in_x0,(uint)uVar5,(uint)uVar6,(PhysicsTask *)pIVar19);
        fillBaseCosts(in_x0,(uint)uVar5,(uint)uVar6,(PhysicsTask *)pIVar19,(bool *)(pIVar19 + 0x38))
        ;
        *(undefined2 *)(pIVar19 + 0x39) = 0;
        FUN_00f276d0(1,*(long *)(pIVar19 + 0x18) + 8);
        FUN_00f276d0(1,pIVar19 + 0x10);
        Bt2ScenegraphPhysicsContext::addLowPriorityPostSimulationTask
                  (*(Bt2ScenegraphPhysicsContext **)(*(long *)(in_x0 + 0x108) + 0xa8),pIVar19);
        lVar17 = *(long *)(in_x0 + 0x178);
      }
    }
    lVar17 = *(long *)(in_x0 + 0x200);
    if (lVar17 != *(long *)(in_x0 + 0x208)) {
      uVar12 = *(long *)(in_x0 + 0x208) - lVar17;
      if ((int)(uVar12 >> 4) != 0) {
        lVar24 = 0;
        while( true ) {
          VehicleNavigationMap::removeRoad
                    ((VehicleNavigationMap *)(*(long *)(in_x0 + 0x108) + 0x10),
                     *(uint *)(lVar17 + lVar24));
          std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
          ::__erase_unique<unsigned_int>
                    ((__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
                      *)(in_x0 + 0x230),(uint *)(*(long *)(in_x0 + 0x200) + lVar24));
          plVar22 = *(long **)(*(long *)(in_x0 + 0x200) + lVar24 + 8);
          iVar11 = FUN_00f27700(0xffffffff,plVar22 + 1);
          if (iVar11 < 2) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
          if ((uVar12 >> 4 & 0xffffffff) * 0x10 + -0x10 == lVar24) break;
          lVar17 = *(long *)(in_x0 + 0x200);
          lVar24 = lVar24 + 0x10;
        }
      }
      pplVar29 = (long **)(in_x0 + 0x248);
      pplVar30 = (long **)(in_x0 + 0x250);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
                 *)pplVar29,*(__tree_node **)(in_x0 + 0x250));
      *(long ***)(in_x0 + 0x248) = pplVar30;
      *(undefined8 *)(in_x0 + 600) = 0;
      *(undefined8 *)(in_x0 + 0x250) = 0;
      lVar17 = *(long *)(*(long *)(in_x0 + 0x108) + 0x28);
      uVar2 = ((uint)(*(int *)(*(long *)(in_x0 + 0x108) + 0x30) - (int)lVar17) >> 4) * 0xcccd &
              0xffff;
      if (uVar2 != 0) {
        pplVar27 = (long **)0x0;
        uVar12 = 0;
        do {
          uVar4 = *(uint *)(lVar17 + uVar12 * 0x50 + 0x14);
          pplVar31 = pplVar30;
          pplVar28 = pplVar30;
          while (pplVar27 != (long **)0x0) {
            while (pplVar28 = pplVar27, uVar4 < *(uint *)((long)pplVar28 + 0x1c)) {
              pplVar27 = (long **)*pplVar28;
              pplVar31 = pplVar28;
              if ((long **)*pplVar28 == (long **)0x0) {
                plVar22 = *pplVar28;
                goto joined_r0x0072ace0;
              }
            }
            if (uVar4 <= *(uint *)((long)pplVar28 + 0x1c)) break;
            pplVar31 = pplVar28 + 1;
            pplVar27 = (long **)*pplVar31;
          }
          plVar22 = *pplVar31;
joined_r0x0072ace0:
          if (plVar22 == (long *)0x0) {
            plVar22 = (long *)operator_new(0x28);
            *(uint *)((long)plVar22 + 0x1c) = uVar4;
            *(int *)(plVar22 + 4) = (int)uVar12;
            *plVar22 = 0;
            plVar22[1] = 0;
            plVar22[2] = (long)pplVar28;
            *pplVar31 = plVar22;
            if ((long *)**pplVar29 != (long *)0x0) {
              *pplVar29 = (long *)**pplVar29;
              plVar22 = *pplVar31;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(in_x0 + 0x250),(__tree_node_base *)plVar22);
            *(long *)(in_x0 + 600) = *(long *)(in_x0 + 600) + 1;
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar2) break;
          pplVar27 = *(long ***)(in_x0 + 0x250);
          lVar17 = *(long *)(*(long *)(in_x0 + 0x108) + 0x28);
        } while( true );
      }
    }
    lVar17 = *(long *)(in_x0 + 0x1e8);
    if (*(long *)(in_x0 + 0x1f0) == lVar17) {
      bVar9 = true;
    }
    else {
      uVar12 = 0;
      do {
        lVar26 = *(long *)(lVar17 + uVar12 * 0x18);
        this = (UserAttributes *)(lVar26 + 0x60);
        lVar17 = UserAttributes::getAttribute(this,"maxWidth");
        lVar24 = UserAttributes::getAttribute(this,"minTurningRadius");
        lVar13 = UserAttributes::getAttribute(this,"speedLimit");
        uVar14 = UserAttributes::getAttribute(this,"isTeleport");
        if ((lVar17 == 0) || (iVar11 = UserAttribute::getType(), iVar11 != 2)) {
          uVar32 = *(undefined4 *)(*(long *)(in_x0 + 0x1e8) + uVar12 * 0x18 + 8);
          if (lVar24 != 0) goto LAB_0072adf8;
LAB_0072ae1c:
          uVar34 = *(undefined4 *)(*(long *)(in_x0 + 0x1e8) + uVar12 * 0x18 + 0xc);
          if (lVar13 == 0) goto LAB_0072ae60;
LAB_0072ae30:
          iVar11 = UserAttribute::getType();
          if (iVar11 != 2) goto LAB_0072ae60;
          fVar33 = (float)UserAttribute::getFloat();
          fVar33 = fVar33 / 3.6;
        }
        else {
          uVar32 = UserAttribute::getFloat();
          if (lVar24 == 0) goto LAB_0072ae1c;
LAB_0072adf8:
          iVar11 = UserAttribute::getType();
          if (iVar11 != 2) goto LAB_0072ae1c;
          uVar34 = UserAttribute::getFloat();
          if (lVar13 != 0) goto LAB_0072ae30;
LAB_0072ae60:
          fVar33 = *(float *)(*(long *)(in_x0 + 0x1e8) + uVar12 * 0x18 + 0x10);
        }
        if (uVar14 != 0) {
          iVar11 = UserAttribute::getType();
          if (iVar11 == 0) {
            uVar14 = UserAttribute::getBool();
            uVar14 = uVar14 & 0xffffffff;
          }
          else {
            uVar14 = 0;
          }
        }
        lVar17 = *(long *)(in_x0 + 0x110);
        RawTransformGroup::updateWorldTransformation();
        Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,(Matrix4x4 *)(lVar17 + 0xb8));
        RawTransformGroup::updateWorldTransformation();
        uVar38 = *(undefined4 *)(lVar26 + 0xb8);
        fVar36 = *(float *)(lVar26 + 0xbc);
        uVar39 = *(undefined4 *)(lVar26 + 0xc0);
        uVar40 = *(undefined4 *)(lVar26 + 0xc4);
        uVar41 = *(undefined4 *)(lVar26 + 200);
        fVar44 = *(float *)(lVar26 + 0xcc);
        uVar35 = NEON_fmadd(uVar38,local_f0,fVar36 * local_e0);
        uVar37 = NEON_fmadd(uVar38,uStack_ec,fVar36 * fStack_dc);
        uVar46 = NEON_fmadd(uVar39,uStack_cc,uVar37);
        uVar35 = NEON_fmadd(uVar39,local_d0,uVar35);
        uVar47 = NEON_fmadd(uVar41,local_f0,local_e0 * fVar44);
        uVar48 = NEON_fmadd(uVar41,uStack_ec,fStack_dc * fVar44);
        uVar42 = NEON_fmadd(uVar38,local_e8,fVar36 * local_d8);
        uVar37 = NEON_fmadd(uVar38,uStack_e4,fVar36 * fStack_d4);
        local_130 = NEON_fmadd(uVar40,local_c0,uVar35);
        uStack_12c = NEON_fmadd(uVar40,uStack_bc,uVar46);
        uVar35 = NEON_fmadd(uVar41,local_e8,local_d8 * fVar44);
        uVar41 = NEON_fmadd(uVar41,uStack_e4,fStack_d4 * fVar44);
        uVar42 = NEON_fmadd(uVar39,local_c8,uVar42);
        uVar38 = NEON_fmadd(uVar39,uStack_c4,uVar37);
        uVar37 = *(undefined4 *)(lVar26 + 0xd0);
        uVar39 = *(undefined4 *)(lVar26 + 0xd4);
        local_128 = NEON_fmadd(uVar40,local_b8,uVar42);
        uStack_124 = NEON_fmadd(uVar40,uStack_b4,uVar38);
        uVar42 = NEON_fmadd(uVar37,local_d0,uVar47);
        uVar38 = NEON_fmadd(uVar37,uStack_cc,uVar48);
        uVar40 = NEON_fmadd(uVar37,local_c8,uVar35);
        uVar35 = NEON_fmadd(uVar37,uStack_c4,uVar41);
        local_120 = NEON_fmadd(uVar39,local_c0,uVar42);
        uStack_11c = NEON_fmadd(uVar39,uStack_bc,uVar38);
        uVar37 = *(undefined4 *)(lVar26 + 0xd8);
        fVar36 = *(float *)(lVar26 + 0xdc);
        local_118 = NEON_fmadd(uVar39,local_b8,uVar40);
        uStack_114 = NEON_fmadd(uVar39,uStack_b4,uVar35);
        uVar42 = *(undefined4 *)(lVar26 + 0xe8);
        fVar44 = *(float *)(lVar26 + 0xec);
        uVar39 = NEON_fmadd(uVar37,local_f0,local_e0 * fVar36);
        uVar41 = NEON_fmadd(uVar37,uStack_ec,fStack_dc * fVar36);
        uVar43 = NEON_fmadd(uVar37,local_e8,local_d8 * fVar36);
        uVar48 = *(undefined4 *)(lVar26 + 0xe0);
        uVar45 = *(undefined4 *)(lVar26 + 0xe4);
        uVar40 = NEON_fmadd(uVar37,uStack_e4,fStack_d4 * fVar36);
        uVar35 = NEON_fmadd(uVar42,local_f0,local_e0 * fVar44);
        uVar37 = NEON_fmadd(uVar42,uStack_ec,fStack_dc * fVar44);
        uVar38 = NEON_fmadd(uVar42,local_e8,local_d8 * fVar44);
        uVar47 = NEON_fmadd(uVar48,local_d0,uVar39);
        uVar39 = NEON_fmadd(uVar48,uStack_cc,uVar41);
        uVar46 = NEON_fmadd(uVar48,uStack_c4,uVar40);
        uVar40 = NEON_fmadd(uVar42,uStack_e4,fStack_d4 * fVar44);
        uVar41 = *(undefined4 *)(lVar26 + 0xf0);
        uVar42 = *(undefined4 *)(lVar26 + 0xf4);
        local_110 = NEON_fmadd(uVar45,local_c0,uVar47);
        uVar47 = NEON_fmadd(uVar48,local_c8,uVar43);
        uVar35 = NEON_fmadd(uVar41,local_d0,uVar35);
        uStack_10c = NEON_fmadd(uVar45,uStack_bc,uVar39);
        uVar37 = NEON_fmadd(uVar41,uStack_cc,uVar37);
        local_108 = NEON_fmadd(uVar45,local_b8,uVar47);
        uVar38 = NEON_fmadd(uVar41,local_c8,uVar38);
        uStack_104 = NEON_fmadd(uVar45,uStack_b4,uVar46);
        uVar39 = NEON_fmadd(uVar41,uStack_c4,uVar40);
        local_100 = NEON_fmadd(uVar42,local_c0,uVar35);
        uStack_fc = NEON_fmadd(uVar42,uStack_bc,uVar37);
        local_f8 = NEON_fmadd(uVar42,local_b8,uVar38);
        uStack_f4 = NEON_fmadd(uVar42,uStack_b4,uVar39);
        pCVar15 = (CubicSpline *)SplineGeometry::getSpline();
        if (*(int *)(pCVar15 + 0x30) == 1) {
          RoadSegment::RoadSegment
                    ((RoadSegment *)&local_180,pCVar15,(Matrix4x4 *)&local_130,
                     *(uint *)(lVar26 + 0x18),(bool)((byte)uVar14 & 1));
          uVar2 = *(uint *)(lVar26 + 0x18);
          pplVar30 = *(long ***)(in_x0 + 0x250);
          pplVar29 = (long **)(in_x0 + 0x250);
          while (pplVar27 = pplVar29, pplVar30 != (long **)0x0) {
            while (pplVar27 = pplVar30, *(uint *)((long)pplVar27 + 0x1c) <= uVar2) {
              if (uVar2 <= *(uint *)((long)pplVar27 + 0x1c)) goto LAB_0072b0a4;
              pplVar29 = pplVar27 + 1;
              pplVar30 = (long **)*pplVar29;
              if ((long **)*pplVar29 == (long **)0x0) goto LAB_0072b0a4;
            }
            pplVar29 = pplVar27;
            pplVar30 = (long **)*pplVar27;
          }
LAB_0072b0a4:
          lVar17 = *(long *)(in_x0 + 0x108);
          local_178 = uVar32;
          uStack_174 = uVar34;
          local_170 = fVar33;
          if (*pplVar29 == (long *)0x0) {
            lVar24 = *(long *)(lVar17 + 0x28);
            lVar17 = *(long *)(lVar17 + 0x30);
                    /* try { // try from 0072b0b4 to 0072b0bf has its CatchHandler @ 0072b300 */
            plVar22 = (long *)operator_new(0x28);
            *plVar22 = 0;
            plVar22[1] = 0;
            plVar22[2] = (long)pplVar27;
            *(uint *)((long)plVar22 + 0x1c) = uVar2;
            *(uint *)(plVar22 + 4) = (int)((ulong)(lVar17 - lVar24) >> 4) * 0xcccd & 0xffff;
            *pplVar29 = plVar22;
            if (**(long **)(in_x0 + 0x248) != 0) {
              *(long *)(in_x0 + 0x248) = **(long **)(in_x0 + 0x248);
              plVar22 = *pplVar29;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(in_x0 + 0x250),(__tree_node_base *)plVar22);
            lVar17 = *(long *)(in_x0 + 0x108);
            *(long *)(in_x0 + 600) = *(long *)(in_x0 + 600) + 1;
          }
                    /* try { // try from 0072b118 to 0072b11f has its CatchHandler @ 0072b304 */
          VehicleNavigationMap::addRoad
                    ((VehicleNavigationMap *)(lVar17 + 0x10),(RoadSegment *)&local_180);
          if (local_148 != (void *)0x0) {
            local_140 = local_148;
            operator_delete(local_148);
          }
          if (local_160 != (void *)0x0) {
            local_158 = local_160;
            operator_delete(local_160);
          }
          plVar22 = local_180;
          local_180 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        lVar17 = *(long *)(in_x0 + 0x1e8);
        uVar12 = (ulong)((int)uVar12 + 1);
        uVar14 = (*(long *)(in_x0 + 0x1f0) - lVar17 >> 3) * -0x5555555555555555;
      } while (uVar12 <= uVar14 && uVar14 - uVar12 != 0);
      bVar9 = *(long *)(in_x0 + 0x1f0) - lVar17 == 0;
    }
    if ((*(long *)(in_x0 + 0x208) != *(long *)(in_x0 + 0x200)) || (!bVar9)) {
      VehicleNavigationMap::updateRoads();
      if (*(long *)(in_x0 + 0x208) != *(long *)(in_x0 + 0x200)) {
        *(long *)(in_x0 + 0x208) = *(long *)(in_x0 + 0x200);
      }
    }
    if (*(long *)(in_x0 + 0x1f0) != *(long *)(in_x0 + 0x1e8)) {
      *(long *)(in_x0 + 0x1f0) = *(long *)(in_x0 + 0x1e8);
    }
    if (*(long *)(in_x0 + 0x178) == 0) {
      uVar12 = 0;
      bVar9 = false;
      do {
        bVar8 = bVar9;
        bVar10 = *(char *)(*(long *)(in_x0 + uVar12 * 8 + 0x68) + 0x39) == '\0';
        bVar9 = (bool)(bVar10 | bVar8);
        if (8 < uVar12) break;
        uVar12 = uVar12 + 1;
      } while (!(bool)(bVar10 | bVar8));
      if (!(bool)(bVar10 | bVar8)) {
        uVar12 = 0;
        bVar9 = false;
        do {
          bVar9 = (bool)(*(char *)(*(long *)(in_x0 + uVar12 * 8 + 0xb8) + 0x39) == '\0' | bVar9);
          if (8 < uVar12) break;
          uVar12 = uVar12 + 1;
        } while (!bVar9);
      }
      if (!bVar9) {
        VehicleNavigationPlanner::resumePlanning();
        in_x0[0x148] = (VehicleNavigationMapGenerator)0x0;
      }
    }
  }
  ppPVar20 = *(PhysicsObstacle ***)(in_x0 + 0x188);
  ppPVar3 = *(PhysicsObstacle ***)(in_x0 + 400);
  *(int *)(in_x0 + 0x118) = 1 - *(int *)(in_x0 + 0x118);
  for (; ppPVar20 != ppPVar3; ppPVar20 = ppPVar20 + 1) {
    PhysicsObstacle::updateOrCreateObstacle(*ppPVar20,*(DynamicAvoidance **)(in_x0 + 0x140));
  }
  puVar23 = *(undefined8 **)(in_x0 + 0x218);
  puVar25 = *(undefined8 **)(in_x0 + 0x220);
  if (puVar23 != puVar25) {
    do {
      ppvVar21 = (void **)*puVar23;
      DynamicAvoidance::removeObstacle(*(DynamicAvoidance **)(in_x0 + 0x140),(Obstacle *)ppvVar21);
      pvVar16 = *ppvVar21;
      if (pvVar16 != (void *)0x0) {
        ppvVar21[1] = pvVar16;
        operator_delete(pvVar16);
      }
      operator_delete(ppvVar21);
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar25);
    if (*(long *)(in_x0 + 0x220) != *(long *)(in_x0 + 0x218)) {
      *(long *)(in_x0 + 0x220) = *(long *)(in_x0 + 0x218);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


