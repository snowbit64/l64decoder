// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadColorGradingParams
// Entry Point: 00a04cb8
// Size: 336 bytes
// Signature: undefined __thiscall loadColorGradingParams(PostFxParams * this, char * param_1)


/* PostFxParams::loadColorGradingParams(char const*) */

uint __thiscall PostFxParams::loadColorGradingParams(PostFxParams *this,char *param_1)

{
  long lVar1;
  int iVar2;
  PostFxParams *this_00;
  uint uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 uVar6;
  DomXMLFile aDStack_120 [216];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar3 = 1;
    auVar5 = NEON_fmov(0x3f800000,4);
    uVar6 = auVar5._8_8_;
    *(undefined8 *)(this + 0x78) = uVar6;
    uVar4 = auVar5._0_8_;
    *(undefined8 *)(this + 0x70) = uVar4;
    *(undefined8 *)(this + 0x88) = uVar6;
    *(undefined8 *)(this + 0x80) = uVar4;
    *(undefined8 *)(this + 0x98) = uVar6;
    *(undefined8 *)(this + 0x90) = uVar4;
    *(undefined8 *)(this + 0xa8) = uVar6;
    *(undefined8 *)(this + 0xa0) = uVar4;
    *(undefined8 *)(this + 0xb8) = uVar6;
    *(undefined8 *)(this + 0xb0) = uVar4;
    *(undefined8 *)(this + 200) = uVar6;
    *(undefined8 *)(this + 0xc0) = uVar4;
    *(undefined8 *)(this + 0xd8) = uVar6;
    *(undefined8 *)(this + 0xd0) = uVar4;
    *(undefined8 *)(this + 0xe8) = uVar6;
    *(undefined8 *)(this + 0xe0) = uVar4;
    *(undefined8 *)(this + 0x170) = 0x3f028f5c3e3851ec;
    *(undefined8 *)(this + 0xf8) = uVar6;
    *(undefined8 *)(this + 0xf0) = uVar4;
    *(undefined8 *)(this + 0x108) = uVar6;
    *(undefined8 *)(this + 0x100) = uVar4;
    *(undefined8 *)(this + 0x118) = uVar6;
    *(undefined8 *)(this + 0x110) = uVar4;
    *(undefined8 *)(this + 0x128) = uVar6;
    *(undefined8 *)(this + 0x120) = uVar4;
    *(undefined8 *)(this + 0x138) = uVar6;
    *(undefined8 *)(this + 0x130) = uVar4;
    *(undefined8 *)(this + 0x148) = uVar6;
    *(undefined8 *)(this + 0x140) = uVar4;
    *(undefined8 *)(this + 0x158) = uVar6;
    *(undefined8 *)(this + 0x150) = uVar4;
    *(undefined8 *)(this + 0x168) = uVar6;
    *(undefined8 *)(this + 0x160) = uVar4;
  }
  else {
    DomXMLFile::DomXMLFile(aDStack_120);
                    /* try { // try from 00a04cf8 to 00a04d87 has its CatchHandler @ 00a04e1c */
    this_00 = (PostFxParams *)DomXMLFile::loadFromFile(aDStack_120,param_1,true);
    uVar3 = (uint)this_00;
    if (((ulong)this_00 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00a04dcc to 00a04dd7 has its CatchHandler @ 00a04e08 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Cannot proceed file %s\n",param_1);
    }
    else {
      loadColorGrading(this_00,aDStack_120,(ColorGradingCB *)(this + 0x70));
    }
    DomXMLFile::~DomXMLFile(aDStack_120);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


