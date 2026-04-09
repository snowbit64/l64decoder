// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008ff1e8
// Size: 3024 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* I3DLoad::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void I3DLoad::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  ulong uVar1;
  Geometry **ppGVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  Bt2ScenegraphPhysicsContext *pBVar7;
  ulong uVar8;
  MaterialManager *this;
  StreamManager *pSVar9;
  undefined8 uVar10;
  FoliageSystem *this_00;
  long lVar11;
  EntityRegistryManager *this_01;
  long lVar12;
  char *pcVar13;
  LuauScriptSystem *this_02;
  IAudioDevice *extraout_x1;
  IAudioDevice *extraout_x1_00;
  IAudioDevice *extraout_x1_01;
  IAudioDevice *extraout_x1_02;
  IAudioDevice *extraout_x1_03;
  IAudioDevice *extraout_x1_04;
  IAudioDevice *extraout_x1_05;
  IAudioDevice *extraout_x1_06;
  IAudioDevice *extraout_x1_07;
  IAudioDevice *extraout_x1_08;
  undefined4 uVar14;
  long *plVar15;
  IRenderDevice **ppIVar16;
  uint uVar17;
  IRenderDevice *pIVar18;
  ulong uVar19;
  long lVar20;
  Bt2PhysicsCookedDataSet *this_03;
  Geometry *this_04;
  IRenderDevice **ppIVar21;
  TransformGroup *pTVar22;
  long **pplVar23;
  int *piVar24;
  Geometry **ppGVar25;
  long **pplVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  long **pplVar30;
  long **pplVar31;
  double dVar32;
  undefined auVar33 [16];
  undefined4 local_1e0 [2];
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined local_1d2;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  undefined4 local_188;
  undefined2 local_184;
  undefined local_182;
  undefined4 local_178;
  undefined2 local_174;
  undefined local_172;
  undefined4 local_168;
  undefined2 local_164;
  undefined local_162;
  undefined4 local_158;
  undefined2 local_154;
  undefined local_152;
  undefined4 local_148;
  undefined2 local_144;
  undefined local_142;
  undefined4 local_138;
  undefined2 local_134;
  undefined local_132;
  undefined4 local_128;
  undefined2 local_124;
  undefined local_122;
  undefined4 local_118;
  undefined2 local_114;
  undefined local_112;
  undefined4 local_108;
  undefined2 local_104;
  undefined local_102;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined local_f2;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined local_e2;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined local_d2;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined local_c2;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined local_b2;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined local_a2;
  undefined4 local_98;
  undefined2 local_94;
  undefined local_92;
  undefined4 local_88;
  undefined2 local_84;
  undefined local_82;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 3) {
LAB_008ffcb4:
    uVar10 = 1;
    goto LAB_008ffcb8;
  }
  if (iVar6 == 2) {
    piVar24 = (int *)(param_1 + 0x38);
    if (*piVar24 == 1) {
      lVar11 = *(long *)(param_1 + 0x280);
      pTVar22 = *(TransformGroup **)(param_1 + 0x1b8);
      if (*(long *)(lVar11 + 0x240) != *(long *)(lVar11 + 0x248)) {
        do {
          this_00 = (FoliageSystem *)operator_new(0x28);
                    /* try { // try from 008ff864 to 008ff867 has its CatchHandler @ 008ffdd0 */
          FoliageSystem::FoliageSystem
                    (this_00,*(FoliageSystemDesc **)(*(long *)(lVar11 + 0x248) + -8));
          TerrainTransformGroup::setFoliageSystem
                    (*(TerrainTransformGroup **)
                      (*(long *)(*(long *)(*(long *)(param_1 + 0x280) + 0x248) + -8) + 0x28),this_00
                    );
          *(long *)(*(long *)(param_1 + 0x280) + 0x248) =
               *(long *)(*(long *)(param_1 + 0x280) + 0x248) + -8;
          FoliageSystem::load(this_00,*(STREAM_QUEUE *)(param_1 + 0x254));
          lVar11 = *(long *)(param_1 + 0x280);
          param_2 = extraout_x1_01;
        } while (*(long *)(lVar11 + 0x240) != *(long *)(lVar11 + 0x248));
      }
      if (param_1[0x34] != (IRenderDevice)0x0) {
        ScenegraphPhysicsContextManager::getInstance();
        lVar11 = ScenegraphPhysicsContextManager::getContext();
        cVar3 = *(char *)(lVar11 + 0x488);
        ScenegraphPhysicsContextManager::getInstance();
        pBVar7 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        if (cVar3 == '\0') {
          Bt2ScenegraphPhysicsContext::addSingleTransformGroup(pBVar7,pTVar22);
          lVar11 = *(long *)(pTVar22 + 0x28);
          lVar20 = *(long *)(pTVar22 + 0x30);
          param_2 = extraout_x1_07;
          if ((int)((ulong)(lVar20 - lVar11) >> 3) != 0) {
            uVar8 = 0;
            do {
              lVar29 = *(long *)(lVar11 + uVar8 * 8);
              if ((*(byte *)(lVar29 + 0x10) >> 5 & 1) != 0) {
                lVar11 = *(long *)(param_1 + 0x48);
                lVar20 = *(long *)(param_1 + 0x68);
                uVar1 = 0;
                if (*(long *)(param_1 + 0x50) - lVar11 != 0) {
                  uVar1 = (*(long *)(param_1 + 0x50) - lVar11) * 0x40 - 1;
                }
                uVar19 = lVar20 + *(long *)(param_1 + 0x60);
                if (uVar1 == uVar19) {
                  std::__ndk1::deque<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::
                  __add_back_capacity();
                  lVar20 = *(long *)(param_1 + 0x68);
                  lVar11 = *(long *)(param_1 + 0x48);
                  uVar19 = *(long *)(param_1 + 0x60) + lVar20;
                  param_2 = extraout_x1_08;
                }
                *(long *)(*(long *)(lVar11 + (uVar19 >> 6 & 0x3fffffffffffff8)) +
                         (uVar19 & 0x1ff) * 8) = lVar29;
                *(long *)(param_1 + 0x68) = lVar20 + 1;
                lVar11 = *(long *)(pTVar22 + 0x28);
                lVar20 = *(long *)(pTVar22 + 0x30);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < ((ulong)(lVar20 - lVar11) >> 3 & 0xffffffff));
          }
        }
        else {
          Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(pBVar7,pTVar22);
          param_2 = extraout_x1_02;
        }
      }
      goto LAB_008ff8dc;
    }
    if (*piVar24 == 0) goto LAB_008ff25c;
    if (*(long *)(param_1 + 0x68) != 0) {
      StopWatch::StopWatch((StopWatch *)local_1e0);
      StopWatch::start();
      param_2 = extraout_x1_03;
      do {
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_008ffa48;
        uVar8 = *(ulong *)(param_1 + 0x60);
        pTVar22 = *(TransformGroup **)
                   (*(long *)((long)*(void ***)(param_1 + 0x48) + (uVar8 >> 6 & 0x3fffffffffffff8))
                   + (uVar8 & 0x1ff) * 8);
        *(ulong *)(param_1 + 0x60) = uVar8 + 1;
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
        if (0x3ff < uVar8 + 1) {
          operator_delete(**(void ***)(param_1 + 0x48));
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 8;
          *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -0x200;
        }
        ScenegraphPhysicsContextManager::getInstance();
        lVar11 = ScenegraphPhysicsContextManager::getContext();
        cVar3 = *(char *)(lVar11 + 0x488);
        ScenegraphPhysicsContextManager::getInstance();
        pBVar7 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(pBVar7,pTVar22);
        if (cVar3 == '\0') {
          lVar11 = *(long *)(pTVar22 + 0x28);
          lVar20 = *(long *)(pTVar22 + 0x30);
          uVar8 = (ulong)(lVar20 - lVar11) >> 3;
          if ((int)uVar8 != 0) {
            uVar17 = 0;
            iVar6 = -1;
            do {
              lVar29 = *(long *)(lVar11 + (ulong)(uint)((int)uVar8 + iVar6) * 8);
              if ((*(byte *)(lVar29 + 0x10) >> 5 & 1) != 0) {
                uVar8 = *(ulong *)(param_1 + 0x60);
                if (uVar8 == 0) {
                  std::__ndk1::deque<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::
                  __add_front_capacity();
                  uVar8 = *(ulong *)(param_1 + 0x60);
                }
                plVar28 = (long *)(*(long *)(param_1 + 0x48) + (uVar8 >> 6 & 0x3fffffffffffff8));
                lVar20 = *plVar28;
                lVar11 = 0;
                if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
                  lVar11 = lVar20 + (uVar8 & 0x1ff) * 8;
                }
                if (lVar11 == lVar20) {
                  lVar11 = plVar28[-1] + 0x1000;
                }
                *(long *)(lVar11 + -8) = lVar29;
                *(ulong *)(param_1 + 0x60) = uVar8 - 1;
                *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
                lVar11 = *(long *)(pTVar22 + 0x28);
                lVar20 = *(long *)(pTVar22 + 0x30);
              }
              uVar17 = uVar17 + 1;
              uVar8 = (ulong)(lVar20 - lVar11) >> 3;
              iVar6 = iVar6 + -1;
            } while (uVar17 < (uint)uVar8);
          }
        }
        dVar32 = (double)StopWatch::getMs();
        param_2 = extraout_x1_04;
      } while (dVar32 <= 30.0);
      goto LAB_008ffcb4;
    }
LAB_008ffa48:
    if (param_1[0x35] != (IRenderDevice)0x0) {
      auVar33 = Watch::getCurrentTicks();
      param_2 = auVar33._8_8_;
      lVar20 = *(long *)(param_1 + 0x298);
      iVar6 = *(int *)(param_1 + 0x38);
      lVar11 = *(long *)(lVar20 + 8);
      uVar17 = (uint)((ulong)(*(long *)(lVar20 + 0x10) - lVar11) >> 4);
      if (iVar6 - 2U < uVar17) {
        lVar29 = (ulong)(iVar6 - 2U) << 4;
        iVar27 = (uVar17 - iVar6) + 1;
        while( true ) {
          *piVar24 = iVar6 + 1;
          this_01 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
          lVar12 = EntityRegistryManager::getEntityById(this_01,*(uint *)(lVar11 + lVar29));
          if (((lVar12 != 0) &&
              (pcVar13 = (char *)UserAttribute::getScriptCallbackFunction(), pcVar13 != (char *)0x0)
              ) && (*pcVar13 != '\0')) {
            local_1d2 = 0;
            local_1d4 = 0;
            local_1c8 = 0;
            local_1c2 = 0;
            local_1c4 = 0;
            local_1b8 = 0;
            local_1b2 = 0;
            local_1b4 = 0;
            local_1a8 = 0;
            local_1a2 = 0;
            local_1a4 = 0;
            local_198 = 0;
            local_192 = 0;
            local_194 = 0;
            local_188 = 0;
            local_182 = 0;
            local_184 = 0;
            local_178 = 0;
            local_172 = 0;
            local_174 = 0;
            local_168 = 0;
            local_162 = 0;
            local_164 = 0;
            local_158 = 0;
            local_152 = 0;
            local_154 = 0;
            local_148 = 0;
            local_142 = 0;
            local_144 = 0;
            local_138 = 0;
            local_132 = 0;
            local_134 = 0;
            local_128 = 0;
            local_122 = 0;
            local_124 = 0;
            local_118 = 0;
            local_112 = 0;
            local_114 = 0;
            local_108 = 0;
            local_102 = 0;
            local_104 = 0;
            local_f8 = 0;
            local_f2 = 0;
            local_f4 = 0;
            local_e8 = 0;
            local_e2 = 0;
            local_e4 = 0;
            local_d8 = 0;
            local_d2 = 0;
            local_d4 = 0;
            local_c8 = 0;
            local_c2 = 0;
            local_c4 = 0;
            local_b8 = 0;
            local_b2 = 0;
            local_b4 = 0;
            local_a8 = 0;
            local_a2 = 0;
            local_a4 = 0;
            local_98 = 0;
            local_92 = 0;
            local_94 = 0;
            local_88 = 0;
            local_82 = 0;
            local_84 = 0;
            local_1e0[0] = *(undefined4 *)(lVar11 + lVar29);
            local_1d8 = 1;
            ScriptSystemManager::getInstance();
            this_02 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
            uVar8 = LuauScriptSystem::invokeScriptMethod
                              (this_02,pcVar13,(MethodInvocation *)local_1e0,1,0,(void *)0x0);
            if (((uVar8 & 1) == 0) && (s_warnInvalidOnCreateFunctions != '\0')) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar6 != 0)) {
                    /* try { // try from 008ffc7c to 008ffc87 has its CatchHandler @ 008ffdb8 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "Warning: Invalid onCreate function \'%s\' for entity \'%s\'\n",
                                pcVar13,*(undefined8 *)(lVar12 + 8));
            }
          }
          lVar11 = Watch::getCurrentTicks();
          dVar32 = (double)Watch::convertTicksToMs(lVar11 - auVar33._0_8_);
          param_2 = extraout_x1_05;
          if (30.0 < dVar32) goto LAB_008ffcb4;
          if (iVar27 == 0) break;
          iVar6 = *piVar24;
          lVar29 = lVar29 + 0x10;
          lVar11 = *(long *)(lVar20 + 8);
          iVar27 = iVar27 + -1;
        }
      }
    }
    if (*(long *)(param_1 + 600) != 0) {
      pSVar9 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamableCallback
                (pSVar9,*(StreamQueueCallback **)(param_1 + 600),*(void **)(param_1 + 0x260),
                 *(STREAM_QUEUE *)(param_1 + 0xc));
      param_2 = extraout_x1_06;
    }
    uVar14 = 3;
    uVar10 = 1;
  }
  else {
    if (iVar6 != 0) {
      uVar10 = 0;
      goto LAB_008ffcb8;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 8) = 2;
LAB_008ff25c:
    if (*(int *)(param_1 + 0x1b0) != 0) {
      if (*(long **)(param_1 + 0x1b8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x1b8) + 8))();
      }
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
    ppGVar25 = *(Geometry ***)(param_1 + 0xd0);
    ppGVar2 = *(Geometry ***)(param_1 + 0xd8);
    if (ppGVar25 != ppGVar2) {
      do {
        this_03 = (Bt2PhysicsCookedDataSet *)ppGVar25[1];
        if ((*(int *)(param_1 + 0x1b0) == 0) && (this_04 = *ppGVar25, 1 < *(int *)(this_04 + 8))) {
          ScenegraphPhysicsContextManager::getInstance();
          pBVar7 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          uVar8 = Bt2ScenegraphPhysicsContext::ingestCookedData(pBVar7,this_03,this_04);
          if ((uVar8 & 1) == 0) goto LAB_008ff2d8;
          Geometry::setPhysicsCookedDataSet(this_04,this_03);
        }
        else {
LAB_008ff2d8:
          if (this_03 != (Bt2PhysicsCookedDataSet *)0x0) {
            Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet(this_03);
            operator_delete(this_03);
          }
        }
        ppGVar25 = ppGVar25 + 2;
      } while (ppGVar25 != ppGVar2);
      ppGVar25 = *(Geometry ***)(param_1 + 0xd0);
    }
    *(Geometry ***)(param_1 + 0xd8) = ppGVar25;
    ppIVar21 = *(IRenderDevice ***)(param_1 + 0xb8);
    while (ppIVar21 != (IRenderDevice **)(param_1 + 0xc0)) {
      plVar28 = (long *)ppIVar21[5];
      iVar6 = FUN_00f27700(0xffffffff,plVar28 + 1);
      if (iVar6 < 2) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
      ppIVar16 = (IRenderDevice **)ppIVar21[1];
      if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) {
        ppIVar16 = ppIVar21 + 2;
        bVar5 = (IRenderDevice **)*(IRenderDevice **)*ppIVar16 != ppIVar21;
        ppIVar21 = (IRenderDevice **)*ppIVar16;
        if (bVar5) {
          do {
            pIVar18 = *ppIVar16;
            ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
            ppIVar21 = (IRenderDevice **)*ppIVar16;
          } while (*ppIVar21 != pIVar18);
        }
      }
      else {
        do {
          ppIVar21 = ppIVar16;
          ppIVar16 = (IRenderDevice **)*ppIVar21;
        } while ((IRenderDevice **)*ppIVar21 != (IRenderDevice **)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Geometry*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Geometry*>>>
               *)(param_1 + 0xb8),*(__tree_node **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(IRenderDevice **)(param_1 + 0xb8) = param_1 + 0xc0;
    ppIVar21 = *(IRenderDevice ***)(param_1 + 0x178);
    while (ppIVar21 != (IRenderDevice **)(param_1 + 0x180)) {
      plVar28 = (long *)ppIVar21[4];
      iVar6 = FUN_00f27700(0xffffffff,plVar28 + 1);
      if (iVar6 < 2) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
      ppIVar16 = (IRenderDevice **)ppIVar21[1];
      if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) {
        ppIVar16 = ppIVar21 + 2;
        bVar5 = (IRenderDevice **)*(IRenderDevice **)*ppIVar16 != ppIVar21;
        ppIVar21 = (IRenderDevice **)*ppIVar16;
        if (bVar5) {
          do {
            pIVar18 = *ppIVar16;
            ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
            ppIVar21 = (IRenderDevice **)*ppIVar16;
          } while (*ppIVar21 != pIVar18);
        }
      }
      else {
        do {
          ppIVar21 = ppIVar16;
          ppIVar16 = (IRenderDevice **)*ppIVar21;
        } while ((IRenderDevice **)*ppIVar21 != (IRenderDevice **)0x0);
      }
    }
    std::__ndk1::
    __tree<MeshSplitGeometry*,std::__ndk1::less<MeshSplitGeometry*>,std::__ndk1::allocator<MeshSplitGeometry*>>
    ::destroy((__tree<MeshSplitGeometry*,std::__ndk1::less<MeshSplitGeometry*>,std::__ndk1::allocator<MeshSplitGeometry*>>
               *)(param_1 + 0x178),*(__tree_node **)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(IRenderDevice **)(param_1 + 0x178) = param_1 + 0x180;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>>
    ::destroy((__tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>>
               *)(param_1 + 0x160),*(__tree_node **)(param_1 + 0x168));
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(IRenderDevice **)(param_1 + 0x160) = param_1 + 0x168;
    ppIVar21 = *(IRenderDevice ***)(param_1 + 400);
    while (ppIVar21 != (IRenderDevice **)(param_1 + 0x198)) {
      if ((long *)ppIVar21[5] != (long *)0x0) {
        (**(code **)(*(long *)ppIVar21[5] + 8))();
      }
      ppIVar16 = (IRenderDevice **)ppIVar21[1];
      if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) {
        ppIVar16 = ppIVar21 + 2;
        bVar5 = (IRenderDevice **)*(IRenderDevice **)*ppIVar16 != ppIVar21;
        ppIVar21 = (IRenderDevice **)*ppIVar16;
        if (bVar5) {
          do {
            pIVar18 = *ppIVar16;
            ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
            ppIVar21 = (IRenderDevice **)*ppIVar16;
          } while (*ppIVar21 != pIVar18);
        }
      }
      else {
        do {
          ppIVar21 = ppIVar16;
          ppIVar16 = (IRenderDevice **)*ppIVar21;
        } while ((IRenderDevice **)*ppIVar21 != (IRenderDevice **)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>>
    ::destroy((__tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>>
               *)(param_1 + 400),*(__tree_node **)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(IRenderDevice **)(param_1 + 400) = param_1 + 0x198;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
               *)(param_1 + 0xe8),*(__tree_node **)(param_1 + 0xf0));
    *(IRenderDevice **)(param_1 + 0xe8) = param_1 + 0xf0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    ppIVar21 = *(IRenderDevice ***)(param_1 + 0x148);
    while (ppIVar21 != (IRenderDevice **)(param_1 + 0x150)) {
      plVar28 = (long *)ppIVar21[5];
      iVar6 = FUN_00f27700(0xffffffff,plVar28 + 1);
      if (iVar6 < 2) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
      ppIVar16 = (IRenderDevice **)ppIVar21[1];
      if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) {
        ppIVar16 = ppIVar21 + 2;
        bVar5 = (IRenderDevice **)*(IRenderDevice **)*ppIVar16 != ppIVar21;
        ppIVar21 = (IRenderDevice **)*ppIVar16;
        if (bVar5) {
          do {
            pIVar18 = *ppIVar16;
            ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
            ppIVar21 = (IRenderDevice **)*ppIVar16;
          } while (*ppIVar21 != pIVar18);
        }
      }
      else {
        do {
          ppIVar21 = ppIVar16;
          ppIVar16 = (IRenderDevice **)*ppIVar21;
        } while ((IRenderDevice **)*ppIVar21 != (IRenderDevice **)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>>>
               *)(param_1 + 0x148),*(__tree_node **)(param_1 + 0x150));
    pplVar23 = *(long ***)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(IRenderDevice **)(param_1 + 0x148) = param_1 + 0x150;
    if (pplVar23 != (long **)0x0) {
      ppIVar21 = *(IRenderDevice ***)(param_1 + 0xa0);
      if (ppIVar21 != (IRenderDevice **)(param_1 + 0xa8)) {
        do {
          plVar28 = (long *)ppIVar21[5];
          pplVar26 = pplVar23 + 1;
          pplVar30 = (long **)*pplVar26;
          pplVar31 = pplVar26;
          if (pplVar30 != (long **)0x0) {
            pplVar26 = pplVar23 + 1;
            do {
              while (pplVar31 = pplVar30, plVar28 < pplVar31[4]) {
                pplVar26 = pplVar31;
                pplVar30 = (long **)*pplVar31;
                if ((long **)*pplVar31 == (long **)0x0) {
                  plVar15 = *pplVar31;
                  goto joined_r0x008ff45c;
                }
              }
              if (plVar28 <= pplVar31[4]) break;
              pplVar26 = pplVar31 + 1;
              pplVar30 = (long **)*pplVar26;
            } while ((long **)*pplVar26 != (long **)0x0);
          }
          plVar15 = *pplVar26;
joined_r0x008ff45c:
          if (plVar15 == (long *)0x0) {
            uVar14 = *(undefined4 *)(ppIVar21 + 4);
            plVar15 = (long *)operator_new(0x30);
            plVar15[4] = (long)plVar28;
            *(undefined4 *)(plVar15 + 5) = uVar14;
            *plVar15 = 0;
            plVar15[1] = 0;
            plVar15[2] = (long)pplVar31;
            *pplVar26 = plVar15;
            if ((long *)**pplVar23 != (long *)0x0) {
              *pplVar23 = (long *)**pplVar23;
              plVar15 = *pplVar26;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)pplVar23[1],(__tree_node_base *)plVar15);
            pplVar23[2] = (long *)((long)pplVar23[2] + 1);
            ppIVar16 = (IRenderDevice **)ppIVar21[1];
            if ((IRenderDevice **)ppIVar21[1] != (IRenderDevice **)0x0) goto LAB_008ff4b8;
LAB_008ff4c8:
            ppIVar16 = ppIVar21 + 2;
            bVar5 = *(IRenderDevice ***)*ppIVar16 != ppIVar21;
            ppIVar21 = (IRenderDevice **)*ppIVar16;
            if (bVar5) {
              do {
                pIVar18 = *ppIVar16;
                ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
                ppIVar21 = (IRenderDevice **)*ppIVar16;
              } while (*(IRenderDevice **)*ppIVar16 != pIVar18);
            }
          }
          else {
            ppIVar16 = (IRenderDevice **)ppIVar21[1];
            if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) goto LAB_008ff4c8;
LAB_008ff4b8:
            do {
              ppIVar21 = ppIVar16;
              ppIVar16 = (IRenderDevice **)*ppIVar21;
            } while (ppIVar16 != (IRenderDevice **)0x0);
          }
          if (ppIVar21 == (IRenderDevice **)(param_1 + 0xa8)) break;
          pplVar23 = *(long ***)(param_1 + 0x80);
        } while( true );
      }
    }
    ppIVar21 = *(IRenderDevice ***)(param_1 + 0xa0);
    while (ppIVar21 != (IRenderDevice **)(param_1 + 0xa8)) {
      this = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(this,(GsMaterial *)ppIVar21[5]);
      ppIVar16 = (IRenderDevice **)ppIVar21[1];
      if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) {
        ppIVar16 = ppIVar21 + 2;
        bVar5 = *(IRenderDevice ***)*ppIVar16 != ppIVar21;
        ppIVar21 = (IRenderDevice **)*ppIVar16;
        if (bVar5) {
          do {
            pIVar18 = *ppIVar16;
            ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
            ppIVar21 = (IRenderDevice **)*ppIVar16;
          } while (*ppIVar21 != pIVar18);
        }
      }
      else {
        do {
          ppIVar21 = ppIVar16;
          ppIVar16 = (IRenderDevice **)*ppIVar21;
        } while ((IRenderDevice **)*ppIVar21 != (IRenderDevice **)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
               *)(param_1 + 0xa0),*(__tree_node **)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(IRenderDevice **)(param_1 + 0xa0) = param_1 + 0xa8;
    ppIVar21 = *(IRenderDevice ***)(param_1 + 0x100);
    while (ppIVar21 != (IRenderDevice **)(param_1 + 0x108)) {
      if ((long *)ppIVar21[5] != (long *)0x0) {
        (**(code **)(*(long *)ppIVar21[5] + 8))();
      }
      ppIVar16 = (IRenderDevice **)ppIVar21[1];
      if ((IRenderDevice **)ppIVar21[1] == (IRenderDevice **)0x0) {
        ppIVar16 = ppIVar21 + 2;
        bVar5 = (IRenderDevice **)*(IRenderDevice **)*ppIVar16 != ppIVar21;
        ppIVar21 = (IRenderDevice **)*ppIVar16;
        if (bVar5) {
          do {
            pIVar18 = *ppIVar16;
            ppIVar16 = (IRenderDevice **)(pIVar18 + 0x10);
            ppIVar21 = (IRenderDevice **)*ppIVar16;
          } while (*ppIVar21 != pIVar18);
        }
      }
      else {
        do {
          ppIVar21 = ppIVar16;
          ppIVar16 = (IRenderDevice **)*ppIVar21;
        } while ((IRenderDevice **)*ppIVar21 != (IRenderDevice **)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsShape*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsShape*>>>
               *)(param_1 + 0x100),*(__tree_node **)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(IRenderDevice **)(param_1 + 0x100) = param_1 + 0x108;
    param_2 = extraout_x1;
    if (*(int *)(param_1 + 0x1b0) == 0) {
LAB_008ff8dc:
      uVar10 = 1;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      goto LAB_008ffcb8;
    }
    if (*(long *)(param_1 + 600) != 0) {
      pSVar9 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamableCallback
                (pSVar9,*(StreamQueueCallback **)(param_1 + 600),*(void **)(param_1 + 0x260),
                 *(STREAM_QUEUE *)(param_1 + 0xc));
      param_2 = extraout_x1_00;
    }
    uVar14 = 4;
    uVar10 = 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar14;
LAB_008ffcb8:
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10,param_2);
}


