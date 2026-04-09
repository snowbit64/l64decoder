// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pollInvariantSources
// Entry Point: 00be66b0
// Size: 168 bytes
// Signature: undefined __thiscall pollInvariantSources(SecureRandomGeneratorManager * this, int param_1)


/* SecureRandomGeneratorManager::pollInvariantSources(int) */

void __thiscall
SecureRandomGeneratorManager::pollInvariantSources(SecureRandomGeneratorManager *this,int param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_68 [9];
  __pid_t local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = Watch::getCurrentTicks();
  if (-1 < *(int *)(this + 0x50)) {
    ::read(*(int *)(this + 0x50),(void *)((ulong)local_68 | 4),0x20);
  }
  local_44 = getpid();
  local_68[0] = uVar2;
  local_40 = Watch::getCurrentTicks();
  (**(code **)(*(long *)(this + (long)param_1 * 0xd8 + 0xf8) + 0x28))
            (this + (long)param_1 * 0xd8 + 0xf8,local_68,0x2c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


