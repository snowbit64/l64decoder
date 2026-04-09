// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00be6528
// Size: 336 bytes
// Signature: undefined initialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGeneratorManager::initialize() */

undefined8 SecureRandomGeneratorManager::initialize(void)

{
  long lVar1;
  undefined4 uVar2;
  SecureRandomGeneratorManager *in_x0;
  ulonglong uVar3;
  int iVar4;
  long *plVar5;
  undefined4 local_68 [2];
  double local_60;
  double dStack_58;
  undefined4 local_50;
  __pid_t local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar4 = *(int *)(in_x0 + 0x1bf8);
  if (iVar4 == 0) {
    *(undefined4 *)(in_x0 + 0x1c04) = 0;
    *(undefined8 *)(in_x0 + 0x1bfc) = 0;
    *(undefined8 *)(in_x0 + 0x54) = 0;
    uVar2 = __open_2("/dev/urandom",0);
    *(undefined4 *)(in_x0 + 0x50) = uVar2;
    uVar2 = Watch::getCurrentTicks();
    if (-1 < *(int *)(in_x0 + 0x50)) {
      ::read(*(int *)(in_x0 + 0x50),(void *)((ulong)local_68 | 4),0x20);
    }
    local_44 = getpid();
    local_68[0] = uVar2;
    local_40 = Watch::getCurrentTicks();
    plVar5 = (long *)(in_x0 + 0xf8);
    (**(code **)(*plVar5 + 0x28))(plVar5,local_68,0x2c);
    pollSlowEntropySources(in_x0,0);
    uVar2 = Watch::getCurrentTicks();
    uVar3 = Watch::getCurrentTicks();
    local_60 = (double)Watch::convertTicksToMs(uVar3);
    dStack_58 = local_60 - DAT_0211f0a8;
    DAT_0211f0a8 = local_60;
    local_68[0] = uVar2;
    local_50 = Watch::getCurrentTicks();
    Mutex::enterCriticalSection();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_68,0x20);
    Mutex::leaveCriticalSection();
    reseed();
    iVar4 = *(int *)(in_x0 + 0x1bf8);
  }
  *(int *)(in_x0 + 0x1bf8) = iVar4 + 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


