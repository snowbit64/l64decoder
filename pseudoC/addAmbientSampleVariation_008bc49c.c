// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAmbientSampleVariation
// Entry Point: 008bc49c
// Size: 832 bytes
// Signature: undefined __cdecl addAmbientSampleVariation(uint param_1, char * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, uint param_9, uint param_10, float param_11, float param_12, float param_13, float param_14, float param_15, float param_16, float param_17, float param_18)


/* SoundPlayer::addAmbientSampleVariation(unsigned int, char const*, float, float, float, float,
   float, float, unsigned int, unsigned int, float, float, float, float, float, float, float, float)
    */

void SoundPlayer::addAmbientSampleVariation
               (uint param_1,char *param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,uint param_9,uint param_10,float param_11,float param_12,
               float param_13,float param_14,float param_15,float param_16,float param_17,
               float param_18)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  StaticSample *this;
  uint in_w4;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  long local_c0;
  long lStack_b8;
  undefined local_b0;
  long local_a8;
  
  uVar8 = (ulong)param_1;
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  uVar12 = (ulong)param_2 & 0xffffffff;
  lVar3 = *(long *)(uVar8 + 0x20);
  if ((uint)param_2 < (uint)((int)((ulong)(*(long *)(uVar8 + 0x28) - lVar3) >> 3) * 0x38e38e39)) {
    lVar9 = lVar3 + uVar12 * 0x48;
    pbVar15 = *(byte **)(lVar9 + 0x18);
    ppbVar13 = (byte **)(lVar9 + 0x20);
    *(float *)(lVar9 + 0x14) = *(float *)(lVar9 + 0x14) + param_3;
    pbVar14 = *ppbVar13;
    if ((long)*ppbVar13 - (long)pbVar15 == -0x68) {
      while (pbVar6 = pbVar14, pbVar6 != pbVar15) {
        pbVar14 = pbVar6 + -0x68;
        if ((*pbVar14 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -0x58));
        }
      }
      *ppbVar13 = pbVar15;
    }
    else {
      std::__ndk1::
      vector<SoundPlayer::AmbientSample,std::__ndk1::allocator<SoundPlayer::AmbientSample>>::
      __append((vector<SoundPlayer::AmbientSample,std::__ndk1::allocator<SoundPlayer::AmbientSample>>
                *)(byte **)(lVar9 + 0x18),1);
      pbVar15 = *ppbVar13;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(pbVar15 + -0x68));
    this = (StaticSample *)operator_new(0x98);
                    /* try { // try from 008bc5e0 to 008bc5eb has its CatchHandler @ 008bc804 */
    StaticSample::StaticSample(this,"AmbientSound");
    *(StaticSample **)(pbVar15 + -0x50) = this;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = (void *)0x0;
    uVar10 = *(undefined8 *)(pbVar15 + -0x50);
                    /* try { // try from 008bc608 to 008bc613 has its CatchHandler @ 008bc7fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_d8,(basic_string *)(pbVar15 + -0x68));
    local_c0 = uVar8 + 0x110;
    lStack_b8 = uVar8 + 0x138;
    local_b0 = 0;
                    /* try { // try from 008bc624 to 008bc62b has its CatchHandler @ 008bc7f4 */
    Mutex::enterCriticalSection();
    lVar9 = *(long *)(uVar8 + 0x140);
    lVar4 = *(long *)(uVar8 + 0x148) - lVar9;
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = lVar4 * 0x10 - 1;
    }
    uVar11 = *(long *)(uVar8 + 0x160) + *(long *)(uVar8 + 0x158);
    if (uVar2 == uVar11) {
                    /* try { // try from 008bc650 to 008bc687 has its CatchHandler @ 008bc810 */
      std::__ndk1::
      deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>::
      __add_back_capacity();
      lVar9 = *(long *)(uVar8 + 0x140);
      uVar11 = *(long *)(uVar8 + 0x158) + *(long *)(uVar8 + 0x160);
    }
    puVar1 = (undefined8 *)
             (*(long *)(lVar9 + (uVar11 >> 4 & 0xffffffffffffff8)) + (uVar11 & 0x7f) * 0x20);
    *puVar1 = uVar10;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar1 + 1));
    *(long *)(uVar8 + 0x160) = *(long *)(uVar8 + 0x160) + 1;
                    /* try { // try from 008bc6a0 to 008bc6a7 has its CatchHandler @ 008bc7f0 */
    Mutex::leaveCriticalSection();
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    Event::post();
    Sample::setGroup(*(Sample **)(pbVar15 + -0x50),*(uint *)(lVar3 + uVar12 * 0x48));
    *(float *)(pbVar15 + -0x38) = param_7;
    *(float *)(pbVar15 + -0x34) = param_8;
    *(float *)(pbVar15 + -0x28) = param_11;
    *(float *)(pbVar15 + -0x24) = param_12;
    *(float *)(pbVar15 + -0x30) = (float)(ulong)param_10;
    *(float *)(pbVar15 + -0x2c) = (float)(ulong)in_w4;
    *(float *)(pbVar15 + -0x10) = param_13;
    *(float *)(pbVar15 + -0xc) = param_14;
    *(float *)(pbVar15 + -0x20) = param_15;
    *(float *)(pbVar15 + -0x1c) = param_16;
    *(float *)(pbVar15 + -0x18) = param_17;
    *(float *)(pbVar15 + -0x14) = param_18;
    *(float *)(pbVar15 + -0x48) = param_3;
    *(float *)(pbVar15 + -0x44) = param_4 * 1000.0;
    pbVar15[-8] = 0.0 < param_17 || 0.0 < param_18;
    *(float *)(pbVar15 + -0x40) = param_4 * 1000.0;
    *(float *)(pbVar15 + -0x3c) = param_6;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_2,param_9)
       , iVar7 != 0)) {
                    /* try { // try from 008bc7a0 to 008bc7ab has its CatchHandler @ 008bc7dc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid sample id %u to add ambient sample variation\n",uVar12);
  }
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


