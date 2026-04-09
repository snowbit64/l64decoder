// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 006ff12c
// Size: 1224 bytes
// Signature: undefined __thiscall update(AnimalHusbandry * this, float param_1)


/* AnimalHusbandry::update(float) */

void __thiscall AnimalHusbandry::update(AnimalHusbandry *this,float param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long **pplVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  AudioSource *pAVar10;
  Animal *this_00;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  AnimalHusbandry *pAVar17;
  ulong in_x16;
  ulong in_x17;
  uint uVar18;
  long **pplVar19;
  long **pplVar20;
  float fVar21;
  undefined4 uVar22;
  BoundingSphere aBStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (this[0x50] == (AnimalHusbandry)0x0) goto LAB_006ff554;
  if (this[0x51] == (AnimalHusbandry)0x0) {
    uVar18 = *(uint *)(this + 0x54);
    uVar9 = (ulong)uVar18;
    if (uVar18 == 0) {
      uVar13 = 0;
    }
    else {
      if (uVar18 == 1) {
        uVar12 = 0;
        uVar13 = 0;
      }
      else {
        uVar12 = uVar9 & 0xfffffffe;
        iVar14 = 0;
        iVar15 = 0;
        uVar16 = uVar12;
        pAVar17 = this;
        do {
          plVar11 = (long *)(pAVar17 + 0x88);
          if (*plVar11 != 0) {
            in_x16 = *(ulong *)(pAVar17 + 0xa8);
          }
          plVar1 = (long *)(pAVar17 + 0x3f28);
          if (*plVar1 != 0) {
            in_x17 = *(ulong *)(pAVar17 + 0x3f48);
          }
          pAVar17 = pAVar17 + 0x7d40;
          bVar6 = in_x16 != 0;
          bVar7 = in_x17 != 0;
          in_x17 = (ulong)bVar7;
          uVar13 = (uint)(*plVar1 != 0 && bVar7);
          in_x16 = (ulong)uVar13;
          iVar14 = iVar14 + (uint)(*plVar11 != 0 && bVar6);
          iVar15 = iVar15 + uVar13;
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
        uVar13 = iVar15 + iVar14;
        if (uVar12 == uVar9) goto LAB_006ff3a4;
      }
      lVar8 = uVar9 - uVar12;
      plVar11 = (long *)(this + uVar12 * 0x3ea0 + 0xa8);
      do {
        if ((plVar11[-4] != 0) && (*plVar11 != 0)) {
          uVar13 = uVar13 + 1;
        }
        plVar11 = plVar11 + 0x7d4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
LAB_006ff3a4:
    if ((uVar13 == uVar18) && (this[0x51] = (AnimalHusbandry)0x1, *(int *)(this + 0x60) != 0)) {
      uVar9 = 0;
      uVar18 = *(uint *)(this + 0x5c);
      do {
        uVar13 = *(uint *)(this + uVar9 * 8 + 0x1f630);
        uVar2 = *(uint *)(this + uVar9 * 8 + 0x1f634);
        pAVar10 = (AudioSource *)
                  AnimalSoundSystem::createSoundInstance
                            ((AnimalSoundSystem *)(this + 0x1fcb0),
                             *(uint *)(this + (ulong)uVar13 * 0x3ea0 + 0x3ed0));
        this_00 = (Animal *)operator_new(0x700);
        uVar3 = *(uint *)(this + 0x38);
        *(uint *)(this + 0x38) = uVar3 + 1;
                    /* try { // try from 006ff470 to 006ff48f has its CatchHandler @ 006ff60c */
        Animal::Animal(this_00,uVar13,uVar2,(AnimalSharedContext *)(this + 0x1f6f8),
                       (AnimalSource *)(this + 0x68),*(TransformGroup **)(this + 0x48),pAVar10,
                       *(uint *)(this + 0x1fd14),uVar3,(bool)this[0x52]);
        lVar8 = *(long *)(this_00 + 0x6a0);
        *(Animal **)(this + (ulong)uVar18 * 8 + 0x1f568) = this_00;
        if (lVar8 != 0) {
          uVar18 = *(uint *)(lVar8 + 0x18);
          pplVar19 = &DAT_01052b18;
          pplVar20 = pplVar19;
          if (DAT_01052b18 != (long *)0x0) {
            pplVar5 = (long **)DAT_01052b18;
            pplVar20 = &DAT_01052b18;
            do {
              while (pplVar19 = pplVar5, uVar18 < *(uint *)((long)pplVar19 + 0x1c)) {
                pplVar5 = (long **)*pplVar19;
                pplVar20 = pplVar19;
                if ((long **)*pplVar19 == (long **)0x0) {
                  plVar11 = *pplVar19;
                  goto joined_r0x006ff518;
                }
              }
              if (uVar18 <= *(uint *)((long)pplVar19 + 0x1c)) break;
              pplVar20 = pplVar19 + 1;
              pplVar5 = (long **)*pplVar20;
            } while (*pplVar20 != (long *)0x0);
            plVar11 = *pplVar20;
joined_r0x006ff518:
            if (plVar11 != (long *)0x0) goto LAB_006ff404;
          }
          uVar22 = *(undefined4 *)(this + 0x18);
          plVar11 = (long *)operator_new(0x28);
          *(uint *)((long)plVar11 + 0x1c) = uVar18;
          plVar11[4] = CONCAT44(uVar2,uVar22);
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = (long)pplVar19;
          *pplVar20 = plVar11;
          if ((long *)*s_animalCollisionMap != (long *)0x0) {
            plVar11 = *pplVar20;
            s_animalCollisionMap = (long *)*s_animalCollisionMap;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)plVar11);
          DAT_01052b20 = DAT_01052b20 + 1;
        }
LAB_006ff404:
        uVar9 = uVar9 + 1;
        uVar18 = *(int *)(this + 0x5c) + 1;
        *(uint *)(this + 0x5c) = uVar18;
      } while (uVar9 < *(uint *)(this + 0x60));
    }
    goto LAB_006ff554;
  }
  EngineManager::getInstance();
  lVar8 = Renderer::getCamera();
  if (lVar8 == 0) {
    bVar6 = true;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    local_88 = *(undefined8 *)(lVar8 + 0xe8);
    local_80 = *(undefined4 *)(lVar8 + 0xf0);
    BoundingSphere::BoundingSphere(aBStack_a8,(Vector3 *)&local_88,85.0);
                    /* try { // try from 006ff1c4 to 006ff1cf has its CatchHandler @ 006ff5f8 */
    uVar9 = BoundingAxisAlignedBox::intersects
                      ((BoundingAxisAlignedBox *)(this + 0x1f770),(BoundingVolume *)aBStack_a8);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 006ff1d4 to 006ff1f3 has its CatchHandler @ 006ff5f4 */
      BoundingSphere::assign(aBStack_a8,(Vector3 *)&local_88,150.0);
      uVar9 = BoundingAxisAlignedBox::intersects
                        ((BoundingAxisAlignedBox *)(this + 0x1f770),(BoundingVolume *)aBStack_a8);
      if ((uVar9 & 1) != 0) goto LAB_006ff1f8;
      fVar21 = *(float *)(this + 0x1fd1c);
      *(float *)(this + 0x1fd1c) = fVar21 - param_1;
      if (0.0 <= fVar21 - param_1) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
        *(undefined4 *)(this + 0x1fd1c) = 0x42c80000;
      }
    }
    else {
LAB_006ff1f8:
      bVar6 = false;
    }
    BoundingSphere::~BoundingSphere(aBStack_a8);
  }
  if (*(int *)(this + 0x5c) != 0) {
    uVar9 = 0;
    do {
      Animal::update(*(Animal **)(this + uVar9 * 8 + 0x1f568),param_1,bVar6);
      if (((!bVar6) && (*(float *)(this + 0x1f6f8) <= 7.92e+07)) &&
         (1.8e+07 <= *(float *)(this + 0x1f6f8))) {
        lVar8 = *(long *)(this + uVar9 * 8 + 0x1f568);
        fVar21 = *(float *)(lVar8 + 0x198) - param_1;
        *(float *)(lVar8 + 0x198) = fVar21;
        if (fVar21 < 0.0) {
          uVar18 = *(uint *)(lVar8 + 0x19c);
          uVar22 = NEON_ucvtf(*(undefined4 *)(this + 0x5c));
          fVar21 = (float)NEON_fmadd(*(undefined4 *)(this + (ulong)uVar18 * 0x3ea0 + 0x3ec8),uVar22,
                                     0x3f800000);
          uVar22 = MathUtil::getRandomMinMax
                             (*(float *)(this + (ulong)uVar18 * 0x3ea0 + 0x3ec0) * fVar21,
                              *(float *)(this + (ulong)uVar18 * 0x3ea0 + 0x3ec4) * fVar21);
          lVar8 = *(long *)(this + uVar9 * 8 + 0x1f568);
          *(undefined4 *)(lVar8 + 0x198) = uVar22;
          AnimalSoundSystem::playSound
                    ((AnimalSoundSystem *)(this + 0x1fcb0),
                     *(uint *)(this + (ulong)uVar18 * 0x3ea0 + 0x3ecc),(Vector3 *)(lVar8 + 8),false)
          ;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(this + 0x5c));
  }
  AnimalSoundSystem::update(param_1);
  *(undefined4 *)(this + 0x1fbd8) = 0;
LAB_006ff554:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


