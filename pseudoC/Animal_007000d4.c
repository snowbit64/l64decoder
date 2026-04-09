// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Animal
// Entry Point: 007000d4
// Size: 12020 bytes
// Signature: undefined __thiscall Animal(Animal * this, uint param_1, uint param_2, AnimalSharedContext * param_3, AnimalSource * param_4, TransformGroup * param_5, AudioSource * param_6, uint param_7, uint param_8, bool param_9)


/* Animal::Animal(unsigned int, unsigned int, AnimalSharedContext*, Animal::AnimalSource*,
   TransformGroup*, AudioSource*, unsigned int, unsigned int, bool) */

void __thiscall
Animal::Animal(Animal *this,uint param_1,uint param_2,AnimalSharedContext *param_3,
              AnimalSource *param_4,TransformGroup *param_5,AudioSource *param_6,uint param_7,
              uint param_8,bool param_9)

{
  AnimalLocomotionSystem *this_00;
  BehaviorTree *this_01;
  AnimalSharedContext **ppAVar1;
  void **ppvVar2;
  void **ppvVar3;
  AnimalPickRandomTargetAction **ppAVar4;
  AnimalMoveToTargetAction **ppAVar5;
  BTSequence **ppBVar6;
  AnimalPickFeedingTargetAction **ppAVar7;
  AnimalEatAction **ppAVar8;
  AnimalChewAction **ppAVar9;
  AnimalDrinkAction **ppAVar10;
  AnimalSleepingAction **ppAVar11;
  AnimalIdleAction **ppAVar12;
  AnimalRestingAction **ppAVar13;
  AnimalWanderAction **ppAVar14;
  AnimalGrazingAction **ppAVar15;
  BTRandomSelector **ppBVar16;
  undefined8 *puVar17;
  AnimalSource AVar18;
  long lVar19;
  long *__src;
  NPCContext *this_02;
  long *this_03;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  Bt2PhysicsRBObject *this_04;
  ulong uVar23;
  BTRootSelector *this_05;
  BTRandomSelector *this_06;
  BTSequence *pBVar24;
  undefined8 *puVar25;
  AnimalPickRandomTargetAction *pAVar26;
  AnimalMoveToTargetAction *pAVar27;
  AnimalPickFeedingTargetAction *pAVar28;
  AnimalEatAction *pAVar29;
  AnimalChewAction *pAVar30;
  AnimalDrinkAction *this_07;
  AnimalSleepingAction *this_08;
  AnimalIdleAction *this_09;
  AnimalRestingAction *this_10;
  AnimalWanderAction *pAVar31;
  AnimalGrazingAction *this_11;
  void *pvVar32;
  AnimalSharedContext *pAVar33;
  long *plVar34;
  AnimalSource *pAVar35;
  ulong uVar36;
  undefined8 *puVar37;
  void *pvVar38;
  int iVar39;
  ulong uVar40;
  ulong uVar41;
  GsShape *this_12;
  long lVar42;
  size_t sVar43;
  undefined8 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  
  lVar19 = tpidr_el0;
  local_90 = *(long *)(lVar19 + 0x28);
  uVar40 = (ulong)param_1;
  this_02 = (NPCContext *)(this + 8);
  *(undefined ***)this = &PTR__Animal_00fd9b58;
  NPCContext::NPCContext(this_02);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x15c) = 0;
  puVar37 = (undefined8 *)(this + 0x1b4);
  *(undefined8 *)(this + 0x1bc) = 0;
  *puVar37 = 0;
  this_00 = (AnimalLocomotionSystem *)(this + 0x1d8);
  *(undefined8 *)(this + 0xcc) = 0;
  this[0x68] = (Animal)0x0;
  *(undefined8 *)(this + 0x84) = 0;
  this[0x8c] = (Animal)0x0;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0xb0] = (Animal)0x0;
  this[0xd4] = (Animal)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x54) = 0x3f800000;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (Animal)0x0;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined8 *)(this + 0x114) = 0;
  this[0x11c] = (Animal)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (Animal)0x0;
  this[0x164] = (Animal)0x0;
  *(undefined8 *)(this + 0x1cc) = 0;
  *(undefined8 *)(this + 0x1c4) = 0;
  *(undefined8 *)(this + 0x4c) = 0x3e4ccccd41200000;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 400) = 0;
  this[0x180] = (Animal)0x0;
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined2 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x184) = 0xffffffff;
  this[0x188] = (Animal)0x0;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  AnimalLocomotionSystem::AnimalLocomotionSystem(this_00);
  this_01 = (BehaviorTree *)(this + 0x6c8);
  *(undefined8 *)(this + 0x6c0) = 0;
  *(undefined8 *)(this + 0x6b8) = 0;
  *(void **)(this + 0x6b0) = (void *)0x0;
                    /* try { // try from 00700234 to 0070023b has its CatchHandler @ 007030c8 */
  BehaviorTree::BehaviorTree(this_01);
  *(AnimalSharedContext **)(this + 0x688) = param_3;
                    /* try { // try from 00700250 to 007002cf has its CatchHandler @ 007030dc */
  this_03 = (long *)CloneUtil::cloneScenegraphNode
                              (*(ScenegraphNode **)(param_4 + uVar40 * 0x3ea0 + 0x20),true,false,
                               (MeshSplitFileState *)0x0);
  pAVar35 = param_4 + uVar40 * 0x3ea0 + 0x59;
  if (((byte)param_4[uVar40 * 0x3ea0 + 0x58] & 1) != 0) {
    pAVar35 = *(AnimalSource **)(param_4 + uVar40 * 0x3ea0 + 0x68);
  }
  uVar20 = Node::getNodeFromReference((Node *)this_03,(char *)pAVar35);
  *(undefined8 *)(this + 0x690) = uVar20;
  pAVar35 = param_4 + uVar40 * 0x3ea0 + 0x71;
  if (((byte)param_4[uVar40 * 0x3ea0 + 0x70] & 1) != 0) {
    pAVar35 = *(AnimalSource **)(param_4 + uVar40 * 0x3ea0 + 0x80);
  }
  uVar20 = Node::getNodeFromReference((Node *)this_03,(char *)pAVar35);
  *(undefined8 *)(this + 0x698) = uVar20;
  CloneUtil::cloneFirstCharacterSet
            (*(TransformGroup **)(param_4 + uVar40 * 0x3ea0 + 0x40),(TransformGroup *)this_03);
  AVar18 = param_4[uVar40 * 0x3ea0 + 0xb8];
  uVar41 = (ulong)((byte)AVar18 >> 1);
  if (((byte)AVar18 & 1) != 0) {
    uVar41 = *(ulong *)(param_4 + uVar40 * 0x3ea0 + 0xc0);
  }
  if (uVar41 != 0) {
    pAVar35 = *(AnimalSource **)(param_4 + uVar40 * 0x3ea0 + 200);
    if (((byte)AVar18 & 1) == 0) {
      pAVar35 = param_4 + uVar40 * 0x3ea0 + 0xb9;
    }
                    /* try { // try from 00700314 to 0070032f has its CatchHandler @ 007030d4 */
    lVar21 = Node::getNodeFromReference((Node *)this_03,(char *)pAVar35);
    if (lVar21 != 0) {
      local_a8 = (long *)operator_new(8);
      plVar34 = local_a8 + 1;
      *local_a8 = lVar21;
      local_98 = plVar34;
      do {
        local_a0 = plVar34 + -1;
        lVar21 = *local_a0;
        if ((*(byte *)(lVar21 + 0x11) >> 3 & 1) != 0) {
          plVar34 = *(long **)(this + 0x6b8);
          if (plVar34 < *(long **)(this + 0x6c0)) {
            *plVar34 = lVar21;
            *(long **)(this + 0x6b8) = plVar34 + 1;
          }
          else {
            pvVar38 = *(void **)(this + 0x6b0);
            sVar43 = (long)plVar34 - (long)pvVar38;
            uVar41 = ((long)sVar43 >> 3) + 1;
            if (uVar41 >> 0x3d != 0) {
                    /* try { // try from 00702c64 to 00702c77 has its CatchHandler @ 007030e0 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar23 = (long)*(long **)(this + 0x6c0) - (long)pvVar38;
            uVar36 = (long)uVar23 >> 2;
            if (uVar41 <= uVar36) {
              uVar41 = uVar36;
            }
            if (0x7ffffffffffffff7 < uVar23) {
              uVar41 = 0x1fffffffffffffff;
            }
            if (uVar41 == 0) {
              pvVar32 = (void *)0x0;
            }
            else {
              if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 007003d8 to 007003db has its CatchHandler @ 007030d8 */
              pvVar32 = operator_new(uVar41 << 3);
            }
            plVar34 = (long *)((long)pvVar32 + ((long)sVar43 >> 3) * 8);
            *plVar34 = lVar21;
            if (0 < (long)sVar43) {
              memcpy(pvVar32,pvVar38,sVar43);
            }
            *(void **)(this + 0x6b0) = pvVar32;
            *(long **)(this + 0x6b8) = plVar34 + 1;
            *(void **)(this + 0x6c0) = (void *)((long)pvVar32 + uVar41 * 8);
            if (pvVar38 != (void *)0x0) {
              operator_delete(pvVar38);
            }
          }
        }
        lVar42 = *(long *)(lVar21 + 0x28);
        plVar34 = local_a0;
        if ((int)((ulong)(*(long *)(lVar21 + 0x30) - lVar42) >> 3) != 0) {
          uVar41 = 0;
          plVar22 = local_a0;
          do {
            __src = local_a8;
            lVar42 = *(long *)(lVar42 + uVar41 * 8);
            if (plVar22 < local_98) {
              plVar34 = plVar22 + 1;
              *plVar22 = lVar42;
              local_a0 = plVar34;
            }
            else {
              sVar43 = (long)plVar22 - (long)local_a8;
              uVar23 = ((long)sVar43 >> 3) + 1;
              if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 00702c48 to 00702c63 has its CatchHandler @ 00703110 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar36 = (long)local_98 - (long)local_a8 >> 2;
              if (uVar23 <= uVar36) {
                uVar23 = uVar36;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_98 - (long)local_a8)) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 == 0) {
                plVar22 = (long *)0x0;
              }
              else {
                if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 007004b0 to 007004b3 has its CatchHandler @ 00703108 */
                plVar22 = (long *)operator_new(uVar23 << 3);
              }
              plVar34 = plVar22 + ((long)sVar43 >> 3) + 1;
              plVar22[(long)sVar43 >> 3] = lVar42;
              if (0 < (long)sVar43) {
                memcpy(plVar22,__src,sVar43);
              }
              local_98 = plVar22 + uVar23;
              local_a8 = plVar22;
              local_a0 = plVar34;
              if (__src != (long *)0x0) {
                operator_delete(__src);
              }
            }
            lVar42 = *(long *)(lVar21 + 0x28);
            uVar41 = uVar41 + 1;
            plVar22 = plVar34;
          } while (uVar41 < ((ulong)(*(long *)(lVar21 + 0x30) - lVar42) >> 3 & 0xffffffff));
        }
      } while (local_a8 != plVar34);
      if (plVar34 != (long *)0x0) {
        local_a0 = plVar34;
        operator_delete(plVar34);
      }
    }
  }
  AVar18 = param_4[uVar40 * 0x3ea0 + 0x88];
  uVar41 = (ulong)((byte)AVar18 >> 1);
  if (((byte)AVar18 & 1) != 0) {
    uVar41 = *(ulong *)(param_4 + uVar40 * 0x3ea0 + 0x90);
  }
  if (uVar41 == 0) {
LAB_00700598:
    *(undefined8 *)(this + 0x6a0) = 0;
  }
  else {
    pAVar35 = *(AnimalSource **)(param_4 + uVar40 * 0x3ea0 + 0x98);
    if (((byte)AVar18 & 1) == 0) {
      pAVar35 = param_4 + uVar40 * 0x3ea0 + 0x89;
    }
                    /* try { // try from 00700554 to 00700567 has its CatchHandler @ 007030dc */
    lVar21 = Node::getNodeFromReference((Node *)this_03,(char *)pAVar35);
    *(long *)(this + 0x6a0) = lVar21;
    if ((lVar21 != 0) &&
       (lVar21 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar21 + 8) >> 3 & 1) != 0)) {
                    /* try { // try from 00700578 to 0070057b has its CatchHandler @ 00702fcc */
      this_04 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
      if ((*(uint *)(this_04 + 0x58) & param_7) == 0) goto LAB_00700598;
                    /* try { // try from 0070058c to 0070058f has its CatchHandler @ 00702fc8 */
      Bt2PhysicsRBObject::setCollisionMask(this_04,*(uint *)(this_04 + 0x58) & param_7);
    }
  }
  AVar18 = param_4[uVar40 * 0x3ea0 + 0xa0];
  uVar41 = (ulong)((byte)AVar18 >> 1);
  if (((byte)AVar18 & 1) != 0) {
    uVar41 = *(ulong *)(param_4 + uVar40 * 0x3ea0 + 0xa8);
  }
  if (uVar41 != 0) {
    pAVar35 = *(AnimalSource **)(param_4 + uVar40 * 0x3ea0 + 0xb0);
    if (((byte)AVar18 & 1) == 0) {
      pAVar35 = param_4 + uVar40 * 0x3ea0 + 0xa1;
    }
                    /* try { // try from 007005d0 to 007005fb has its CatchHandler @ 007030d0 */
    lVar21 = Node::getNodeFromReference((Node *)this_03,(char *)pAVar35);
    if (lVar21 != 0) {
      *(long *)(this + 0x40) = lVar21;
      uVar45 = *(undefined4 *)(lVar21 + 0xb0);
      *(undefined8 *)(this + 0x1a8) = *(undefined8 *)(lVar21 + 0xa8);
      *(undefined4 *)(this + 0x1b0) = uVar45;
      GsQuaternion::set((GsQuaternion *)puVar37,(Matrix4x4 *)(lVar21 + 0x78));
      *(undefined8 *)(this + 0x1cc) = *(undefined8 *)(this + 0x1bc);
      *(undefined8 *)(this + 0x1c4) = *puVar37;
      goto LAB_00700618;
    }
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
LAB_00700618:
                    /* try { // try from 00700618 to 00700623 has its CatchHandler @ 007030e4 */
  plVar34 = (long *)operator_new(0x158);
                    /* try { // try from 00700628 to 00700633 has its CatchHandler @ 007030bc */
  TransformGroup::TransformGroup((TransformGroup *)plVar34,"animal root");
  lVar21 = *plVar34;
  *(long **)(this + 0x6a8) = plVar34;
                    /* try { // try from 00700644 to 0070069b has its CatchHandler @ 007030e4 */
  (**(code **)(lVar21 + 0x18))(plVar34,*(undefined8 *)(this + 0x690),0xffffffff);
  (**(code **)(**(long **)(this + 0x6a8) + 0x18))
            (*(long **)(this + 0x6a8),*(undefined8 *)(this + 0x698),0xffffffff);
  if (*(long *)(this + 0x6a0) != 0) {
    (**(code **)(**(long **)(this + 0x6a8) + 0x18))
              (*(long **)(this + 0x6a8),*(long *)(this + 0x6a0),0xffffffff);
  }
  (**(code **)(*(long *)param_5 + 0x18))(param_5,*(undefined8 *)(this + 0x6a8),0xffffffff);
  if (this_03 != (long *)0x0) {
    (**(code **)(*this_03 + 8))(this_03);
  }
  if (param_6 != (AudioSource *)0x0) {
    *(AudioSource **)(this + 400) = param_6;
                    /* try { // try from 007006c4 to 007006cf has its CatchHandler @ 007030e4 */
    (**(code **)(**(long **)(this + 0x6a8) + 0x18))(*(long **)(this + 0x6a8),param_6,0xffffffff);
  }
  iVar39 = 0;
  ppAVar1 = (AnimalSharedContext **)(this + 0x688);
  do {
                    /* try { // try from 00700714 to 0070071b has its CatchHandler @ 007030ec */
    uVar41 = DetourNavigationMeshQuery::getRandomPosition
                       (*(DetourNavigationMeshQuery **)(*ppAVar1 + 0x50),(float *)&local_a8);
    if ((uVar41 & 1) != 0) {
      pAVar33 = *(AnimalSharedContext **)(this + 0x688);
      uVar45 = NEON_fmadd((undefined4)local_a8,*(undefined4 *)(pAVar33 + 4),
                          local_a8._4_4_ * *(float *)(pAVar33 + 0x14));
      fVar46 = (float)NEON_fmadd(local_a0._0_4_,*(undefined4 *)(pAVar33 + 0x24),uVar45);
      *(float *)(this + 8) = fVar46 + *(float *)(pAVar33 + 0x34);
      uVar45 = NEON_fmadd((undefined4)local_a8,*(undefined4 *)(pAVar33 + 8),
                          local_a8._4_4_ * *(float *)(pAVar33 + 0x18));
      fVar46 = (float)NEON_fmadd(local_a0._0_4_,*(undefined4 *)(pAVar33 + 0x28),uVar45);
      *(float *)(this + 0xc) = *(float *)(pAVar33 + 0x38) + fVar46;
      uVar45 = NEON_fmadd((undefined4)local_a8,*(undefined4 *)(pAVar33 + 0xc),
                          local_a8._4_4_ * *(float *)(pAVar33 + 0x1c));
      fVar46 = (float)NEON_fmadd(local_a0._0_4_,*(undefined4 *)(pAVar33 + 0x2c),uVar45);
      *(float *)(this + 0x10) = *(float *)(pAVar33 + 0x3c) + fVar46;
      lVar21 = *(long *)(pAVar33 + 0x538);
      if (*(long *)(pAVar33 + 0x540) != lVar21) {
        uVar41 = 0;
        do {
          if (*(int *)(lVar21 + uVar41 * 0x28 + 4) == 0) {
            lVar21 = lVar21 + uVar41 * 0x28;
            local_b8 = CONCAT44(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 8));
                    /* try { // try from 007007fc to 00700803 has its CatchHandler @ 00703100 */
            uVar23 = MathUtil::pointInQuad2D
                               ((Vector2 *)&local_b8,(Vector2 *)(lVar21 + 8),
                                (Vector2 *)(lVar21 + 0x10),(Vector2 *)(lVar21 + 0x18),
                                (Vector2 *)(lVar21 + 0x20));
            if ((uVar23 & 1) != 0) goto LAB_00700700;
            pAVar33 = *ppAVar1;
          }
          uVar41 = (ulong)((int)uVar41 + 1);
          lVar21 = *(long *)(pAVar33 + 0x538);
          uVar23 = (*(long *)(pAVar33 + 0x540) - lVar21 >> 3) * -0x3333333333333333;
        } while (uVar41 <= uVar23 && uVar23 - uVar41 != 0);
      }
                    /* try { // try from 00700820 to 0070082b has its CatchHandler @ 007030e8 */
      uVar41 = (**(code **)(**(long **)(pAVar33 + 0x58) + 0x10))
                         (*(undefined4 *)(param_4 + uVar40 * 0x3ea0 + 8),*(long **)(pAVar33 + 0x58),
                          this_02,param_2);
      if ((uVar41 & 1) == 0) break;
    }
LAB_00700700:
    iVar39 = iVar39 + 1;
  } while (iVar39 != 10);
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  uVar20 = NEON_rev64(*(undefined8 *)(param_4 + uVar40 * 0x3ea0 + 8),4);
  *(undefined8 *)(this + 0x50) = uVar20;
  uVar45 = *(undefined4 *)(param_4 + uVar40 * 0x3ea0 + 0x14);
  *(undefined4 *)(this + 0x5c) = 0;
  *(uint *)(this + 0x19c) = param_1;
  *(uint *)(this + 0x1a0) = param_2;
  *(undefined4 *)(this + 0x58) = uVar45;
                    /* try { // try from 00700870 to 0070090f has its CatchHandler @ 007030e4 */
  uVar45 = MathUtil::getRandomMinMax(0.0,*(float *)(param_4 + uVar40 * 0x3ea0 + 0x3e5c));
  *(undefined4 *)(this + 0x198) = uVar45;
  uVar45 = MathUtil::getRandomMinMax(-10.0,10.0);
  *(undefined4 *)(this + 0x14) = uVar45;
  fVar46 = (float)MathUtil::getRandomMinMax(-10.0,10.0);
  fVar48 = *(float *)(this + 0x14);
  fVar47 = *(float *)(this + 0x18);
  *(float *)(this + 0x1c) = fVar46;
  uVar45 = NEON_fmadd(fVar48,fVar48,fVar47 * fVar47);
  fVar51 = (float)NEON_fmadd(fVar46,fVar46,uVar45);
  fVar50 = 1.0;
  if (1e-06 < fVar51) {
    fVar50 = 1.0 / SQRT(fVar51);
  }
  *(float *)(this + 0x14) = fVar48 * fVar50;
  *(float *)(this + 0x18) = fVar47 * fVar50;
  *(float *)(this + 0x1c) = fVar46 * fVar50;
  AnimalLocomotionSystem::load
            ((AnimalLocomotionSystemSource *)this_00,
             (TransformGroup *)(param_4 + uVar40 * 0x3ea0 + 0xd0),
             *(AnimalSharedContext **)(this + 0x6a8),*(AnimalContext **)(this + 0x688),(uint)this_02
             ,SUB41(param_8,0));
  if ((param_4[uVar40 * 0x3ea0 + 0x3e40] != (AnimalSource)0x0) &&
     (lVar21 = *(long *)(this + 0x6b0), *(long *)(this + 0x6b8) != lVar21)) {
    uVar20 = NEON_fmov(0x3f800000,4);
    uVar41 = 0;
    do {
      uVar44 = NEON_ucvtf(*(undefined8 *)(param_4 + uVar40 * 0x3ea0 + 0x3e4c),4);
      this_12 = *(GsShape **)(lVar21 + uVar41 * 8);
      uVar49 = NEON_ucvtf(*(undefined8 *)(param_4 + uVar40 * 0x3ea0 + 0x3e44),4);
      local_a0 = (long *)0x0;
      fVar46 = (float)((ulong)uVar44 >> 0x20);
      local_b8 = CONCAT44((float)((ulong)uVar20 >> 0x20) / fVar46,(float)uVar20 / (float)uVar44);
      uStack_b0 = CONCAT44((float)((ulong)uVar49 >> 0x20) / fVar46,(float)uVar49 / (float)uVar44);
      uVar45 = 0x3f800000;
      if (param_4[uVar40 * 0x3ea0 + 0x3e54] != (AnimalSource)0x0) {
        uVar45 = 0xbf800000;
      }
      local_a8 = (long *)CONCAT44(uVar45,0x3f800000);
                    /* try { // try from 007009b8 to 007009d7 has its CatchHandler @ 007030f0 */
      GsShape::setCustomShaderParameter(this_12,"mirrorScaleAndOffsetUV",(float *)&local_a8);
      GsShape::setCustomShaderParameter(this_12,"atlasInvSizeAndOffsetUV",(float *)&local_b8);
      uVar41 = (ulong)((int)uVar41 + 1);
      lVar21 = *(long *)(this + 0x6b0);
    } while (uVar41 < (ulong)(*(long *)(this + 0x6b8) - lVar21 >> 3));
  }
                    /* try { // try from 007009f0 to 007009f7 has its CatchHandler @ 007030b8 */
  this_05 = (BTRootSelector *)operator_new(0x50);
                    /* try { // try from 007009fc to 00700a03 has its CatchHandler @ 007030b4 */
  BTRootSelector::BTRootSelector(this_05,this_01);
                    /* try { // try from 00700a08 to 00700a0f has its CatchHandler @ 007030b0 */
  this_06 = (BTRandomSelector *)operator_new(0x70);
                    /* try { // try from 00700a10 to 00700a23 has its CatchHandler @ 007030a4 */
  BTRandomSelector::BTRandomSelector(this_06,this_01,true);
                    /* try { // try from 00700a24 to 00700a2b has its CatchHandler @ 007030f4 */
  pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00700a30 to 00700a37 has its CatchHandler @ 00703090 */
  BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 00700a38 to 00700a3f has its CatchHandler @ 007030f4 */
  puVar25 = (undefined8 *)operator_new(0x38);
  pAVar33 = *ppAVar1;
                    /* try { // try from 00700a48 to 00700a4b has its CatchHandler @ 00703084 */
  BTBehavior::BTBehavior((BTBehavior *)puVar25);
  ppvVar2 = (void **)(pBVar24 + 0x28);
  puVar37 = *(undefined8 **)(pBVar24 + 0x30);
  puVar17 = *(undefined8 **)(pBVar24 + 0x38);
  *puVar25 = &PTR__BTBehavior_00fd9ba8;
  puVar25[5] = this_02;
  puVar25[6] = pAVar33;
  if (puVar37 == puVar17) {
    pvVar38 = *ppvVar2;
    uVar23 = (long)puVar37 - (long)pvVar38;
    uVar41 = ((long)uVar23 >> 3) + 1;
    if (uVar41 >> 0x3d != 0) {
                    /* try { // try from 00702c78 to 00702fc3 has its CatchHandler @ 007030f4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
      uVar41 = (long)uVar23 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar23) {
      uVar41 = 0x1fffffffffffffff;
    }
    if (uVar41 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00700ac4 to 00700ac7 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar41 << 3);
    }
    puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
    *puVar37 = puVar25;
    if (0 < (long)uVar23) {
      memcpy(pvVar32,pvVar38,uVar23);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *puVar37 = puVar25;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
  }
                    /* try { // try from 00700b10 to 00700b17 has its CatchHandler @ 007030f4 */
  pAVar26 = (AnimalPickRandomTargetAction *)operator_new(0x40);
                    /* try { // try from 00700b20 to 00700b2b has its CatchHandler @ 00703080 */
  AnimalPickRandomTargetAction::AnimalPickRandomTargetAction
            (pAVar26,*ppAVar1,(AnimalContext *)this_02,0);
  ppAVar4 = *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30);
  if (ppAVar4 == *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar2;
    uVar23 = (long)ppAVar4 - (long)pvVar38;
    uVar41 = ((long)uVar23 >> 3) + 1;
    if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
      uVar41 = (long)uVar23 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar23) {
      uVar41 = 0x1fffffffffffffff;
    }
    if (uVar41 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00700b88 to 00700b8b has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar41 << 3);
    }
    ppAVar4 = (AnimalPickRandomTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
    *ppAVar4 = pAVar26;
    if (0 < (long)uVar23) {
      memcpy(pvVar32,pvVar38,uVar23);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar4 = pAVar26;
    *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
  }
                    /* try { // try from 00700bd4 to 00700bdb has its CatchHandler @ 007030f4 */
  pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 00700be0 to 00700beb has its CatchHandler @ 0070307c */
  AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
  ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
  if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar2;
    uVar23 = (long)ppAVar5 - (long)pvVar38;
    uVar41 = ((long)uVar23 >> 3) + 1;
    if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
      uVar41 = (long)uVar23 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar23) {
      uVar41 = 0x1fffffffffffffff;
    }
    if (uVar41 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00700c4c to 00700c4f has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar41 << 3);
    }
    ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
    *ppAVar5 = pAVar27;
    if (0 < (long)uVar23) {
      memcpy(pvVar32,pvVar38,uVar23);
    }
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar5 = pAVar27;
    *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
  }
  ppBVar6 = *(BTSequence ***)(this_05 + 0x30);
  if (ppBVar6 == *(BTSequence ***)(this_05 + 0x38)) {
    pvVar38 = *(void **)(this_05 + 0x28);
    uVar23 = (long)ppBVar6 - (long)pvVar38;
    uVar41 = ((long)uVar23 >> 3) + 1;
    if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
      uVar41 = (long)uVar23 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar23) {
      uVar41 = 0x1fffffffffffffff;
    }
    if (uVar41 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00700d00 to 00700d03 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar41 << 3);
    }
    ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
    *ppBVar6 = pBVar24;
    if (0 < (long)uVar23) {
      memcpy(pvVar32,pvVar38,uVar23);
    }
    *(void **)(this_05 + 0x28) = pvVar32;
    *(BTSequence ***)(this_05 + 0x30) = ppBVar6 + 1;
    *(void **)(this_05 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppBVar6 = pBVar24;
    *(BTSequence ***)(this_05 + 0x30) = ppBVar6 + 1;
  }
  if (param_4[uVar40 * 0x3ea0 + 0x12] != (AnimalSource)0x0) {
                    /* try { // try from 00700d64 to 00700d6b has its CatchHandler @ 007030f4 */
    pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00700d70 to 00700d77 has its CatchHandler @ 0070302c */
    BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 00700d78 to 00700d7f has its CatchHandler @ 007030f4 */
    puVar25 = (undefined8 *)operator_new(0x30);
                    /* try { // try from 00700d84 to 00700d87 has its CatchHandler @ 00703028 */
    BTBehavior::BTBehavior((BTBehavior *)puVar25);
    ppvVar2 = (void **)(pBVar24 + 0x28);
    puVar37 = *(undefined8 **)(pBVar24 + 0x30);
    puVar17 = *(undefined8 **)(pBVar24 + 0x38);
    *puVar25 = &PTR__BTBehavior_00fd9c08;
    puVar25[5] = this_02;
    if (puVar37 == puVar17) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)puVar37 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00700e00 to 00700e03 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *puVar37 = puVar25;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *puVar37 = puVar25;
      *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    }
                    /* try { // try from 00700e4c to 00700e53 has its CatchHandler @ 007030f4 */
    puVar25 = (undefined8 *)operator_new(0x30);
    pAVar33 = *ppAVar1;
                    /* try { // try from 00700e5c to 00700e5f has its CatchHandler @ 00703024 */
    BTBehavior::BTBehavior((BTBehavior *)puVar25);
    puVar25[5] = pAVar33;
    puVar37 = *(undefined8 **)(pBVar24 + 0x30);
    puVar17 = *(undefined8 **)(pBVar24 + 0x38);
    *puVar25 = &PTR__BTBehavior_00fd9c58;
    if (puVar37 == puVar17) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)puVar37 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00700ed0 to 00700ed3 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *puVar37 = puVar25;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *puVar37 = puVar25;
      *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    }
                    /* try { // try from 00700f1c to 00700f23 has its CatchHandler @ 007030f4 */
    pAVar28 = (AnimalPickFeedingTargetAction *)operator_new(0x40);
                    /* try { // try from 00700f2c to 00700f37 has its CatchHandler @ 00703020 */
    AnimalPickFeedingTargetAction::AnimalPickFeedingTargetAction
              (pAVar28,*ppAVar1,(AnimalContext *)this_02,0);
    ppAVar7 = *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar7 == *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar7 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00700f94 to 00700f97 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar7 = (AnimalPickFeedingTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar7 = pAVar28;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30) = ppAVar7 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar7 = pAVar28;
      *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30) = ppAVar7 + 1;
    }
                    /* try { // try from 00700fe0 to 00700fe7 has its CatchHandler @ 007030f4 */
    pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 00700fec to 00700ff7 has its CatchHandler @ 0070301c */
    AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
    ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar5 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701054 to 00701057 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar5 = pAVar27;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar5 = pAVar27;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    }
                    /* try { // try from 007010a0 to 007010a7 has its CatchHandler @ 007030f4 */
    pAVar29 = (AnimalEatAction *)operator_new(0x40);
                    /* try { // try from 007010b0 to 007010bb has its CatchHandler @ 00703018 */
    AnimalEatAction::AnimalEatAction(pAVar29,*ppAVar1,(AnimalContext *)this_02,this_00);
    ppAVar8 = *(AnimalEatAction ***)(pBVar24 + 0x30);
    if (ppAVar8 == *(AnimalEatAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar8 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701118 to 0070111b has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar8 = (AnimalEatAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar8 = pAVar29;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalEatAction ***)(pBVar24 + 0x30) = ppAVar8 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar8 = pAVar29;
      *(AnimalEatAction ***)(pBVar24 + 0x30) = ppAVar8 + 1;
    }
                    /* try { // try from 00701164 to 0070116b has its CatchHandler @ 007030f4 */
    pAVar30 = (AnimalChewAction *)operator_new(0x40);
                    /* try { // try from 00701174 to 0070117f has its CatchHandler @ 00703014 */
    AnimalChewAction::AnimalChewAction(pAVar30,*ppAVar1,(AnimalContext *)this_02,this_00);
    ppAVar9 = *(AnimalChewAction ***)(pBVar24 + 0x30);
    if (ppAVar9 == *(AnimalChewAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar9 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 007011dc to 007011df has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar9 = (AnimalChewAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar9 = pAVar30;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalChewAction ***)(pBVar24 + 0x30) = ppAVar9 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar9 = pAVar30;
      *(AnimalChewAction ***)(pBVar24 + 0x30) = ppAVar9 + 1;
    }
                    /* try { // try from 00701228 to 0070122f has its CatchHandler @ 007030f4 */
    pAVar26 = (AnimalPickRandomTargetAction *)operator_new(0x40);
                    /* try { // try from 00701238 to 00701243 has its CatchHandler @ 00703010 */
    AnimalPickRandomTargetAction::AnimalPickRandomTargetAction
              (pAVar26,*ppAVar1,(AnimalContext *)this_02,0);
    ppAVar4 = *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar4 == *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar4 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 007012a0 to 007012a3 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar4 = (AnimalPickRandomTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar4 = pAVar26;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar4 = pAVar26;
      *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
    }
                    /* try { // try from 007012ec to 007012f3 has its CatchHandler @ 007030f4 */
    pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 007012f8 to 00701303 has its CatchHandler @ 0070300c */
    AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
    ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar5 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701364 to 00701367 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar5 = pAVar27;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar5 = pAVar27;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    }
    ppBVar6 = *(BTSequence ***)(this_06 + 0x30);
    if (ppBVar6 == *(BTSequence ***)(this_06 + 0x38)) {
      pvVar38 = *(void **)(this_06 + 0x28);
      uVar23 = (long)ppBVar6 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701418 to 0070141b has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppBVar6 = pBVar24;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(this_06 + 0x28) = pvVar32;
      *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
      *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppBVar6 = pBVar24;
      *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
    }
                    /* try { // try from 00701468 to 0070146f has its CatchHandler @ 007030f4 */
    pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00701474 to 0070147b has its CatchHandler @ 00703008 */
    BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 0070147c to 00701483 has its CatchHandler @ 007030f4 */
    puVar25 = (undefined8 *)operator_new(0x30);
    pAVar33 = *ppAVar1;
                    /* try { // try from 0070148c to 0070148f has its CatchHandler @ 00703004 */
    BTBehavior::BTBehavior((BTBehavior *)puVar25);
    ppvVar2 = (void **)(pBVar24 + 0x28);
    puVar37 = *(undefined8 **)(pBVar24 + 0x30);
    puVar17 = *(undefined8 **)(pBVar24 + 0x38);
    puVar25[5] = pAVar33;
    *puVar25 = &PTR__BTBehavior_00fd9c58;
    if (puVar37 == puVar17) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)puVar37 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701504 to 00701507 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *puVar37 = puVar25;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *puVar37 = puVar25;
      *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    }
                    /* try { // try from 00701550 to 00701557 has its CatchHandler @ 007030f4 */
    pAVar28 = (AnimalPickFeedingTargetAction *)operator_new(0x40);
                    /* try { // try from 00701560 to 0070156b has its CatchHandler @ 00702ffc */
    AnimalPickFeedingTargetAction::AnimalPickFeedingTargetAction
              (pAVar28,*ppAVar1,(AnimalContext *)this_02,0);
    ppAVar7 = *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar7 == *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar7 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 007015c8 to 007015cb has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar7 = (AnimalPickFeedingTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar7 = pAVar28;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30) = ppAVar7 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar7 = pAVar28;
      *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30) = ppAVar7 + 1;
    }
                    /* try { // try from 00701614 to 0070161b has its CatchHandler @ 007030f4 */
    pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 00701620 to 0070162b has its CatchHandler @ 00702ff4 */
    AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
    ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar5 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701688 to 0070168b has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar5 = pAVar27;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar5 = pAVar27;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    }
                    /* try { // try from 007016d4 to 007016db has its CatchHandler @ 007030f4 */
    pAVar29 = (AnimalEatAction *)operator_new(0x40);
                    /* try { // try from 007016e4 to 007016ef has its CatchHandler @ 00702fec */
    AnimalEatAction::AnimalEatAction(pAVar29,*ppAVar1,(AnimalContext *)this_02,this_00);
    ppAVar8 = *(AnimalEatAction ***)(pBVar24 + 0x30);
    if (ppAVar8 == *(AnimalEatAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar8 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0070174c to 0070174f has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar8 = (AnimalEatAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar8 = pAVar29;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalEatAction ***)(pBVar24 + 0x30) = ppAVar8 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar8 = pAVar29;
      *(AnimalEatAction ***)(pBVar24 + 0x30) = ppAVar8 + 1;
    }
                    /* try { // try from 00701798 to 0070179f has its CatchHandler @ 007030f4 */
    pAVar30 = (AnimalChewAction *)operator_new(0x40);
                    /* try { // try from 007017a8 to 007017b3 has its CatchHandler @ 00702fe4 */
    AnimalChewAction::AnimalChewAction(pAVar30,*ppAVar1,(AnimalContext *)this_02,this_00);
    ppAVar9 = *(AnimalChewAction ***)(pBVar24 + 0x30);
    if (ppAVar9 == *(AnimalChewAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar9 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701810 to 00701813 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar9 = (AnimalChewAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar9 = pAVar30;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalChewAction ***)(pBVar24 + 0x30) = ppAVar9 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar9 = pAVar30;
      *(AnimalChewAction ***)(pBVar24 + 0x30) = ppAVar9 + 1;
    }
                    /* try { // try from 0070185c to 00701863 has its CatchHandler @ 007030f4 */
    pAVar26 = (AnimalPickRandomTargetAction *)operator_new(0x40);
                    /* try { // try from 0070186c to 00701877 has its CatchHandler @ 00702fd8 */
    AnimalPickRandomTargetAction::AnimalPickRandomTargetAction
              (pAVar26,*ppAVar1,(AnimalContext *)this_02,0);
    ppAVar4 = *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar4 == *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar4 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 007018d4 to 007018d7 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar4 = (AnimalPickRandomTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar4 = pAVar26;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar4 = pAVar26;
      *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
    }
                    /* try { // try from 00701920 to 00701927 has its CatchHandler @ 007030f4 */
    pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 0070192c to 00701937 has its CatchHandler @ 00702fd0 */
    AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
    ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar5 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0070199c to 0070199f has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar5 = pAVar27;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar5 = pAVar27;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    }
    ppBVar6 = *(BTSequence ***)(this_06 + 0x30);
    if (ppBVar6 == *(BTSequence ***)(this_06 + 0x38)) {
      pvVar38 = *(void **)(this_06 + 0x28);
      uVar23 = (long)ppBVar6 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701a50 to 00701a53 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppBVar6 = pBVar24;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(this_06 + 0x28) = pvVar32;
      *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
      *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppBVar6 = pBVar24;
      *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
    }
  }
  if (param_4[uVar40 * 0x3ea0 + 0x13] != (AnimalSource)0x0) {
                    /* try { // try from 00701ab4 to 00701abb has its CatchHandler @ 007030f4 */
    pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00701ac0 to 00701ac7 has its CatchHandler @ 00703000 */
    BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 00701ac8 to 00701acf has its CatchHandler @ 007030f4 */
    pAVar28 = (AnimalPickFeedingTargetAction *)operator_new(0x40);
                    /* try { // try from 00701ad8 to 00701ae3 has its CatchHandler @ 00702ff8 */
    AnimalPickFeedingTargetAction::AnimalPickFeedingTargetAction
              (pAVar28,*ppAVar1,(AnimalContext *)this_02,1);
    ppAVar7 = *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30);
    ppvVar2 = (void **)(pBVar24 + 0x28);
    if (ppAVar7 == *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar7 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701b44 to 00701b47 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar7 = (AnimalPickFeedingTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar7 = pAVar28;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30) = ppAVar7 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar7 = pAVar28;
      *(AnimalPickFeedingTargetAction ***)(pBVar24 + 0x30) = ppAVar7 + 1;
    }
                    /* try { // try from 00701b90 to 00701b97 has its CatchHandler @ 007030f4 */
    pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 00701b9c to 00701ba7 has its CatchHandler @ 00702ff0 */
    AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
    ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar5 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701c04 to 00701c07 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar5 = pAVar27;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar5 = pAVar27;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    }
                    /* try { // try from 00701c50 to 00701c57 has its CatchHandler @ 007030f4 */
    this_07 = (AnimalDrinkAction *)operator_new(0x40);
                    /* try { // try from 00701c60 to 00701c6b has its CatchHandler @ 00702fe8 */
    AnimalDrinkAction::AnimalDrinkAction(this_07,*ppAVar1,(AnimalContext *)this_02,this_00);
    ppAVar10 = *(AnimalDrinkAction ***)(pBVar24 + 0x30);
    if (ppAVar10 == *(AnimalDrinkAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar10 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701cc8 to 00701ccb has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar10 = (AnimalDrinkAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar10 = this_07;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalDrinkAction ***)(pBVar24 + 0x30) = ppAVar10 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar10 = this_07;
      *(AnimalDrinkAction ***)(pBVar24 + 0x30) = ppAVar10 + 1;
    }
                    /* try { // try from 00701d14 to 00701d1b has its CatchHandler @ 007030f4 */
    pAVar26 = (AnimalPickRandomTargetAction *)operator_new(0x40);
                    /* try { // try from 00701d24 to 00701d2f has its CatchHandler @ 00702fe0 */
    AnimalPickRandomTargetAction::AnimalPickRandomTargetAction
              (pAVar26,*ppAVar1,(AnimalContext *)this_02,0);
    ppAVar4 = *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar4 == *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar4 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701d8c to 00701d8f has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar4 = (AnimalPickRandomTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar4 = pAVar26;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar4 = pAVar26;
      *(AnimalPickRandomTargetAction ***)(pBVar24 + 0x30) = ppAVar4 + 1;
    }
                    /* try { // try from 00701dd8 to 00701ddf has its CatchHandler @ 007030f4 */
    pAVar27 = (AnimalMoveToTargetAction *)operator_new(0x38);
                    /* try { // try from 00701de4 to 00701def has its CatchHandler @ 00702fd4 */
    AnimalMoveToTargetAction::AnimalMoveToTargetAction(pAVar27,(AnimalContext *)this_02,this_00);
    ppAVar5 = *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30);
    if (ppAVar5 == *(AnimalMoveToTargetAction ***)(pBVar24 + 0x38)) {
      pvVar38 = *ppvVar2;
      uVar23 = (long)ppAVar5 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701e54 to 00701e57 has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppAVar5 = (AnimalMoveToTargetAction **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppAVar5 = pAVar27;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(pBVar24 + 0x28) = pvVar32;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
      *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar5 = pAVar27;
      *(AnimalMoveToTargetAction ***)(pBVar24 + 0x30) = ppAVar5 + 1;
    }
    ppBVar6 = *(BTSequence ***)(this_06 + 0x30);
    if (ppBVar6 == *(BTSequence ***)(this_06 + 0x38)) {
      pvVar38 = *(void **)(this_06 + 0x28);
      uVar23 = (long)ppBVar6 - (long)pvVar38;
      uVar41 = ((long)uVar23 >> 3) + 1;
      if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar41 <= (ulong)((long)uVar23 >> 2)) {
        uVar41 = (long)uVar23 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar23) {
        uVar41 = 0x1fffffffffffffff;
      }
      if (uVar41 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar41 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701f08 to 00701f0b has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar41 << 3);
      }
      ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar23 >> 3) * 8);
      *ppBVar6 = pBVar24;
      if (0 < (long)uVar23) {
        memcpy(pvVar32,pvVar38,uVar23);
      }
      *(void **)(this_06 + 0x28) = pvVar32;
      *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
      *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar41 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppBVar6 = pBVar24;
      *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
    }
  }
  if (param_4[uVar40 * 0x3ea0 + 0x11] != (AnimalSource)0x0) {
                    /* try { // try from 00701f6c to 00701f73 has its CatchHandler @ 007030f4 */
    this_08 = (AnimalSleepingAction *)operator_new(0x38);
                    /* try { // try from 00701f7c to 00701f83 has its CatchHandler @ 00702fdc */
    AnimalSleepingAction::AnimalSleepingAction(this_08,*ppAVar1,this_00);
    ppAVar11 = *(AnimalSleepingAction ***)(this_06 + 0x30);
    if (ppAVar11 == *(AnimalSleepingAction ***)(this_06 + 0x38)) {
      pvVar38 = *(void **)(this_06 + 0x28);
      uVar41 = (long)ppAVar11 - (long)pvVar38;
      uVar40 = ((long)uVar41 >> 3) + 1;
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
        uVar40 = (long)uVar41 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar41) {
        uVar40 = 0x1fffffffffffffff;
      }
      if (uVar40 == 0) {
        pvVar32 = (void *)0x0;
      }
      else {
        if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00701fe8 to 00701feb has its CatchHandler @ 007030f4 */
        pvVar32 = operator_new(uVar40 << 3);
      }
      ppAVar11 = (AnimalSleepingAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
      *ppAVar11 = this_08;
      if (0 < (long)uVar41) {
        memcpy(pvVar32,pvVar38,uVar41);
      }
      *(void **)(this_06 + 0x28) = pvVar32;
      *(AnimalSleepingAction ***)(this_06 + 0x30) = ppAVar11 + 1;
      *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
      if (pvVar38 != (void *)0x0) {
        operator_delete(pvVar38);
      }
    }
    else {
      *ppAVar11 = this_08;
      *(AnimalSleepingAction ***)(this_06 + 0x30) = ppAVar11 + 1;
    }
  }
                    /* try { // try from 00702034 to 0070203b has its CatchHandler @ 007030f4 */
  pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00702040 to 00702047 has its CatchHandler @ 00703078 */
  BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 00702048 to 0070204f has its CatchHandler @ 007030f4 */
  puVar25 = (undefined8 *)operator_new(0x30);
  pAVar33 = *ppAVar1;
                    /* try { // try from 00702058 to 0070205b has its CatchHandler @ 0070306c */
  BTBehavior::BTBehavior((BTBehavior *)puVar25);
  puVar25[5] = pAVar33;
  puVar37 = *(undefined8 **)(pBVar24 + 0x30);
  puVar17 = *(undefined8 **)(pBVar24 + 0x38);
  *puVar25 = &PTR__BTBehavior_00fd9ca8;
  if (puVar37 == puVar17) {
    pvVar38 = *(void **)(pBVar24 + 0x28);
    uVar41 = (long)puVar37 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 007020d0 to 007020d3 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *puVar37 = puVar25;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *puVar37 = puVar25;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
  }
                    /* try { // try from 00702118 to 0070211f has its CatchHandler @ 007030f4 */
  this_09 = (AnimalIdleAction *)operator_new(0x40);
                    /* try { // try from 00702128 to 00702133 has its CatchHandler @ 00703068 */
  AnimalIdleAction::AnimalIdleAction(this_09,(AnimalContext *)this_02,*ppAVar1,this_00);
  ppAVar12 = *(AnimalIdleAction ***)(pBVar24 + 0x30);
  if (ppAVar12 == *(AnimalIdleAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *(void **)(pBVar24 + 0x28);
    uVar41 = (long)ppAVar12 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702194 to 00702197 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppAVar12 = (AnimalIdleAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppAVar12 = this_09;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalIdleAction ***)(pBVar24 + 0x30) = ppAVar12 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar12 = this_09;
    *(AnimalIdleAction ***)(pBVar24 + 0x30) = ppAVar12 + 1;
  }
  ppBVar6 = *(BTSequence ***)(this_06 + 0x30);
  ppvVar2 = (void **)(this_06 + 0x28);
  if (ppBVar6 == *(BTSequence ***)(this_06 + 0x38)) {
    pvVar38 = *ppvVar2;
    uVar41 = (long)ppBVar6 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702244 to 00702247 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppBVar6 = pBVar24;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(this_06 + 0x28) = pvVar32;
    *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
    *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppBVar6 = pBVar24;
    *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
  }
                    /* try { // try from 00702290 to 00702297 has its CatchHandler @ 007030f4 */
  pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0070229c to 007022a3 has its CatchHandler @ 00703064 */
  BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 007022a4 to 007022ab has its CatchHandler @ 007030f4 */
  puVar25 = (undefined8 *)operator_new(0x40);
  pAVar33 = *ppAVar1;
                    /* try { // try from 007022b4 to 007022b7 has its CatchHandler @ 00703060 */
  BTBehavior::BTBehavior((BTBehavior *)puVar25);
  *(undefined *)(puVar25 + 7) = 0;
  puVar37 = *(undefined8 **)(pBVar24 + 0x30);
  puVar17 = *(undefined8 **)(pBVar24 + 0x38);
  puVar25[5] = this_02;
  puVar25[6] = pAVar33;
  ppvVar3 = (void **)(pBVar24 + 0x28);
  *puVar25 = &PTR__BTBehavior_00fd9cf8;
  if (puVar37 == puVar17) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)puVar37 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702334 to 00702337 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *puVar37 = puVar25;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *puVar37 = puVar25;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
  }
                    /* try { // try from 0070237c to 00702383 has its CatchHandler @ 007030f4 */
  puVar25 = (undefined8 *)operator_new(0x30);
  pAVar33 = *ppAVar1;
                    /* try { // try from 0070238c to 0070238f has its CatchHandler @ 0070305c */
  BTBehavior::BTBehavior((BTBehavior *)puVar25);
  puVar37 = *(undefined8 **)(pBVar24 + 0x30);
  puVar17 = *(undefined8 **)(pBVar24 + 0x38);
  puVar25[5] = pAVar33;
  *puVar25 = &PTR__BTBehavior_00fd9ca8;
  if (puVar37 == puVar17) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)puVar37 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702400 to 00702403 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *puVar37 = puVar25;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *puVar37 = puVar25;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
  }
                    /* try { // try from 00702448 to 0070244f has its CatchHandler @ 007030f4 */
  this_10 = (AnimalRestingAction *)operator_new(0x40);
                    /* try { // try from 00702458 to 00702463 has its CatchHandler @ 00703058 */
  AnimalRestingAction::AnimalRestingAction(this_10,(AnimalContext *)this_02,*ppAVar1,this_00);
  ppAVar13 = *(AnimalRestingAction ***)(pBVar24 + 0x30);
  if (ppAVar13 == *(AnimalRestingAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)ppAVar13 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 007024c0 to 007024c3 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppAVar13 = (AnimalRestingAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppAVar13 = this_10;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalRestingAction ***)(pBVar24 + 0x30) = ppAVar13 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar13 = this_10;
    *(AnimalRestingAction ***)(pBVar24 + 0x30) = ppAVar13 + 1;
  }
                    /* try { // try from 00702508 to 0070250f has its CatchHandler @ 007030f4 */
  pAVar31 = (AnimalWanderAction *)operator_new(0x40);
                    /* try { // try from 00702518 to 00702523 has its CatchHandler @ 00703054 */
  AnimalWanderAction::AnimalWanderAction(pAVar31,*ppAVar1,(AnimalContext *)this_02,this_00);
  ppAVar14 = *(AnimalWanderAction ***)(pBVar24 + 0x30);
  if (ppAVar14 == *(AnimalWanderAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)ppAVar14 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702584 to 00702587 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppAVar14 = (AnimalWanderAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppAVar14 = pAVar31;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalWanderAction ***)(pBVar24 + 0x30) = ppAVar14 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar14 = pAVar31;
    *(AnimalWanderAction ***)(pBVar24 + 0x30) = ppAVar14 + 1;
  }
  ppBVar6 = *(BTSequence ***)(this_06 + 0x30);
  if (ppBVar6 == *(BTSequence ***)(this_06 + 0x38)) {
    pvVar38 = *ppvVar2;
    uVar41 = (long)ppBVar6 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702630 to 00702633 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppBVar6 = pBVar24;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(this_06 + 0x28) = pvVar32;
    *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
    *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppBVar6 = pBVar24;
    *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
  }
                    /* try { // try from 0070267c to 00702683 has its CatchHandler @ 007030f4 */
  pBVar24 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00702688 to 0070268f has its CatchHandler @ 00703050 */
  BTSequence::BTSequence(pBVar24,this_01);
                    /* try { // try from 00702690 to 00702697 has its CatchHandler @ 007030f4 */
  puVar25 = (undefined8 *)operator_new(0x40);
  pAVar33 = *ppAVar1;
                    /* try { // try from 007026a0 to 007026a3 has its CatchHandler @ 0070304c */
  BTBehavior::BTBehavior((BTBehavior *)puVar25);
  ppvVar3 = (void **)(pBVar24 + 0x28);
  *(undefined *)(puVar25 + 7) = 0;
  puVar37 = *(undefined8 **)(pBVar24 + 0x30);
  puVar17 = *(undefined8 **)(pBVar24 + 0x38);
  *puVar25 = &PTR__BTBehavior_00fd9cf8;
  puVar25[5] = this_02;
  puVar25[6] = pAVar33;
  if (puVar37 == puVar17) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)puVar37 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702720 to 00702723 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *puVar37 = puVar25;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *puVar37 = puVar25;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
  }
                    /* try { // try from 00702768 to 0070276f has its CatchHandler @ 007030f4 */
  puVar25 = (undefined8 *)operator_new(0x30);
  pAVar33 = *ppAVar1;
                    /* try { // try from 00702778 to 0070277b has its CatchHandler @ 00703048 */
  BTBehavior::BTBehavior((BTBehavior *)puVar25);
  puVar37 = *(undefined8 **)(pBVar24 + 0x30);
  puVar17 = *(undefined8 **)(pBVar24 + 0x38);
  puVar25[5] = pAVar33;
  *puVar25 = &PTR__BTBehavior_00fd9ca8;
  if (puVar37 == puVar17) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)puVar37 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 007027ec to 007027ef has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    puVar37 = (undefined8 *)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *puVar37 = puVar25;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *puVar37 = puVar25;
    *(undefined8 **)(pBVar24 + 0x30) = puVar37 + 1;
  }
                    /* try { // try from 00702834 to 0070283b has its CatchHandler @ 007030f4 */
  pAVar31 = (AnimalWanderAction *)operator_new(0x40);
                    /* try { // try from 00702844 to 0070284f has its CatchHandler @ 00703044 */
  AnimalWanderAction::AnimalWanderAction(pAVar31,*ppAVar1,(AnimalContext *)this_02,this_00);
  ppAVar14 = *(AnimalWanderAction ***)(pBVar24 + 0x30);
  if (ppAVar14 == *(AnimalWanderAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)ppAVar14 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 007028ac to 007028af has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppAVar14 = (AnimalWanderAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppAVar14 = pAVar31;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalWanderAction ***)(pBVar24 + 0x30) = ppAVar14 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar14 = pAVar31;
    *(AnimalWanderAction ***)(pBVar24 + 0x30) = ppAVar14 + 1;
  }
                    /* try { // try from 007028f4 to 007028fb has its CatchHandler @ 007030f4 */
  this_11 = (AnimalGrazingAction *)operator_new(0x40);
                    /* try { // try from 00702904 to 0070290f has its CatchHandler @ 00703040 */
  AnimalGrazingAction::AnimalGrazingAction(this_11,*ppAVar1,(AnimalContext *)this_02,this_00);
  ppAVar15 = *(AnimalGrazingAction ***)(pBVar24 + 0x30);
  if (ppAVar15 == *(AnimalGrazingAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)ppAVar15 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0070296c to 0070296f has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppAVar15 = (AnimalGrazingAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppAVar15 = this_11;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalGrazingAction ***)(pBVar24 + 0x30) = ppAVar15 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar15 = this_11;
    *(AnimalGrazingAction ***)(pBVar24 + 0x30) = ppAVar15 + 1;
  }
                    /* try { // try from 007029b4 to 007029bb has its CatchHandler @ 007030f4 */
  pAVar30 = (AnimalChewAction *)operator_new(0x40);
                    /* try { // try from 007029c4 to 007029cf has its CatchHandler @ 0070303c */
  AnimalChewAction::AnimalChewAction(pAVar30,*ppAVar1,(AnimalContext *)this_02,this_00);
  ppAVar9 = *(AnimalChewAction ***)(pBVar24 + 0x30);
  if (ppAVar9 == *(AnimalChewAction ***)(pBVar24 + 0x38)) {
    pvVar38 = *ppvVar3;
    uVar41 = (long)ppAVar9 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702a34 to 00702a37 has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppAVar9 = (AnimalChewAction **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppAVar9 = pAVar30;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(pBVar24 + 0x28) = pvVar32;
    *(AnimalChewAction ***)(pBVar24 + 0x30) = ppAVar9 + 1;
    *(void **)(pBVar24 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppAVar9 = pAVar30;
    *(AnimalChewAction ***)(pBVar24 + 0x30) = ppAVar9 + 1;
  }
  ppBVar6 = *(BTSequence ***)(this_06 + 0x30);
  if (ppBVar6 == *(BTSequence ***)(this_06 + 0x38)) {
    pvVar38 = *ppvVar2;
    uVar41 = (long)ppBVar6 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702aec to 00702aef has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppBVar6 = (BTSequence **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppBVar6 = pBVar24;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(this_06 + 0x28) = pvVar32;
    *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
    *(void **)(this_06 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppBVar6 = pBVar24;
    *(BTSequence ***)(this_06 + 0x30) = ppBVar6 + 1;
  }
  ppBVar16 = *(BTRandomSelector ***)(this_05 + 0x30);
  if (ppBVar16 == *(BTRandomSelector ***)(this_05 + 0x38)) {
    pvVar38 = *(void **)(this_05 + 0x28);
    uVar41 = (long)ppBVar16 - (long)pvVar38;
    uVar40 = ((long)uVar41 >> 3) + 1;
    if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar40 <= (ulong)((long)uVar41 >> 2)) {
      uVar40 = (long)uVar41 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar41) {
      uVar40 = 0x1fffffffffffffff;
    }
    if (uVar40 == 0) {
      pvVar32 = (void *)0x0;
    }
    else {
      if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00702b98 to 00702b9b has its CatchHandler @ 007030f4 */
      pvVar32 = operator_new(uVar40 << 3);
    }
    ppBVar16 = (BTRandomSelector **)((long)pvVar32 + ((long)uVar41 >> 3) * 8);
    *ppBVar16 = this_06;
    if (0 < (long)uVar41) {
      memcpy(pvVar32,pvVar38,uVar41);
    }
    *(void **)(this_05 + 0x28) = pvVar32;
    *(BTRandomSelector ***)(this_05 + 0x30) = ppBVar16 + 1;
    *(void **)(this_05 + 0x38) = (void *)((long)pvVar32 + uVar40 * 8);
    if (pvVar38 != (void *)0x0) {
      operator_delete(pvVar38);
    }
  }
  else {
    *ppBVar16 = this_06;
    *(BTRandomSelector ***)(this_05 + 0x30) = ppBVar16 + 1;
  }
                    /* try { // try from 00702be8 to 00702bf3 has its CatchHandler @ 007030f4 */
  BehaviorTree::insert(this_01,(BTBehavior *)this_05);
  *(BTRootSelector **)(this + 0x6f8) = this_05;
                    /* try { // try from 00702c04 to 00702c0b has its CatchHandler @ 00703038 */
  AnimalAnimationSystem::setConstraintController
            ((AnimalAnimationSystem *)(this + 0x250),(IConstraintController *)this);
  if (*(long *)(lVar19 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


