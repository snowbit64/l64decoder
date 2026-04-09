// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reseed
// Entry Point: 00be640c
// Size: 284 bytes
// Signature: undefined reseed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGeneratorManager::reseed() */

void SecureRandomGeneratorManager::reseed(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  long *plVar3;
  int iVar4;
  long lVar5;
  int aiStack_45c [257];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Mutex::enterCriticalSection();
  (**(code **)(*(long *)(in_x0 + 0xf8) + 0x38))((long *)(in_x0 + 0xf8),aiStack_45c);
  lVar5 = 0;
  plVar3 = (long *)(in_x0 + 0x1d0);
  iVar4 = 1;
  do {
    if ((*(uint *)(in_x0 + 0x54) >> (ulong)((uint)lVar5 & 0x1f) & 1) != 0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,(long)aiStack_45c + (ulong)(uint)(iVar4 << 5));
      iVar4 = iVar4 + 1;
    }
    lVar5 = lVar5 + 1;
    plVar3 = plVar3 + 0x1b;
  } while (lVar5 != 0x1f);
  *(int *)(in_x0 + 0x54) = *(int *)(in_x0 + 0x54) + 1;
  Mutex::leaveCriticalSection();
  Mutex::enterCriticalSection();
  iVar1 = *(int *)(in_x0 + 0x58) + 1;
  *(int *)((long)aiStack_45c + (ulong)(uint)(iVar4 << 5)) = iVar1;
  *(int *)(in_x0 + 0x58) = iVar1;
  CryptoPP::RandomPool::IncorporateEntropy((RandomPool *)(in_x0 + 0x60),(uchar *)aiStack_45c,0x404);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


