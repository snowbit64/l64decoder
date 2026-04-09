// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptWakeUpCallback
// Entry Point: 00751450
// Size: 792 bytes
// Signature: undefined __thiscall addScriptWakeUpCallback(EngineManager * this, TransformGroup * param_1, char * param_2, void * param_3)


/* EngineManager::addScriptWakeUpCallback(TransformGroup*, char const*, void*) */

void __thiscall
EngineManager::addScriptWakeUpCallback
          (EngineManager *this,TransformGroup *param_1,char *param_2,void *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  Bt2ScenegraphPhysicsContext *this_00;
  size_t __n;
  long *plVar7;
  LuauScriptSystem *this_01;
  char *pcVar8;
  undefined8 uVar9;
  long **pplVar10;
  void *__dest;
  ulong uVar11;
  long **pplVar12;
  long **pplVar13;
  long *plVar14;
  byte local_98;
  undefined7 uStack_97;
  undefined local_90;
  undefined7 uStack_8f;
  void *local_88;
  void *pvStack_80;
  undefined7 local_78;
  undefined uStack_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar6 + 8) >> 3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 007516dc to 007516e7 has its CatchHandler @ 0075176c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    pcVar8 = "Warning (physics): Add wake up callback failed, object %s is not a physics object.\n";
  }
  else {
    ScenegraphPhysicsContextManager::getInstance();
    this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueEnableWakeUpReport(this_00,param_1,true);
    uVar1 = *(uint *)(param_1 + 0x18);
    __n = strlen(param_2);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_98 | 1);
      local_98 = (byte)((int)__n << 1);
      if (__n != 0) goto LAB_0075152c;
    }
    else {
      uVar11 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar11);
      local_98 = (byte)uVar11 | 1;
      local_90 = (undefined)__n;
      uStack_8f = (undefined7)(__n >> 8);
      uStack_97 = (undefined7)(uVar11 >> 8);
      local_88 = __dest;
LAB_0075152c:
      memcpy(__dest,param_2,__n);
    }
    pvVar4 = local_88;
    uStack_70 = uStack_8f;
    uStack_71 = local_90;
    local_78 = uStack_97;
    bVar3 = local_98;
    *(undefined *)((long)__dest + __n) = 0;
    local_88 = (void *)0x0;
    pplVar10 = (long **)(this + 0x78);
    pplVar12 = (long **)*pplVar10;
    local_98 = 0;
    uStack_97 = 0;
    local_90 = 0;
    uStack_8f = 0;
    pplVar13 = pplVar10;
    if (pplVar12 == (long **)0x0) {
LAB_007515ac:
      plVar14 = *pplVar10;
    }
    else {
      pplVar10 = (long **)(this + 0x78);
      do {
        while (pplVar13 = pplVar12, *(uint *)(pplVar13 + 4) <= uVar1) {
          if (uVar1 <= *(uint *)(pplVar13 + 4)) goto LAB_007515ac;
          pplVar10 = pplVar13 + 1;
          pplVar12 = (long **)*pplVar10;
          if ((long **)*pplVar10 == (long **)0x0) goto LAB_007515ac;
        }
        pplVar10 = pplVar13;
        pplVar12 = (long **)*pplVar13;
      } while ((long **)*pplVar13 != (long **)0x0);
      plVar14 = *pplVar13;
    }
    pvStack_80 = param_3;
    if (plVar14 == (long *)0x0) {
                    /* try { // try from 007515e8 to 007515f3 has its CatchHandler @ 00751784 */
      plVar7 = (long *)operator_new(0x48);
      uVar9 = CONCAT17(uStack_71,local_78);
      *(uint *)(plVar7 + 4) = uVar1;
      *(byte *)(plVar7 + 5) = bVar3;
      local_78 = 0;
      *(undefined8 *)((long)plVar7 + 0x29) = uVar9;
      plVar7[6] = CONCAT71(uStack_70,uStack_71);
      plVar7[7] = (long)pvVar4;
      uStack_71 = 0;
      uStack_70 = 0;
      plVar7[8] = (long)param_3;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = (long)pplVar13;
      *pplVar10 = plVar7;
      if (**(long **)(this + 0x70) != 0) {
        *(long *)(this + 0x70) = **(long **)(this + 0x70);
        plVar7 = *pplVar10;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x78),(__tree_node_base *)plVar7);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
joined_r0x00751650:
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
    }
    else if ((bVar3 & 1) != 0) {
      operator_delete(pvVar4);
      goto joined_r0x00751650;
    }
    if (plVar14 == (long *)0x0) goto LAB_0075169c;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0075172c to 00751737 has its CatchHandler @ 00751768 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    pcVar8 = 
    "Warning (physics): Adding duplicate wake up callback for %s. Second addition is ignored.\n";
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar8,uVar9);
  if (param_3 != (void *)0x0) {
    ScriptSystemManager::getInstance();
    this_01 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_01,param_3);
  }
LAB_0075169c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


