// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tickEntropySources
// Entry Point: 00be6988
// Size: 284 bytes
// Signature: undefined tickEntropySources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGeneratorManager::tickEntropySources() */

void SecureRandomGeneratorManager::tickEntropySources(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  SecureRandomGeneratorManager *in_x0;
  ulonglong uVar4;
  uint uVar5;
  undefined4 local_58 [2];
  double local_50;
  double dStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(in_x0 + 0x1bf8) != 0) {
    iVar1 = *(int *)(in_x0 + 0x1bfc);
    uVar3 = Watch::getCurrentTicks();
    uVar4 = Watch::getCurrentTicks();
    local_50 = (double)Watch::convertTicksToMs(uVar4);
    dStack_48 = local_50 - DAT_0211f0a8;
    DAT_0211f0a8 = local_50;
    local_58[0] = uVar3;
    local_40 = Watch::getCurrentTicks();
    Mutex::enterCriticalSection();
    (**(code **)(*(long *)(in_x0 + (long)iVar1 * 0xd8 + 0xf8) + 0x28))
              (in_x0 + (long)iVar1 * 0xd8 + 0xf8,local_58,0x20);
    Mutex::leaveCriticalSection();
    uVar5 = *(uint *)(in_x0 + 0x1bfc);
    if ((uVar5 & 3) == 0) {
      pollSlowEntropySources(in_x0,*(int *)(in_x0 + 0x1c00));
      uVar5 = *(uint *)(in_x0 + 0x1bfc);
      if (uVar5 == 0) {
        iVar1 = *(int *)(in_x0 + 0x1c04);
        *(uint *)(in_x0 + 0x1c04) = iVar1 + 1U;
        if (iVar1 + 1U < 0x10) {
          uVar5 = 0;
        }
        else {
          reseed();
          uVar5 = *(uint *)(in_x0 + 0x1bfc);
        }
      }
    }
    *(uint *)(in_x0 + 0x1bfc) = uVar5 + 1 & 0x1f;
    *(uint *)(in_x0 + 0x1c00) = *(int *)(in_x0 + 0x1c00) + 1U & 0x1f;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


