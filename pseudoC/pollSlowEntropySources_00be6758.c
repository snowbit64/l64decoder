// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pollSlowEntropySources
// Entry Point: 00be6758
// Size: 204 bytes
// Signature: undefined __thiscall pollSlowEntropySources(SecureRandomGeneratorManager * this, int param_1)


/* SecureRandomGeneratorManager::pollSlowEntropySources(int) */

void __thiscall
SecureRandomGeneratorManager::pollSlowEntropySources(SecureRandomGeneratorManager *this,int param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 local_60 [4];
  double local_50;
  double dStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = Watch::getCurrentTicks();
  if (-1 < *(int *)(this + 0x50)) {
    ::read(*(int *)(this + 0x50),(void *)((ulong)local_60 | 4),8);
  }
  uVar3 = Watch::getCurrentTicks();
  local_50 = (double)Watch::convertTicksToMs(uVar3);
  dStack_48 = local_50 - DAT_0211f0a0;
  DAT_0211f0a0 = local_50;
  local_60[0] = uVar2;
  local_40 = Watch::getCurrentTicks();
  Mutex::enterCriticalSection();
  (**(code **)(*(long *)(this + (long)param_1 * 0xd8 + 0xf8) + 0x28))
            (this + (long)param_1 * 0xd8 + 0xf8,local_60,0x28);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


