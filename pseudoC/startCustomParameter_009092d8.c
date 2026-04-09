// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startCustomParameter
// Entry Point: 009092d8
// Size: 372 bytes
// Signature: undefined __cdecl startCustomParameter(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startCustomParameter(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startCustomParameter(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)((long)param_1 + 0x268);
  pcVar3 = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar4 = (char *)ExpatUtil::getAttr("value",param_3);
  if ((((pcVar3 != (char *)0x0) && (pcVar4 != (char *)0x0)) &&
      (*(CustomShader **)(lVar7 + 0xc0) != (CustomShader *)0x0)) &&
     (uVar5 = CustomShader::getParameterIndex
                        (*(CustomShader **)(lVar7 + 0xc0),*(uint *)(lVar7 + 200),pcVar3,&local_5c),
     (uVar5 & 1) != 0)) {
    if (local_5c < 0x14) {
      local_58 = 0;
      uStack_50 = 0;
      lVar6 = StringUtil::atof(pcVar4,(float *)&local_58);
      lVar6 = StringUtil::atof((char *)(lVar6 + 1),(float *)((ulong)&local_58 | 4));
      lVar6 = StringUtil::atof((char *)(lVar6 + 1),(float *)&uStack_50);
      StringUtil::atof((char *)(lVar6 + 1),(float *)((long)&uStack_50 + 4));
      lVar7 = lVar7 + (ulong)local_5c * 0x10;
      *(undefined8 *)(lVar7 + 0x160) = uStack_50;
      *(undefined8 *)(lVar7 + 0x158) = local_58;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00909410 to 0090941b has its CatchHandler @ 0090944c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Too many custom parameters. Maximal %u allowed.\n",0x14);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


