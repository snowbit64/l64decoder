// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalCompanionManager
// Entry Point: 0087485c
// Size: 1244 bytes
// Signature: undefined __thiscall ~AnimalCompanionManager(AnimalCompanionManager * this)


/* WARNING: Type propagation algorithm not settling */
/* AnimalCompanionManager::~AnimalCompanionManager() */

void __thiscall AnimalCompanionManager::~AnimalCompanionManager(AnimalCompanionManager *this)

{
  AnimalCompanionManager AVar1;
  long lVar2;
  UpdateManager *this_00;
  EngineManager *this_01;
  Bt2ScenegraphPhysicsContext *this_02;
  long *plVar3;
  void *pvVar4;
  AnimalAnimationSystem *pAVar5;
  AnimalAnimationSystemSource *pAVar6;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var7;
  ObstacleWallDetector *pOVar8;
  ulong uVar9;
  long lVar10;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var11;
  long lVar12;
  AnimalSoundSystem *pAVar13;
  AnimalSoundSystem *this_03;
  AnimalAnimationSystem *this_04;
  AnimalAnimationSystemSource *this_05;
  ObstacleWallDetector *this_06;
  ulong uVar14;
  AnimalSoundSystem *pAVar15;
  AnimalAnimationSystem *pAVar16;
  AnimalAnimationSystemSource *pAVar17;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var18;
  ObstacleWallDetector *pOVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  
  *(undefined ***)this = &PTR__AnimalCompanionManager_00fdc238;
  *(undefined ***)(this + 0x20) = &PTR__AnimalCompanionManager_00fdc268;
  *(undefined ***)(this + 0x30) = &PTR_onAssetLoaded_00fdc290;
                    /* try { // try from 00874894 to 0087489f has its CatchHandler @ 00874d38 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  uVar9 = (ulong)*(uint *)(this + 0x18c);
  if (*(uint *)(this + 0x18c) != 0) {
    lVar12 = 0;
    uVar14 = 0;
    do {
      lVar10 = *(long *)(this + 0xb0);
      if (*(int *)(lVar10 + lVar12 + 0x4c) != 0) {
                    /* try { // try from 008748d8 to 0087491b has its CatchHandler @ 00874d3c */
        this_01 = (EngineManager *)EngineManager::getInstance();
        EngineManager::removeScriptTriggerCallback
                  (this_01,*(TransformGroup **)(*(long *)(this + 0xb0) + lVar12 + 0x20),
                   *(uint *)(*(long *)(this + 0xb0) + lVar12 + 0x4c));
        lVar10 = *(long *)(this + 0xb0);
      }
      if (*(long *)(lVar10 + lVar12 + 0x10) != 0) {
        ScenegraphPhysicsContextManager::getInstance();
        this_02 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
                  (this_02,*(TransformGroup **)(*(long *)(this + 0xb0) + lVar12 + 0x10),true);
      }
      uVar9 = (ulong)*(uint *)(this + 0x18c);
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x58;
    } while (uVar14 < uVar9);
  }
  pAVar15 = *(AnimalSoundSystem **)(this + 0x140);
  pAVar13 = *(AnimalSoundSystem **)(this + 0x148);
  if (pAVar13 != pAVar15) {
    do {
      pAVar13 = pAVar13 + -0x58;
      AnimalSoundSystem::~AnimalSoundSystem(pAVar13);
    } while (pAVar13 != pAVar15);
    uVar9 = (ulong)*(uint *)(this + 0x18c);
  }
  *(AnimalSoundSystem **)(this + 0x148) = pAVar15;
  if ((int)uVar9 != 0) {
    uVar14 = 0;
    do {
      plVar3 = *(long **)(*(long *)(this + 0x158) + uVar14 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar9 = (ulong)*(uint *)(this + 0x18c);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar9);
  }
  lVar12 = *(long *)(this + 0xb0);
  lVar10 = *(long *)(this + 0xb8);
  while (lVar2 = lVar10, lVar2 != lVar12) {
    if (*(long **)(lVar2 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x40) + 8))();
    }
    if (*(long **)(lVar2 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x48) + 8))();
    }
    if (*(long **)(lVar2 + -0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x50) + 8))();
    }
    lVar10 = lVar2 + -0x58;
    if ((*(byte *)(lVar2 + -0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x18));
    }
  }
  *(long *)(this + 0xb8) = lVar12;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  if (((byte)this[0x1f0] & 1) == 0) {
    AVar1 = this[0x1d8];
  }
  else {
    operator_delete(*(void **)(this + 0x200));
    AVar1 = this[0x1d8];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x1c0];
  }
  else {
    operator_delete(*(void **)(this + 0x1e8));
    AVar1 = this[0x1c0];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x1a8];
  }
  else {
    operator_delete(*(void **)(this + 0x1d0));
    AVar1 = this[0x1a8];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[400];
  }
  else {
    operator_delete(*(void **)(this + 0x1b8));
    AVar1 = this[400];
  }
  if (((byte)AVar1 & 1) == 0) {
    pvVar4 = *(void **)(this + 0x170);
  }
  else {
    operator_delete(*(void **)(this + 0x1a0));
    pvVar4 = *(void **)(this + 0x170);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x158);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar4;
    operator_delete(pvVar4);
  }
  pAVar15 = *(AnimalSoundSystem **)(this + 0x140);
  if (pAVar15 != (AnimalSoundSystem *)0x0) {
    this_03 = *(AnimalSoundSystem **)(this + 0x148);
    pAVar13 = pAVar15;
    if (this_03 != pAVar15) {
      do {
        this_03 = this_03 + -0x58;
        AnimalSoundSystem::~AnimalSoundSystem(this_03);
      } while (this_03 != pAVar15);
      pAVar13 = *(AnimalSoundSystem **)(this + 0x140);
    }
    *(AnimalSoundSystem **)(this + 0x148) = pAVar15;
    operator_delete(pAVar13);
  }
  pAVar16 = *(AnimalAnimationSystem **)(this + 0x128);
  if (pAVar16 != (AnimalAnimationSystem *)0x0) {
    this_04 = *(AnimalAnimationSystem **)(this + 0x130);
    pAVar5 = pAVar16;
    if (this_04 != pAVar16) {
      do {
        this_04 = this_04 + -0x338;
        AnimalAnimationSystem::~AnimalAnimationSystem(this_04);
      } while (this_04 != pAVar16);
      pAVar5 = *(AnimalAnimationSystem **)(this + 0x128);
    }
    *(AnimalAnimationSystem **)(this + 0x130) = pAVar16;
    operator_delete(pAVar5);
  }
  pAVar17 = *(AnimalAnimationSystemSource **)(this + 0x110);
  if (pAVar17 != (AnimalAnimationSystemSource *)0x0) {
    this_05 = *(AnimalAnimationSystemSource **)(this + 0x118);
    pAVar6 = pAVar17;
    if (this_05 != pAVar17) {
      do {
        this_05 = this_05 + -0x3d20;
        AnimalAnimationSystemSource::~AnimalAnimationSystemSource(this_05);
      } while (this_05 != pAVar17);
      pAVar6 = *(AnimalAnimationSystemSource **)(this + 0x110);
    }
    *(AnimalAnimationSystemSource **)(this + 0x118) = pAVar17;
    operator_delete(pAVar6);
  }
  p_Var18 = *(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
              **)(this + 0xf8);
  if (p_Var18 !=
      (__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
       *)0x0) {
    p_Var7 = p_Var18;
    if (*(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
          **)(this + 0x100) != p_Var18) {
      p_Var7 = *(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
                 **)(this + 0x100) + -0x20;
      do {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
        ::destroy(p_Var7,*(__tree_node **)(p_Var7 + 8));
        pvVar4 = *(void **)(p_Var7 + -0x28);
        if (pvVar4 != (void *)0x0) {
          *(void **)(p_Var7 + -0x20) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = *(void **)(p_Var7 + -0x40);
        if (pvVar4 != (void *)0x0) {
          *(void **)(p_Var7 + -0x38) = pvVar4;
          operator_delete(pvVar4);
        }
        p_Var11 = p_Var7 + -0xc0;
        p_Var7 = p_Var7 + -0xe0;
      } while (p_Var11 != p_Var18);
      p_Var7 = *(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
                 **)(this + 0xf8);
    }
    *(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
      **)(this + 0x100) = p_Var18;
    operator_delete(p_Var7);
  }
  pvVar4 = *(void **)(this + 0xe0);
  if (pvVar4 != (void *)0x0) {
    pvVar22 = pvVar4;
    pvVar20 = *(void **)(this + 0xe8);
    if (*(void **)(this + 0xe8) != pvVar4) {
      do {
        pvVar22 = *(void **)((long)pvVar20 + -0x28);
        if (pvVar22 != (void *)0x0) {
          *(void **)((long)pvVar20 + -0x20) = pvVar22;
          operator_delete(pvVar22);
        }
        pvVar22 = *(void **)((long)pvVar20 + -0x40);
        if (pvVar22 != (void *)0x0) {
          *(void **)((long)pvVar20 + -0x38) = pvVar22;
          operator_delete(pvVar22);
        }
        pvVar22 = *(void **)((long)pvVar20 + -0x58);
        pvVar21 = (void *)((long)pvVar20 + -0x58);
        if (pvVar22 != (void *)0x0) {
          *(void **)((long)pvVar20 + -0x50) = pvVar22;
          operator_delete(pvVar22);
        }
        pvVar20 = pvVar21;
      } while (pvVar21 != pvVar4);
      pvVar22 = *(void **)(this + 0xe0);
    }
    *(void **)(this + 0xe8) = pvVar4;
    operator_delete(pvVar22);
  }
  pOVar19 = *(ObstacleWallDetector **)(this + 200);
  if (pOVar19 != (ObstacleWallDetector *)0x0) {
    this_06 = *(ObstacleWallDetector **)(this + 0xd0);
    pOVar8 = pOVar19;
    if (this_06 != pOVar19) {
      do {
        this_06 = this_06 + -0x3b0;
        ObstacleWallDetector::~ObstacleWallDetector(this_06);
      } while (this_06 != pOVar19);
      pOVar8 = *(ObstacleWallDetector **)(this + 200);
    }
    *(ObstacleWallDetector **)(this + 0xd0) = pOVar19;
    operator_delete(pOVar8);
  }
  pvVar4 = *(void **)(this + 0xb0);
  if (pvVar4 != (void *)0x0) {
    pvVar22 = pvVar4;
    pvVar20 = *(void **)(this + 0xb8);
    if (*(void **)(this + 0xb8) != pvVar4) {
      do {
        if (*(long **)((long)pvVar20 + -0x40) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar20 + -0x40) + 8))();
        }
        if (*(long **)((long)pvVar20 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar20 + -0x48) + 8))();
        }
        if (*(long **)((long)pvVar20 + -0x50) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar20 + -0x50) + 8))();
        }
        pvVar22 = (void *)((long)pvVar20 + -0x58);
        if ((*(byte *)((long)pvVar20 + -0x28) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar20 + -0x18));
        }
        pvVar20 = pvVar22;
      } while (pvVar22 != pvVar4);
      pvVar22 = *(void **)(this + 0xb0);
    }
    *(void **)(this + 0xb8) = pvVar4;
    operator_delete(pvVar22);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
             *)(this + 0x98),*(__tree_node **)(this + 0xa0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>>>
             *)(this + 0x80),*(__tree_node **)(this + 0x88));
  std::__ndk1::
  __vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>::
  ~__vector_base((__vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>
                  *)(this + 0x68));
  I3DAssetPtr::~I3DAssetPtr((I3DAssetPtr *)(this + 0x40));
  Entity::~Entity((Entity *)this);
  return;
}


