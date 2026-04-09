// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderWindow
// Entry Point: 006d04a0
// Size: 1060 bytes
// Signature: undefined __thiscall createRenderWindow(Application * this, int param_1, int param_2, bool param_3, FULLSCREEN_MODE param_4)


/* Application::createRenderWindow(int, int, bool, RenderWindowDesc::FULLSCREEN_MODE) */

void __thiscall
Application::createRenderWindow
          (Application *this,int param_1,int param_2,bool param_3,FULLSCREEN_MODE param_4)

{
  long lVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  LanguageStringManager *pLVar8;
  ulong uVar9;
  float fVar10;
  Application *pAVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong local_148;
  undefined8 uStack_140;
  char *local_138;
  uint local_12c;
  undefined4 local_128;
  undefined local_124;
  undefined8 local_120;
  byte local_118;
  FULLSCREEN_MODE local_114;
  undefined local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined4 local_fc;
  undefined local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  undefined local_d8;
  ulong local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined4 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined local_98;
  undefined4 local_94;
  undefined local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  local_120 = 0x10000000100;
  local_104 = 0x3c;
  local_128 = 0x20;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_124 = 0;
  local_118 = 0;
  local_114 = 1;
  local_110 = 0;
  local_10c = 0xffffffffffffffff;
  local_100 = 0x101;
  local_fc = 1;
  local_f8 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
                    /* try { // try from 006d0560 to 006d056f has its CatchHandler @ 006d08e0 */
  iVar4 = Properties::getInt(*(Properties **)(this + 0x188),"game.graphic.display.width",0);
                    /* try { // try from 006d0578 to 006d05db has its CatchHandler @ 006d08e8 */
  iVar5 = Properties::getInt(*(Properties **)(this + 0x188),"game.graphic.display.height",0);
  if (param_1 == -1 || param_2 == -1) {
    param_1 = iVar4;
    param_2 = iVar5;
  }
  if ((param_1 < 1) || (param_2 < 1)) {
    lVar7 = EngineManager::getInstance();
    local_120 = *(undefined8 *)(lVar7 + 0x1a0);
    plVar12 = *(long **)(this + 0x170);
    iVar4 = (**(code **)(*plVar12 + 0x68))(plVar12);
    if (iVar4 != 0) {
      iVar5 = 0;
      fVar14 = (float)NEON_ucvtf((undefined4)local_120);
      fVar15 = (float)NEON_ucvtf(local_120._4_4_);
      fVar10 = 3.402823e+38;
      do {
        local_148 = local_148 & 0xffffffff00000000;
        local_12c = 0;
                    /* try { // try from 006d0628 to 006d063b has its CatchHandler @ 006d08ec */
        (**(code **)(*plVar12 + 0x70))(plVar12,iVar5,&local_148,&local_12c);
        fVar13 = (float)NEON_fmadd(ABS(1.0 - ((float)(local_148 & 0xffffffff) /
                                             (float)(ulong)local_12c) / (fVar14 / fVar15)),
                                   0x44fa0000,
                                   ABS((float)(local_148 & 0xffffffff) - fVar14) +
                                   ABS((float)(ulong)local_12c - fVar15));
        if (fVar13 < fVar10) {
          local_120 = CONCAT44(local_12c,(int)local_148);
          fVar10 = fVar13;
        }
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
  }
  else {
    local_120 = CONCAT44(param_2,param_1);
  }
                    /* try { // try from 006d0684 to 006d0693 has its CatchHandler @ 006d08e8 */
  local_118 = Properties::getBoolDefault
                        (*(Properties **)(this + 0x188),"game.graphic.display.hdrOutput",false);
  local_118 = local_118 & 1;
  if (this[0x1e8] != (Application)0x0) {
    local_90 = 0;
  }
  local_128 = 0x20;
  local_b8 = 1;
  if (!param_3) {
                    /* try { // try from 006d06c0 to 006d06d3 has its CatchHandler @ 006d08c4 */
    pcVar6 = (char *)Properties::getString
                               (*(Properties **)(this + 0x188),"game.graphic.display.fullscreenMode"
                                ,"");
    iVar4 = strcasecmp(pcVar6,"exclusive_fullscreen");
    if ((iVar4 == 0) || (iVar4 = strcasecmp(pcVar6,"fullscreen"), iVar4 == 0)) {
      param_4 = 2;
    }
    else {
      iVar4 = strcasecmp(pcVar6,"windowed_fullscreen");
      param_4 = (FULLSCREEN_MODE)(iVar4 == 0);
    }
  }
  local_fc = 1;
  local_114 = param_4;
                    /* try { // try from 006d0728 to 006d0737 has its CatchHandler @ 006d08e8 */
  uVar2 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.graphic.display.vsync",false);
  local_12c = local_12c & 0xffffff00;
  local_100 = CONCAT11(local_100._1_1_,uVar2) & 0xff01;
                    /* try { // try from 006d0748 to 006d079b has its CatchHandler @ 006d08e4 */
  bVar3 = Properties::getBool(*(Properties **)(this + 0x188),"game.graphic.display.vsync#adaptive",
                              (bool *)&local_12c);
  local_100 = CONCAT11((char)local_12c == '\0' | bVar3 & 1,(undefined)local_100);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_b0,(basic_string *)(this + 0x1a8));
  local_124 = 0;
  lVar7 = (**(code **)(**(long **)(this + 0x170) + 0xd8))(*(long **)(this + 0x170),&local_128);
  *(long *)(this + 0x178) = lVar7;
  if (lVar7 == 0) {
    local_148 = 0;
    uStack_140 = 0;
    local_138 = (char *)0x0;
                    /* try { // try from 006d0838 to 006d08bf has its CatchHandler @ 006d08c8 */
    iVar4 = (**(code **)(**(long **)(this + 0x170) + 0x20))();
    if (iVar4 == 8) {
      pLVar8 = (LanguageStringManager *)LanguageStringManager::getInstance();
      LanguageStringManager::getString(pLVar8,1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_148);
    }
    else {
      pLVar8 = (LanguageStringManager *)LanguageStringManager::getInstance();
      LanguageStringManager::getString(pLVar8,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_148);
    }
    pAVar11 = *(Application **)(this + 0x1b8);
    if (((byte)this[0x1a8] & 1) == 0) {
      pAVar11 = this + 0x1a9;
    }
    pcVar6 = (char *)((ulong)&local_148 | 1);
    if ((local_148 & 1) != 0) {
      pcVar6 = local_138;
    }
    uVar9 = SystemDialogUtil::showMessageBoxYesNo((char *)pAVar11,pcVar6,false);
    if ((uVar9 & 1) != 0) {
      WebUtil::openURL("http://farming-simulator.com/gpuDriverDownload.php");
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


