// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAnimal
// Entry Point: 006fd170
// Size: 816 bytes
// Signature: undefined __thiscall addAnimal(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::addAnimal(unsigned int) */

uint __thiscall AnimalHusbandry::addAnimal(AnimalHusbandry *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long **pplVar5;
  int iVar6;
  AudioSource *pAVar7;
  Animal *this_00;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long **pplVar12;
  long **pplVar13;
  
  uVar11 = (ulong)param_1;
  if (*(uint *)(this + 0x54) <= param_1) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 006fd420 to 006fd42b has its CatchHandler @ 006fd4a8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: invalid animal subtype %u.\n",uVar11);
    uVar11 = 0;
  }
  if (this[0x50] == (AnimalHusbandry)0x0) {
    return 0;
  }
  if (this[0x51] == (AnimalHusbandry)0x0) {
    uVar2 = *(uint *)(this + 0x60);
    if (uVar2 < 0x19) {
      uVar1 = *(int *)(this + 0x58) + 1;
      *(uint *)(this + 0x60) = uVar2 + 1;
      *(uint *)(this + 0x58) = uVar1;
      *(uint *)(this + (ulong)uVar2 * 8 + 0x1f630) = (uint)uVar11;
      *(uint *)(this + (ulong)uVar2 * 8 + 0x1f634) = uVar1;
      return uVar1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 == 0))
    goto LAB_006fd350;
                    /* try { // try from 006fd468 to 006fd473 has its CatchHandler @ 006fd4a0 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
  }
  else {
    uVar2 = *(uint *)(this + 0x5c);
    if (uVar2 < 0x19) {
      uVar1 = *(int *)(this + 0x58) + 1;
      uVar3 = *(uint *)((AnimalSource *)(this + 0x68) + uVar11 * 0x3ea0 + 0x3e68);
      *(uint *)(this + 0x58) = uVar1;
      pAVar7 = (AudioSource *)
               AnimalSoundSystem::createSoundInstance((AnimalSoundSystem *)(this + 0x1fcb0),uVar3);
      this_00 = (Animal *)operator_new(0x700);
      uVar3 = *(uint *)(this + 0x38);
      *(uint *)(this + 0x38) = uVar3 + 1;
                    /* try { // try from 006fd24c to 006fd267 has its CatchHandler @ 006fd4c0 */
      Animal::Animal(this_00,(uint)uVar11,uVar1,(AnimalSharedContext *)(this + 0x1f6f8),
                     (AnimalSource *)(this + 0x68),*(TransformGroup **)(this + 0x48),pAVar7,
                     *(uint *)(this + 0x1fd14),uVar3,(bool)this[0x52]);
      lVar10 = *(long *)(this_00 + 0x6a0);
      *(Animal **)(this + (ulong)uVar2 * 8 + 0x1f568) = this_00;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(lVar10 + 0x18);
        pplVar12 = &DAT_01052b18;
        pplVar13 = pplVar12;
        if (DAT_01052b18 != (long *)0x0) {
          pplVar5 = (long **)DAT_01052b18;
          pplVar12 = &DAT_01052b18;
          do {
            while (pplVar13 = pplVar5, uVar2 < *(uint *)((long)pplVar13 + 0x1c)) {
              pplVar5 = (long **)*pplVar13;
              pplVar12 = pplVar13;
              if ((long **)*pplVar13 == (long **)0x0) {
                plVar9 = *pplVar13;
                goto joined_r0x006fd38c;
              }
            }
            if (uVar2 <= *(uint *)((long)pplVar13 + 0x1c)) break;
            pplVar12 = pplVar13 + 1;
            pplVar5 = (long **)*pplVar12;
          } while (*pplVar12 != (long *)0x0);
          plVar9 = *pplVar12;
joined_r0x006fd38c:
          if (plVar9 != (long *)0x0) goto LAB_006fd3e4;
        }
        uVar4 = *(undefined4 *)(this + 0x18);
        plVar8 = (long *)operator_new(0x28);
        plVar8[4] = CONCAT44(uVar1,uVar4);
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = (long)pplVar13;
        *pplVar12 = plVar8;
        plVar9 = s_animalCollisionMap;
        *(uint *)((long)plVar8 + 0x1c) = uVar2;
        if ((long *)*plVar9 != (long *)0x0) {
          plVar8 = *pplVar12;
          s_animalCollisionMap = (long *)*plVar9;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)DAT_01052b18,(__tree_node_base *)plVar8);
        DAT_01052b20 = DAT_01052b20 + 1;
      }
LAB_006fd3e4:
      *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
      return uVar1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 == 0))
    goto LAB_006fd350;
                    /* try { // try from 006fd330 to 006fd33b has its CatchHandler @ 006fd4a4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
  }
  __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
               &PTR_LOOP_00fd8de0);
  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_006fd350:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: max animal reached \'%d\'.\n",0x19);
  return 0;
}


