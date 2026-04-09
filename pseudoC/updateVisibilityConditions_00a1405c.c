// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVisibilityConditions
// Entry Point: 00a1405c
// Size: 196 bytes
// Signature: undefined updateVisibilityConditions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VisibilityConditionManager::updateVisibilityConditions() */

void VisibilityConditionManager::updateVisibilityConditions(void)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined8 *in_x0;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  EnvironmentSettings *this;
  long **pplVar7;
  
  lVar4 = EngineManager::getInstance();
  this = *(EnvironmentSettings **)(lVar4 + 0x2e8);
  iVar1 = *(int *)(this + 0xc);
  if (*(int *)(in_x0 + 8) != iVar1) {
    *(int *)(in_x0 + 8) = iVar1;
    Mutex::enterCriticalSection();
    pplVar7 = (long **)*in_x0;
    while (pplVar7 != (long **)(in_x0 + 1)) {
      bVar3 = EnvironmentSettings::isElementAllowed
                        (this,(VisibilityConditionDesc *)((long)pplVar7 + 0x3c));
      *(byte *)((long)pplVar7 + 0x5c) = bVar3 & 1;
      pplVar5 = (long **)pplVar7[1];
      if ((long **)pplVar7[1] == (long **)0x0) {
        pplVar5 = pplVar7 + 2;
        bVar2 = (long **)**pplVar5 != pplVar7;
        pplVar7 = (long **)*pplVar5;
        if (bVar2) {
          do {
            plVar6 = *pplVar5;
            pplVar5 = (long **)(plVar6 + 2);
            pplVar7 = (long **)*pplVar5;
          } while (*pplVar7 != plVar6);
        }
      }
      else {
        do {
          pplVar7 = pplVar5;
          pplVar5 = (long **)*pplVar7;
        } while (*pplVar7 != (long *)0x0);
      }
    }
                    /* try { // try from 00a14108 to 00a1410f has its CatchHandler @ 00a14120 */
    Mutex::leaveCriticalSection();
  }
  return;
}


