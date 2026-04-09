// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLoopData
// Entry Point: 008b072c
// Size: 648 bytes
// Signature: undefined __thiscall addLoopData(SteadyLoopRuntimeSettings * this, LoopData * param_1)


/* SteadyLoopRuntimeSettings::addLoopData(SteadyLoopRuntimeSettings::LoopData const&) */

void __thiscall
SteadyLoopRuntimeSettings::addLoopData(SteadyLoopRuntimeSettings *this,LoopData *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  Logger *pLVar5;
  basic_string *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  SortByRpmRoot aSStack_80 [8];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pbVar1 = *(basic_string **)(this + 8);
  if (pbVar1 == *(basic_string **)(this + 0x10)) {
    std::__ndk1::
    vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
    ::__push_back_slow_path<SteadyLoopRuntimeSettings::LoopData_const&>
              ((vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
                *)this,param_1);
    pbVar6 = *(basic_string **)(this + 8);
  }
  else {
                    /* try { // try from 008b0770 to 008b077b has its CatchHandler @ 008b09f0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    uVar11 = *(undefined8 *)(param_1 + 0x34);
    pbVar6 = pbVar1 + 0x12;
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(pbVar1 + 0xf) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(pbVar1 + 0xd) = uVar11;
    *(undefined8 *)(pbVar1 + 0xc) = uVar13;
    *(undefined8 *)(pbVar1 + 10) = uVar12;
    *(undefined8 *)(pbVar1 + 8) = uVar15;
    *(undefined8 *)(pbVar1 + 6) = uVar14;
    *(basic_string **)(this + 8) = pbVar6;
  }
  std::__ndk1::
  __sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
            (*(LoopData **)this,(LoopData *)pbVar6,aSStack_80);
  lVar7 = *(long *)this;
  lVar9 = 0x60;
  uVar3 = 0;
  while( true ) {
    uVar8 = uVar3;
    uVar10 = (*(long *)(this + 8) - lVar7 >> 3) * -0x71c71c71c71c71c7 - 1;
    if (uVar10 <= uVar8) goto LAB_008b0928;
    fVar16 = *(float *)(lVar7 + lVar9);
    fVar17 = ((float *)(lVar7 + lVar9))[-0x11];
    if (fVar17 < fVar16) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 008b0898 to 008b08a3 has its CatchHandler @ 008b09d8 */
        pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b08a4 to 008b08ab has its CatchHandler @ 008b09c8 */
        Logger::Logger(pLVar5);
        LogManager::getInstance()::singletonLogManager = pLVar5;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: SteadyLoopRuntimeSettings::addLoopData: invalid RPMs, loops are not crossing. Loop=%d @%d RPM Min > Loop=%d @%d RPM Max\n"
                         ,uVar8 + 1,(int)*(float *)(*(long *)this + lVar9),uVar8 & 0xffffffff,
                         (int)((float *)(*(long *)this + lVar9))[-0x11]);
      lVar7 = *(long *)this;
    }
    if (*(float *)(lVar7 + lVar9 + 4) < *(float *)(lVar7 + lVar9 + -0x40)) break;
    lVar9 = lVar9 + 0x48;
    uVar3 = uVar8 + 1;
    if (fVar17 < fVar16) {
LAB_008b0920:
      reset();
LAB_008b0928:
      if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar10 <= uVar8);
      }
      return;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008b0974 to 008b097b has its CatchHandler @ 008b09c4 */
    pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b0980 to 008b0983 has its CatchHandler @ 008b09b4 */
    Logger::Logger(pLVar5);
    LogManager::getInstance()::singletonLogManager = pLVar5;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: SteadyLoopRuntimeSettings::addLoopData: invalid RPMs. Loop=%d @%d RPM Max< Loop=%d @%d RPM Root\n"
                     ,uVar8 + 1,
                     (int)*(float *)(*(long *)this + (uVar8 + 1 & 0xffffffff) * 0x48 + 0x1c),
                     uVar8 & 0xffffffff,
                     (int)*(float *)(*(long *)this + (uVar8 & 0xffffffff) * 0x48 + 0x20));
  goto LAB_008b0920;
}


