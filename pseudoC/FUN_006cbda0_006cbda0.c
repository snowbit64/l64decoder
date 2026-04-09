// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cbda0
// Entry Point: 006cbda0
// Size: 212 bytes
// Signature: undefined FUN_006cbda0(void)


void FUN_006cbda0(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  EngineManager *pEVar6;
  byte *pbVar7;
  float local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (1 < (ulong)((param_1[1] - *param_1 >> 3) * -0x5555555555555555)) {
    local_3c = 0.0;
    pEVar6 = (EngineManager *)EngineManager::getInstance();
    EngineManager::getFrameLimiter(pEVar6,&local_3c);
    pEVar6 = (EngineManager *)EngineManager::getInstance();
    bVar4 = false;
    pbVar7 = (byte *)(*param_1 + 0x18);
    bVar2 = *pbVar7;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(*param_1 + 0x20);
    }
    if (uVar1 == 4) {
                    /* try { // try from 006cbe20 to 006cbe37 has its CatchHandler @ 006cbe74 */
      iVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar4 = iVar5 == 0;
    }
    EngineManager::setFrameLimiter(pEVar6,bVar4,local_3c);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


