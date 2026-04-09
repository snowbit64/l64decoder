// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptContactCallback
// Entry Point: 00751b4c
// Size: 808 bytes
// Signature: undefined __thiscall addScriptContactCallback(EngineManager * this, TransformGroup * param_1, float param_2, char * param_3, void * param_4)


/* EngineManager::addScriptContactCallback(TransformGroup*, float, char const*, void*) */

void __thiscall
EngineManager::addScriptContactCallback
          (EngineManager *this,TransformGroup *param_1,float param_2,char *param_3,void *param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  TransformGroup *pTVar7;
  size_t __n;
  long *plVar8;
  LuauScriptSystem *this_00;
  char *pcVar9;
  undefined8 uVar10;
  long **pplVar11;
  void *__dest;
  ulong uVar12;
  long **pplVar13;
  long **pplVar14;
  long *plVar15;
  byte local_a8;
  undefined7 uStack_a7;
  undefined local_a0;
  undefined7 uStack_9f;
  void *local_98;
  void *local_90;
  undefined7 uStack_88;
  undefined local_81;
  undefined7 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar6 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar6 + 8) >> 3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00751de8 to 00751df3 has its CatchHandler @ 00751e78 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    pcVar9 = 
    "Warning (physics): Add contact report callback failed, object %s is not a physics object.\n";
  }
  else {
    ScenegraphPhysicsContextManager::getInstance();
    pTVar7 = (TransformGroup *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueEnableContactReport(pTVar7,SUB81(param_1,0),param_2);
    uVar1 = *(uint *)(param_1 + 0x18);
    __n = strlen(param_3);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_a8 | 1);
      local_a8 = (byte)((int)__n << 1);
      if (__n != 0) goto LAB_00751c34;
    }
    else {
      uVar12 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar12);
      local_a8 = (byte)uVar12 | 1;
      local_a0 = (undefined)__n;
      uStack_9f = (undefined7)(__n >> 8);
      uStack_a7 = (undefined7)(uVar12 >> 8);
      local_98 = __dest;
LAB_00751c34:
      memcpy(__dest,param_3,__n);
    }
    pvVar4 = local_98;
    uStack_80 = uStack_9f;
    local_81 = local_a0;
    uStack_88 = uStack_a7;
    bVar3 = local_a8;
    *(undefined *)((long)__dest + __n) = 0;
    local_98 = (void *)0x0;
    pplVar11 = (long **)(this + 0x90);
    pplVar13 = (long **)*pplVar11;
    local_a8 = 0;
    uStack_a7 = 0;
    local_a0 = 0;
    uStack_9f = 0;
    pplVar14 = pplVar11;
    if (pplVar13 == (long **)0x0) {
LAB_00751cb4:
      plVar15 = *pplVar11;
    }
    else {
      pplVar11 = (long **)(this + 0x90);
      do {
        while (pplVar14 = pplVar13, *(uint *)(pplVar14 + 4) <= uVar1) {
          if (uVar1 <= *(uint *)(pplVar14 + 4)) goto LAB_00751cb4;
          pplVar11 = pplVar14 + 1;
          pplVar13 = (long **)*pplVar11;
          if ((long **)*pplVar11 == (long **)0x0) goto LAB_00751cb4;
        }
        pplVar11 = pplVar14;
        pplVar13 = (long **)*pplVar14;
      } while ((long **)*pplVar14 != (long **)0x0);
      plVar15 = *pplVar14;
    }
    local_90 = param_4;
    if (plVar15 == (long *)0x0) {
                    /* try { // try from 00751cf0 to 00751cfb has its CatchHandler @ 00751e90 */
      plVar8 = (long *)operator_new(0x48);
      uVar10 = CONCAT17(local_81,uStack_88);
      *(uint *)(plVar8 + 4) = uVar1;
      *(byte *)(plVar8 + 5) = bVar3;
      uStack_88 = 0;
      *(undefined8 *)((long)plVar8 + 0x29) = uVar10;
      plVar8[6] = CONCAT71(uStack_80,local_81);
      plVar8[7] = (long)pvVar4;
      local_81 = 0;
      uStack_80 = 0;
      plVar8[8] = (long)param_4;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = (long)pplVar14;
      *pplVar11 = plVar8;
      if (**(long **)(this + 0x88) != 0) {
        *(long *)(this + 0x88) = **(long **)(this + 0x88);
        plVar8 = *pplVar11;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x90),(__tree_node_base *)plVar8);
      *(long *)(this + 0x98) = *(long *)(this + 0x98) + 1;
joined_r0x00751d58:
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    else if ((bVar3 & 1) != 0) {
      operator_delete(pvVar4);
      goto joined_r0x00751d58;
    }
    if (plVar15 == (long *)0x0) goto LAB_00751da4;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00751e38 to 00751e43 has its CatchHandler @ 00751e74 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    pcVar9 = 
    "Warning (physics): Adding duplicate contact report callback for %s. Second addition is ignored.\n"
    ;
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar9,uVar10);
  if (param_4 != (void *)0x0) {
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,param_4);
  }
LAB_00751da4:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


