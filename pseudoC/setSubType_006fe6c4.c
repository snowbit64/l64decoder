// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSubType
// Entry Point: 006fe6c4
// Size: 1120 bytes
// Signature: undefined __thiscall setSubType(AnimalHusbandry * this, uint param_1, uint param_2)


/* AnimalHusbandry::setSubType(unsigned int, unsigned int) */

void __thiscall AnimalHusbandry::setSubType(AnimalHusbandry *this,uint param_1,uint param_2)

{
  Animal **ppAVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  AudioSource *pAVar9;
  Animal *pAVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long **pplVar15;
  long lVar16;
  long lVar17;
  long **pplVar18;
  uint *puVar19;
  undefined8 uVar20;
  long **pplVar21;
  long **pplVar22;
  
  lVar6 = tpidr_el0;
  lVar12 = *(long *)(lVar6 + 0x28);
  if (*(uint *)(this + 0x54) <= param_2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 006feae8 to 006feaf3 has its CatchHandler @ 006feb24 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error: Invalid animal sub type %u.\n",(ulong)param_2);
    goto LAB_006fe804;
  }
  if (this[0x50] == (AnimalHusbandry)0x0) goto LAB_006fe804;
  if (this[0x51] == (AnimalHusbandry)0x0) {
    uVar11 = *(uint *)(this + 0x60);
    if (uVar11 != 0) {
      if (*(uint *)(this + 0x1f634) == param_1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar19 = (uint *)(this + 0x1f63c);
        do {
          if ((ulong)uVar11 - 1 == uVar13) goto LAB_006fe804;
          uVar4 = *puVar19;
          uVar13 = uVar13 + 1;
          puVar19 = puVar19 + 2;
        } while (uVar4 != param_1);
        if (uVar11 <= uVar13) goto LAB_006fe804;
      }
      *(uint *)(this + uVar13 * 8 + 0x1f630) = param_2;
    }
    goto LAB_006fe804;
  }
  uVar11 = *(uint *)(this + 0x5c);
  if (uVar11 == 0) goto LAB_006fe804;
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    do {
      if ((ulong)uVar11 - 1 == uVar13) goto LAB_006fe804;
      lVar17 = uVar13 * 8;
      uVar13 = uVar13 + 1;
    } while (*(uint *)(*(long *)(this + lVar17 + 0x1f570) + 0x1a0) != param_1);
    if (uVar11 <= uVar13) goto LAB_006fe804;
    uVar11 = (uint)uVar13;
  }
  pplVar22 = (long **)(this + (uVar13 & 0xffffffff) * 8 + 0x1f568);
  plVar14 = *pplVar22;
  lVar17 = plVar14[1];
  uVar2 = *(undefined4 *)(plVar14 + 2);
  uVar20 = *(undefined8 *)((long)plVar14 + 0x14);
  uVar3 = *(undefined4 *)((long)plVar14 + 0x1c);
  if ((plVar14[0xd4] == 0) || (DAT_01052b18 == (long **)0x0)) {
LAB_006fe930:
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  else {
    uVar4 = *(uint *)(plVar14[0xd4] + 0x18);
    pplVar21 = (long **)&DAT_01052b18;
    pplVar18 = DAT_01052b18;
    do {
      bVar7 = *(uint *)((long)pplVar18 + 0x1c) < uVar4;
      if (!bVar7) {
        pplVar21 = pplVar18;
      }
      pplVar18 = (long **)pplVar18[bVar7];
    } while (pplVar18 != (long **)0x0);
    if (((long ***)pplVar21 != &DAT_01052b18) && (*(uint *)((long)pplVar21 + 0x1c) <= uVar4)) {
      pplVar18 = (long **)pplVar21[1];
      if ((long **)pplVar21[1] == (long **)0x0) {
        pplVar18 = pplVar21 + 2;
        pplVar15 = (long **)*pplVar18;
        if ((long **)*pplVar15 != pplVar21) {
          do {
            plVar14 = *pplVar18;
            pplVar18 = (long **)(plVar14 + 2);
            pplVar15 = (long **)*pplVar18;
          } while (*pplVar15 != plVar14);
        }
      }
      else {
        do {
          pplVar15 = pplVar18;
          pplVar18 = (long **)*pplVar15;
        } while ((long **)*pplVar15 != (long **)0x0);
      }
      if (s_animalCollisionMap == pplVar21) {
        s_animalCollisionMap = pplVar15;
      }
      DAT_01052b20 = DAT_01052b20 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)pplVar21);
      operator_delete(pplVar21);
      plVar14 = *pplVar22;
    }
    if (plVar14 != (long *)0x0) goto LAB_006fe930;
  }
  uVar4 = *(int *)(this + 0x5c) - 1;
  *(uint *)(this + 0x5c) = uVar4;
  if (uVar4 != uVar11) {
    *pplVar22 = *(long **)(this + (ulong)uVar4 * 8 + 0x1f568);
  }
  pAVar9 = (AudioSource *)
           AnimalSoundSystem::createSoundInstance
                     ((AnimalSoundSystem *)(this + 0x1fcb0),
                      *(uint *)((AnimalSource *)(this + 0x68) + (ulong)param_2 * 0x3ea0 + 0x3e68));
  pAVar10 = (Animal *)operator_new(0x700);
  uVar11 = *(uint *)(this + 0x38);
  *(uint *)(this + 0x38) = uVar11 + 1;
                    /* try { // try from 006fe9b4 to 006fe9cf has its CatchHandler @ 006feb3c */
  Animal::Animal(pAVar10,param_2,param_1,(AnimalSharedContext *)(this + 0x1f6f8),
                 (AnimalSource *)(this + 0x68),*(TransformGroup **)(this + 0x48),pAVar9,
                 *(uint *)(this + 0x1fd14),uVar11,(bool)this[0x52]);
  iVar8 = *(int *)(this + 0x5c);
  ppAVar1 = (Animal **)(this + (ulong)uVar4 * 8 + 0x1f568);
  lVar16 = *(long *)(pAVar10 + 0x6a0);
  *ppAVar1 = pAVar10;
  *(int *)(this + 0x5c) = iVar8 + 1;
  if (lVar16 != 0) {
    uVar11 = *(uint *)(lVar16 + 0x18);
    pplVar22 = (long **)&DAT_01052b18;
    pplVar21 = pplVar22;
    if (DAT_01052b18 != (long **)0x0) {
      pplVar18 = DAT_01052b18;
      pplVar22 = (long **)&DAT_01052b18;
      do {
        while (pplVar21 = pplVar18, uVar11 < *(uint *)((long)pplVar21 + 0x1c)) {
          pplVar18 = (long **)*pplVar21;
          pplVar22 = pplVar21;
          if (*pplVar21 == (long *)0x0) goto LAB_006fea50;
        }
        if (uVar11 <= *(uint *)((long)pplVar21 + 0x1c)) break;
        pplVar22 = pplVar21 + 1;
        pplVar18 = (long **)*pplVar22;
      } while (*pplVar22 != (long *)0x0);
    }
LAB_006fea50:
    if (*pplVar22 == (long *)0x0) {
      uVar5 = *(undefined4 *)(this + 0x18);
      plVar14 = (long *)operator_new(0x28);
      *(uint *)((long)plVar14 + 0x1c) = uVar11;
      plVar14[4] = CONCAT44(param_1,uVar5);
      *plVar14 = 0;
      plVar14[1] = 0;
      plVar14[2] = (long)pplVar21;
      *pplVar22 = plVar14;
      if ((long **)*s_animalCollisionMap != (long **)0x0) {
        plVar14 = *pplVar22;
        s_animalCollisionMap = (long **)*s_animalCollisionMap;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)plVar14);
      pAVar10 = *ppAVar1;
      DAT_01052b20 = DAT_01052b20 + 1;
    }
  }
  *(long *)(pAVar10 + 8) = lVar17;
  *(undefined4 *)(pAVar10 + 0x10) = uVar2;
  pAVar10 = *ppAVar1;
  *(undefined8 *)(pAVar10 + 0x14) = uVar20;
  *(undefined4 *)(pAVar10 + 0x1c) = uVar3;
LAB_006fe804:
  if (*(long *)(lVar6 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


