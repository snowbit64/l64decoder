// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 008af548
// Size: 1088 bytes
// Signature: undefined __cdecl write(Mode param_1, GranularSynthesisRuntimeSettings * param_2, GranularSynthesisRuntimeSettings * param_3, SteadyLoopRuntimeSettings * param_4, StaticSoundRuntimeSettings * param_5, StaticSoundRuntimeSettings * param_6, LoadSimulationRuntimeSettings * param_7, FadeRuntimeSettings * param_8, SteadyLoopRuntimeSettings * param_9, LoadSimulationRuntimeSettings * param_10, basic_string * param_11)


/* LoopSynthesisBinaryUtil::write(LoopSynthesisRuntimeSettings::Mode,
   GranularSynthesisRuntimeSettings const&, GranularSynthesisRuntimeSettings const&,
   SteadyLoopRuntimeSettings const&, StaticSoundRuntimeSettings const&, StaticSoundRuntimeSettings
   const&, LoadSimulationRuntimeSettings const&, LoopSynthesisRuntimeSettings::FadeRuntimeSettings
   const&, SteadyLoopRuntimeSettings const&, LoadSimulationRuntimeSettings const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined4
LoopSynthesisBinaryUtil::write
          (Mode param_1,GranularSynthesisRuntimeSettings *param_2,
          GranularSynthesisRuntimeSettings *param_3,SteadyLoopRuntimeSettings *param_4,
          StaticSoundRuntimeSettings *param_5,StaticSoundRuntimeSettings *param_6,
          LoadSimulationRuntimeSettings *param_7,FadeRuntimeSettings *param_8,
          SteadyLoopRuntimeSettings *param_9,LoadSimulationRuntimeSettings *param_10,
          basic_string *param_11)

{
  char *pcVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  FILE *__stream;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 local_200;
  Mode local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  long local_1b0;
  int aiStack_1a8 [28];
  FILE *local_138;
  undefined4 local_118;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_108[0] = (undefined **)0xfdd660;
  local_1c8 = (undefined **)0xfdd638;
  local_1c0 = 0;
  local_1b8 = &PTR__basic_fstream_00fdd520;
                    /* try { // try from 008af5c4 to 008af5cf has its CatchHandler @ 008af9c8 */
  std::__ndk1::ios_base::init(local_108);
  local_108[0] = &PTR__basic_fstream_00fdd548;
  local_1c8 = &PTR__basic_fstream_00fdd4f8;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_1b8 = &PTR__basic_fstream_00fdd520;
                    /* try { // try from 008af5f4 to 008af5fb has its CatchHandler @ 008af9ac */
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if (local_138 == (FILE *)0x0) {
    pcVar1 = (char *)((long)param_11 + 1);
    if ((*(byte *)param_11 & 1) != 0) {
      pcVar1 = *(char **)(param_11 + 4);
    }
    local_138 = fopen(pcVar1,"wbe");
    if (local_138 == (FILE *)0x0) goto LAB_008af60c;
    local_118 = 0x14;
    uVar6 = (int)&local_1c8 + (int)local_1c8[-3];
  }
  else {
LAB_008af60c:
    uVar6 = (int)&local_1c8 + (int)local_1c8[-3];
  }
                    /* try { // try from 008af668 to 008af6bf has its CatchHandler @ 008af9dc */
  std::__ndk1::ios_base::clear(uVar6);
  if ((local_138 == (FILE *)0x0) || (*(int *)((long)aiStack_1a8 + (long)local_1c8[-3]) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 008af94c to 008af957 has its CatchHandler @ 008af988 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar1 = (char *)((long)param_11 + 1);
    if ((*(byte *)param_11 & 1) != 0) {
      pcVar1 = *(char **)(param_11 + 4);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "exportData: Error in export file %s.\n",pcVar1);
    uVar10 = 0;
    goto LAB_008af8cc;
  }
  local_1d0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_200 = 0xf676c7320;
  uStack_1f4 = 0xac44;
  if (param_1 == 1) {
    puVar2 = *(uint **)(param_2 + 0x30);
    uStack_1e8 = *(undefined8 *)(param_2 + 8);
    lVar9 = *(long *)(param_2 + 0x38) - (long)puVar2 >> 4;
    if (*(long *)(param_2 + 0x38) - (long)puVar2 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = *puVar2;
      uVar7 = puVar2[lVar9 * 4 + -3];
    }
    puVar2 = *(uint **)(param_3 + 0x30);
    iVar8 = 0;
    if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
      iVar8 = (uVar7 - uVar6) + 1;
    }
    uVar3 = *(long *)(param_3 + 0x38) - (long)puVar2;
    local_1f0 = CONCAT44(iVar8,(int)lVar9);
    if (uVar3 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = *puVar2;
      uVar7 = puVar2[((long)uVar3 >> 4) * 4 + -3];
    }
    local_1d8 = *(undefined8 *)(param_3 + 8);
    iVar8 = 0;
    if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
      iVar8 = (uVar7 - uVar6) + 1;
    }
    bVar5 = false;
    local_1e0 = CONCAT44(iVar8,(int)(uVar3 >> 4));
  }
  else if (param_1 == 2) {
    bVar5 = true;
    local_1d0 = (int)((ulong)(*(long *)(param_4 + 8) - *(long *)param_4) >> 3) * 0x38e38e39;
  }
  else {
    bVar5 = false;
  }
  local_1cc = (int)((ulong)(*(long *)(param_9 + 8) - *(long *)param_9) >> 3) * 0x38e38e39;
                    /* try { // try from 008af7d4 to 008af85f has its CatchHandler @ 008af9e0 */
  local_1f8 = param_1;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)&local_1b8,(long)&local_200);
  if (param_1 == 1) {
    GranularSynthesisRuntimeSettings::writeGls(param_2,(basic_fstream *)&local_1c8);
    GranularSynthesisRuntimeSettings::writeGls(param_3,(basic_fstream *)&local_1c8);
  }
  if (bVar5) {
    SteadyLoopRuntimeSettings::writeGls(param_4,(basic_fstream *)&local_1c8);
  }
  StaticSoundRuntimeSettings::writeGls(param_5,(basic_fstream *)&local_1c8);
  StaticSoundRuntimeSettings::writeGls(param_6,(basic_fstream *)&local_1c8);
  LoadSimulationRuntimeSettings::writeGls(param_7,(basic_fstream *)&local_1c8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)&local_1b8,(long)param_8);
  SteadyLoopRuntimeSettings::writeGls(param_9,(basic_fstream *)&local_1c8);
  LoadSimulationRuntimeSettings::writeGls(param_10,(basic_fstream *)&local_1c8);
  __stream = local_138;
  if (local_138 == (FILE *)0x0) {
LAB_008af8ac:
    std::__ndk1::ios_base::clear((int)&local_1c8 + (int)local_1c8[-3]);
  }
  else {
                    /* try { // try from 008af870 to 008af877 has its CatchHandler @ 008af99c */
    uVar6 = (**(code **)(local_1b0 + 0x30))(&local_1b0);
    uVar7 = fclose(__stream);
    local_138 = (FILE *)0x0;
                    /* try { // try from 008af894 to 008af8c7 has its CatchHandler @ 008af9e0 */
    (**(code **)(local_1b0 + 0x18))(&local_1b0,0,0);
    if ((uVar7 | uVar6) != 0) goto LAB_008af8ac;
  }
  uVar10 = 1;
LAB_008af8cc:
  local_108[0] = &PTR__basic_fstream_00fdd548;
  local_1c8 = &PTR__basic_fstream_00fdd4f8;
  local_1b8 = &PTR__basic_fstream_00fdd520;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)&local_1b0);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_1c8);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


