// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptTriggerCallback
// Entry Point: 00750968
// Size: 872 bytes
// Signature: undefined __thiscall addScriptTriggerCallback(EngineManager * this, TransformGroup * param_1, void * param_2, char * param_3, void * param_4, bool param_5)


/* EngineManager::addScriptTriggerCallback(TransformGroup*, void*, char const*, void*, bool) */

void __thiscall
EngineManager::addScriptTriggerCallback
          (EngineManager *this,TransformGroup *param_1,void *param_2,char *param_3,void *param_4,
          bool param_5)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  LuauScriptSystem *pLVar5;
  Bt2PhysicsRBObject *this_00;
  undefined8 *puVar6;
  void *pvVar7;
  uint uVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  ulong uVar12;
  long **pplVar13;
  long **pplVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  int local_a4;
  uint local_a0;
  undefined local_9c [4];
  void *local_98;
  char *local_90;
  void *local_88;
  int *local_80;
  void **ppvStack_78;
  char **local_70;
  void **ppvStack_68;
  undefined *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_9c[0] = param_5;
  local_98 = param_4;
  local_90 = param_3;
  local_88 = param_2;
  ScriptSystemManager::getInstance();
  pLVar5 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  uVar8 = *(uint *)(this_00 + 8);
  if (((uVar8 ^ 0xffffffff) & 0x1008) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00750c4c to 00750c57 has its CatchHandler @ 00750cd4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (physics): Add trigger callback failed, object %s is not a physics trigger.\n"
                      ,*(undefined8 *)(param_1 + 8));
    pvVar7 = local_98;
    if (local_98 != (void *)0x0) {
      ScriptSystemManager::getInstance();
      pLVar5 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar5,pvVar7);
    }
    pvVar7 = local_88;
    if (local_88 != (void *)0x0) {
      ScriptSystemManager::getInstance();
      pLVar5 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
LAB_00750a5c:
      LuauScriptSystem::destroyObjectRef(pLVar5,pvVar7);
    }
LAB_00750a60:
    iVar4 = 0;
    goto LAB_00750b94;
  }
  local_a0 = *(uint *)(param_1 + 0x18);
  pplVar11 = (long **)(ulong)local_a0;
  pplVar10 = *(long ***)(this + 0x50);
  if (pplVar10 == (long **)0x0) {
LAB_00750ae4:
    pplVar9 = (long **)0x0;
  }
  else {
    uVar16 = NEON_cnt(pplVar10,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar12 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar12 < 2) {
      pplVar13 = (long **)(ulong)((int)pplVar10 - 1U & local_a0);
    }
    else {
      pplVar13 = pplVar11;
      if (pplVar10 <= pplVar11) {
        uVar1 = 0;
        if (pplVar10 != (long **)0x0) {
          uVar1 = (ulong)pplVar11 / (ulong)pplVar10;
        }
        pplVar13 = (long **)((long)pplVar11 - uVar1 * (long)pplVar10);
      }
    }
    pplVar9 = *(long ***)(*(long *)(this + 0x48) + (long)pplVar13 * 8);
    if ((pplVar9 != (long **)0x0) && (pplVar9 = (long **)*pplVar9, pplVar9 != (long **)0x0)) {
      do {
        pplVar14 = (long **)pplVar9[1];
        if (pplVar14 == pplVar11) {
          pplVar14 = pplVar9;
          if (*(uint *)(pplVar9 + 2) == local_a0) goto LAB_00750bc4;
        }
        else {
          if (uVar12 < 2) {
            pplVar14 = (long **)((ulong)pplVar14 & (long)pplVar10 - 1U);
          }
          else if (pplVar10 <= pplVar14) {
            uVar1 = 0;
            if (pplVar10 != (long **)0x0) {
              uVar1 = (ulong)pplVar14 / (ulong)pplVar10;
            }
            pplVar14 = (long **)((long)pplVar14 - uVar1 * (long)pplVar10);
          }
          if (pplVar14 != pplVar13) {
            pplVar10 = (long **)0x0;
            goto LAB_00750ae4;
          }
        }
        pplVar9 = (long **)*pplVar9;
      } while (pplVar9 != (long **)0x0);
    }
    pplVar10 = (long **)0x0;
  }
  bVar3 = true;
  goto LAB_00750af4;
  while (pplVar14 = pplVar10, *(uint *)(pplVar10 + 2) == local_a0) {
LAB_00750bc4:
    pplVar10 = (long **)*pplVar14;
    if (pplVar10 == (long **)0x0) break;
  }
  bVar3 = pplVar10 == pplVar9;
  if ((param_2 == (void *)0x0) && (pplVar11 = pplVar9, !bVar3)) {
    do {
      if (pplVar11[7] == (long *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00750c94 to 00750c9f has its CatchHandler @ 00750cd0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (physics): Adding duplicate function name trigger callback for %s. Second addition is ignored.\n"
                          ,*(undefined8 *)(param_1 + 8));
        pvVar7 = local_98;
        if (local_98 != (void *)0x0) goto LAB_00750a5c;
        goto LAB_00750a60;
      }
      pplVar11 = (long **)*pplVar11;
    } while (pplVar11 != pplVar10);
  }
LAB_00750af4:
  if (param_5) {
    if ((uVar8 >> 0xd & 1) == 0) {
      uVar8 = uVar8 | 0x2000;
LAB_00750b24:
      *(uint *)(this_00 + 8) = uVar8;
      Bt2PhysicsRBObject::raiseDirtyFlags(this_00,0x2000);
    }
  }
  else if ((uVar8 >> 0xd & 1) != 0) {
    if (!bVar3) {
      do {
        if (*(char *)((long)pplVar9 + 0x1c) != '\0') goto LAB_00750b30;
        pplVar9 = (long **)*pplVar9;
      } while (pplVar9 != pplVar10);
    }
    uVar8 = uVar8 & 0xffffdfff;
    goto LAB_00750b24;
  }
LAB_00750b30:
  local_a4 = *(int *)(this + 0x40);
  *(int *)(this + 0x40) = local_a4 + 1;
  puVar6 = (undefined8 *)operator_new(0x48);
  local_80 = &local_a4;
  ppvStack_78 = &local_88;
  local_70 = &local_90;
  ppvStack_68 = &local_98;
  local_60 = local_9c;
                    /* try { // try from 00750b70 to 00750b7b has its CatchHandler @ 00750d04 */
  std::__ndk1::pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo>::
  pair<unsigned_int&,unsigned_int&,void*&,char_const*&,void*&,bool&>
            ((pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> *)(puVar6 + 2));
  *puVar6 = 0;
  puVar6[1] = (ulong)*(uint *)(puVar6 + 2);
                    /* try { // try from 00750b84 to 00750b8f has its CatchHandler @ 00750cec */
  FUN_00754c20(this + 0x48,puVar6);
  iVar4 = local_a4;
LAB_00750b94:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


