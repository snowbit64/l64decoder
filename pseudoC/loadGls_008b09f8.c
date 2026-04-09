// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadGls
// Entry Point: 008b09f8
// Size: 604 bytes
// Signature: undefined __thiscall loadGls(SteadyLoopRuntimeSettings * this, uchar * param_1, int param_2, int param_3, uint param_4, uint param_5)


/* SteadyLoopRuntimeSettings::loadGls(unsigned char const*, int, int, unsigned int, unsigned int) */

ulong __thiscall
SteadyLoopRuntimeSettings::loadGls
          (SteadyLoopRuntimeSettings *this,uchar *param_1,int param_2,int param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  void *__dest;
  Logger *this_00;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar14 = (ulong)param_4;
  lVar7 = (long)*(byte **)(this + 8) - *(long *)this >> 3;
  uVar6 = lVar7 * -0x71c71c71c71c71c7;
  if (uVar14 <= uVar6) {
    if (uVar14 <= uVar6 && uVar6 - uVar14 != 0) {
      pbVar8 = (byte *)(*(long *)this + uVar14 * 0x48);
      pbVar12 = *(byte **)(this + 8);
      while (pbVar3 = pbVar12, pbVar3 != pbVar8) {
        pbVar12 = pbVar3 + -0x48;
        if ((*pbVar12 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x38));
        }
      }
      *(byte **)(this + 8) = pbVar8;
    }
  }
  else {
    std::__ndk1::
    vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
    ::__append((vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
                *)this,uVar14 + lVar7 * 0x71c71c71c71c71c7);
  }
  if (param_4 == 0) {
    uVar6 = (ulong)(param_5 < 10) << 3;
  }
  else {
    uVar6 = 0;
    uVar10 = 0;
    bVar4 = true;
    puVar9 = (uint *)(*(long *)this + 0x40);
    do {
      puVar13 = (undefined8 *)param_1;
      if (0xe < param_5) {
        puVar13 = (undefined8 *)((long)param_1 + 4);
        uVar10 = uVar10 + 4;
        puVar9[-7] = *(uint *)param_1;
      }
      uVar11 = uVar10 + 0x18;
      uVar15 = *(uint *)(puVar13 + 1);
      *(undefined8 *)(puVar9 + -10) = *puVar13;
      puVar9[-8] = uVar15;
      uVar15 = *(uint *)((long)puVar13 + 0xc);
      puVar9[-2] = uVar15;
      uVar1 = *(uint *)(puVar13 + 2);
      *puVar9 = uVar1;
      uVar2 = *(uint *)((long)puVar13 + 0x14);
      puVar9[-1] = uVar2;
      if (param_3 < (int)(uVar11 + param_2 + uVar2)) break;
      if (uVar15 == 0) {
        __dest = operator_new__((ulong)uVar1 << 1);
        *(void **)(puVar9 + -4) = __dest;
      }
      else {
        if (uVar15 != 1) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 008b0c14 to 008b0c1b has its CatchHandler @ 008b0c64 */
            this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b0c20 to 008b0c23 has its CatchHandler @ 008b0c54 */
            Logger::Logger(this_00);
            LogManager::getInstance()::singletonLogManager = this_00;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "loadGls:SteadyLoopRuntimeSettings: invalid data format %d\n",
                            (ulong)uVar15);
          uVar10 = uVar10 + 0x20;
          if (9 < param_5) {
            uVar10 = uVar11;
          }
          if (!bVar4) {
            return (ulong)uVar10;
          }
          goto LAB_008b0ba0;
        }
        __dest = operator_new__((ulong)uVar1);
        *(void **)(puVar9 + -6) = __dest;
      }
      memcpy(__dest,puVar13 + 3,(ulong)uVar2);
      uVar6 = uVar6 + 1;
      uVar10 = uVar2 + uVar11;
      bVar4 = uVar6 < uVar14;
      param_1 = (uchar *)((long)(puVar13 + 3) + (ulong)uVar2);
      puVar9 = puVar9 + 0x12;
      uVar11 = uVar10;
    } while (uVar14 != uVar6);
    uVar10 = uVar11 + 8;
    if (9 < param_5) {
      uVar10 = uVar11;
    }
    uVar6 = (ulong)uVar10;
    if (bVar4) {
LAB_008b0ba0:
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}


