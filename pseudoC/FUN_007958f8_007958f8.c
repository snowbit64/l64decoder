// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007958f8
// Entry Point: 007958f8
// Size: 328 bytes
// Signature: undefined FUN_007958f8(void)


void FUN_007958f8(float *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  long **pplVar4;
  ScriptingTimerListener *this;
  long *plVar5;
  void *pvVar6;
  long **pplVar7;
  long **pplVar8;
  
  if (param_1[10] == 1.121039e-44) {
    pvVar6 = *(void **)(param_1 + 8);
  }
  else {
    pvVar6 = (void *)0x0;
  }
  this = (ScriptingTimerListener *)operator_new(0x30);
                    /* try { // try from 0079593c to 00795943 has its CatchHandler @ 00795a40 */
  ScriptingTimerListener::ScriptingTimerListener(this,*(char **)(param_1 + 4),pvVar6,*param_1);
  fVar3 = ScriptingTimerListener::s_listenersIndex;
  iVar1 = (int)ScriptingTimerListener::s_listenersIndex + 1;
  pplVar7 = &DAT_010531f8;
  pplVar8 = pplVar7;
  if (DAT_010531f8 != (long *)0x0) {
    pplVar4 = (long **)DAT_010531f8;
    pplVar7 = &DAT_010531f8;
LAB_00795984:
    do {
      pplVar8 = pplVar4;
      if ((uint)*(float *)(pplVar8 + 4) <= (uint)ScriptingTimerListener::s_listenersIndex) {
        if ((uint)*(float *)(pplVar8 + 4) < (uint)ScriptingTimerListener::s_listenersIndex) {
          pplVar7 = pplVar8 + 1;
          pplVar4 = (long **)*pplVar7;
          if (*pplVar7 != (long *)0x0) goto LAB_00795984;
        }
        ScriptingTimerListener::s_listenersIndex = (float)iVar1;
        if (*pplVar7 == (long *)0x0) goto LAB_007959d4;
        goto LAB_00795a20;
      }
      pplVar4 = (long **)*pplVar8;
      pplVar7 = pplVar8;
    } while ((long **)*pplVar8 != (long **)0x0);
    ScriptingTimerListener::s_listenersIndex = (float)iVar1;
    if (*pplVar8 != (long *)0x0) goto LAB_00795a20;
  }
LAB_007959d4:
  ScriptingTimerListener::s_listenersIndex = (float)iVar1;
  plVar5 = (long *)operator_new(0x30);
  plVar5[5] = (long)this;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)pplVar8;
  *pplVar7 = plVar5;
  plVar2 = ScriptingTimerListener::s_listeners;
  *(float *)(plVar5 + 4) = fVar3;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar5 = *pplVar7;
    ScriptingTimerListener::s_listeners = (long *)*plVar2;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)DAT_010531f8,(__tree_node_base *)plVar5);
  DAT_01053200 = DAT_01053200 + 1;
LAB_00795a20:
  param_1[0x40] = fVar3;
  param_1[0x42] = 1.401298e-45;
  return;
}


