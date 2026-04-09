// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsMain
// Entry Point: 006e0bd4
// Size: 628 bytes
// Signature: undefined __cdecl gsMain(int param_1, char * * param_2)


/* WARNING: Type propagation algorithm not settling */
/* gsMain(int, char**) */

int gsMain(int param_1,char **param_2)

{
  long lVar1;
  ApplicationMutex *pAVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long *local_140;
  byte local_138;
  void *local_128;
  byte local_120;
  void *local_110;
  byte local_108;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  byte local_d8;
  void *local_c8;
  undefined8 local_70;
  undefined8 local_68;
  ApplicationMutex *local_60;
  int local_54;
  ApplicationMutex aAStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ApplicationMutex::ApplicationMutex(aAStack_50,"FarmingSimulator2023",false);
  plVar3 = s_pCurrentApp;
  s_pCurrentApp = (long *)0x0;
  if (plVar3 == (long *)0x0) {
    uVar4 = globalInit();
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 006e0e04 to 006e0e0b has its CatchHandler @ 006e0e60 */
      AndroidImeUtil::term();
      AndroidSysUtil::term();
      iVar5 = -1;
      goto LAB_006e0e10;
    }
  }
  else {
                    /* try { // try from 006e0c28 to 006e0c37 has its CatchHandler @ 006e0e60 */
    EngineApplication::refreshOnSoftDestroy();
  }
  local_54 = 0;
  local_60 = (ApplicationMutex *)0x0;
                    /* try { // try from 006e0c44 to 006e0c4b has its CatchHandler @ 006e0e48 */
  ApplicationDesc::ApplicationDesc((ApplicationDesc *)&local_140);
  local_70 = 0;
  local_68 = 0xffffffffffffffff;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)initializeApplication
                               (param_1,param_2,(EngineApplicationDesc *)&local_140,&local_60,
                                &local_54);
    if (plVar3 != (long *)0x0) {
      uVar4 = EngineApplication::init();
      if ((uVar4 & 1) != 0) goto LAB_006e0c5c;
      (**(code **)(*plVar3 + 8))(plVar3);
      local_54 = 1;
    }
  }
  else {
LAB_006e0c5c:
                    /* try { // try from 006e0c5c to 006e0cd7 has its CatchHandler @ 006e0e50 */
    EngineApplication::run();
    if (AndroidSysUtil::s_isSoftDestroy != '\0') {
      s_pCurrentApp = plVar3;
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      if ((local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      iVar5 = 0;
      goto LAB_006e0e10;
    }
    (**(code **)(*plVar3 + 8))(plVar3);
    pAVar2 = local_60;
    if (local_60 != (ApplicationMutex *)0x0) {
      ApplicationMutex::~ApplicationMutex(local_60);
      operator_delete(pAVar2);
    }
    local_60 = (ApplicationMutex *)0x0;
    local_54 = 0;
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 8))();
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
                    /* try { // try from 006e0d6c to 006e0d73 has its CatchHandler @ 006e0e4c */
  AndroidImeUtil::term();
  AndroidSysUtil::term();
  iVar5 = local_54;
LAB_006e0e10:
  ApplicationMutex::~ApplicationMutex(aAStack_50);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


