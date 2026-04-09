// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ccf4c
// Entry Point: 006ccf4c
// Size: 700 bytes
// Signature: undefined FUN_006ccf4c(void)


void FUN_006ccf4c(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  Logger *this;
  long lVar10;
  float local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar8 = *param_1;
  if ((ulong)((param_1[1] - lVar8 >> 3) * -0x5555555555555555) < 7) {
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 006cd1c4 to 006cd1cb has its CatchHandler @ 006cd218 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd1d0 to 006cd1d3 has its CatchHandler @ 006cd208 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar1 = "false";
    if (*(char *)(lVar8 + 0x6c) != '\0') {
      pcVar1 = "true";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar8 + 0x3c),(double)*(float *)(lVar8 + 0x40),
                      (double)*(float *)(lVar8 + 0x44),(double)*(float *)(lVar8 + 0x48),
                      (double)*(float *)(lVar8 + 0x4c),"%.3f, %.3f, %.3f, %.3f, %.3f %s\n",pcVar1);
  }
  else {
    pcVar1 = (char *)(lVar8 + 0x19);
    if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar8 + 0x28);
    }
    local_3c = 1.0;
    StringUtil::atof(pcVar1,&local_3c);
    fVar5 = local_3c;
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    lVar10 = *param_1;
    *(float *)(lVar8 + 0x3c) = fVar5;
    local_3c = 1.0;
    pcVar1 = (char *)(lVar10 + 0x31);
    if ((*(byte *)(lVar10 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar10 + 0x40);
    }
    StringUtil::atof(pcVar1,&local_3c);
    fVar5 = local_3c;
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    lVar10 = *param_1;
    *(float *)(lVar8 + 0x40) = fVar5;
    local_3c = 1.0;
    pcVar1 = (char *)(lVar10 + 0x49);
    if ((*(byte *)(lVar10 + 0x48) & 1) != 0) {
      pcVar1 = *(char **)(lVar10 + 0x58);
    }
    StringUtil::atof(pcVar1,&local_3c);
    fVar5 = local_3c;
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    lVar10 = *param_1;
    *(float *)(lVar8 + 0x44) = fVar5;
    local_3c = 1.0;
    pcVar1 = (char *)(lVar10 + 0x61);
    if ((*(byte *)(lVar10 + 0x60) & 1) != 0) {
      pcVar1 = *(char **)(lVar10 + 0x70);
    }
    StringUtil::atof(pcVar1,&local_3c);
    fVar5 = local_3c;
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    lVar10 = *param_1;
    *(float *)(lVar8 + 0x48) = fVar5;
    local_3c = 1.0;
    pcVar1 = (char *)(lVar10 + 0x79);
    if ((*(byte *)(lVar10 + 0x78) & 1) != 0) {
      pcVar1 = *(char **)(lVar10 + 0x88);
    }
    StringUtil::atof(pcVar1,&local_3c);
    fVar5 = local_3c;
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    lVar10 = *param_1;
    *(float *)(lVar8 + 0x4c) = fVar5;
    pbVar9 = (byte *)(lVar10 + 0x90);
    bVar3 = *pbVar9;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(lVar10 + 0x98);
    }
    if (uVar2 == 4) {
                    /* try { // try from 006cd0d0 to 006cd0e7 has its CatchHandler @ 006cd230 */
      iVar7 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar9,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar6 = iVar7 == 0;
    }
    else {
      bVar6 = false;
    }
    EngineManager::getInstance();
    lVar8 = Renderer::getPostFxParams();
    *(bool *)(lVar8 + 0x6c) = bVar6;
  }
  lVar8 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar8 + 0xb8) + 0xf06) = 1;
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


