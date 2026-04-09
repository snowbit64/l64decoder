// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006e0450
// Size: 1720 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* AudioStats::render(SharedRenderArgs const&, unsigned int) */

void AudioStats::render(SharedRenderArgs *param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  basic_ostream *pbVar5;
  ulong uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  FontOverlayRenderer *pFVar10;
  float fVar11;
  long **local_3d8;
  long **local_3d0;
  undefined8 local_3c8;
  undefined **local_3c0;
  undefined **local_3b8 [8];
  ulong local_378;
  undefined8 uStack_370;
  void *local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined **local_350 [17];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined **local_2b8;
  undefined **local_2b0 [8];
  ulong local_270;
  undefined8 uStack_268;
  void *local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined **local_248 [17];
  undefined8 local_1c0;
  undefined4 local_1b8;
  byte local_1b0 [16];
  char *local_1a0;
  char acStack_b0 [64];
  long local_70;
  
  uVar9 = (ulong)param_2;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  AudioDeviceManager::getInstance();
  plVar4 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  local_2b8 = (undefined **)0xfd8f40;
  local_248[0] = (undefined **)0xfd8f68;
                    /* try { // try from 006e04b0 to 006e04bb has its CatchHandler @ 006e0b74 */
  std::__ndk1::ios_base::init(local_248);
  local_1c0 = 0;
  local_1b8 = 0xffffffff;
  local_2b8 = &PTR__basic_ostringstream_00fd8ed0;
  local_248[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006e04e0 to 006e04e7 has its CatchHandler @ 006e0b58 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_250 = 0x10;
  uStack_268 = 0;
  local_270 = 0;
  local_2b0[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_258 = 0;
  local_260 = (void *)0x0;
                    /* try { // try from 006e050c to 006e06ef has its CatchHandler @ 006e0b94 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_2b8,"Audio Stats\n\n",0xd);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,"Sources ",8);
  uVar3 = (**(code **)(*plVar4 + 200))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," Max ",5);
  uVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,"Active Sources ",0xf);
  uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," Max ",5);
  uVar3 = (**(code **)(*plVar4 + 0xe0))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,"Buffers ",8);
  uVar3 = (**(code **)(*plVar4 + 0xe8))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," Max ",5);
  uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,"Streamed Buffers ",0x11);
  uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," Max ",5);
  uVar3 = (**(code **)(*plVar4 + 0x100))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
                    /* try { // try from 006e06f8 to 006e0817 has its CatchHandler @ 006e0b8c */
  uVar6 = (**(code **)(*plVar4 + 0x108))(plVar4);
  FUN_006dcb40((double)((float)(uVar6 & 0xffffffff) * 9.536743e-07),acStack_b0,0x40,"%7.2f");
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,"Buffer memory ",0xe);
  sVar7 = strlen(acStack_b0);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,acStack_b0,sVar7);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," MB max: ",9);
  uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
  FUN_006dcb40((double)((float)(uVar6 & 0xffffffff) * 9.536743e-07),acStack_b0,0x40,"%7.2f");
  sVar7 = strlen(acStack_b0);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,acStack_b0,sVar7);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," MB",3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_2b8,"Mixer us/s ",0xb);
  fVar11 = (float)(**(code **)(*plVar4 + 0x118))(plVar4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,fVar11);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  local_3c0 = (undefined **)0xfd8f40;
  local_350[0] = (undefined **)0xfd8f68;
                    /* try { // try from 006e0834 to 006e083f has its CatchHandler @ 006e0b48 */
  std::__ndk1::ios_base::init(local_350);
  local_3c0 = &PTR__basic_ostringstream_00fd8ed0;
  local_350[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_2c8 = 0;
  local_2c0 = 0xffffffff;
                    /* try { // try from 006e085c to 006e0863 has its CatchHandler @ 006e0b2c */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_3b8[0] = &PTR__basic_stringbuf_00fd8fa0;
  local_3d8 = (long **)0x0;
  local_3d0 = (long **)0x0;
  local_3c8 = 0;
  local_358 = 0x10;
  uStack_370 = 0;
  local_378 = 0;
  uStack_360 = 0;
  local_368 = (void *)0x0;
                    /* try { // try from 006e0890 to 006e089b has its CatchHandler @ 006e0b88 */
  (**(code **)(*plVar4 + 0x1c0))(plVar4,&local_3d8);
  if (local_3d0 != local_3d8) {
    uVar6 = 0;
    do {
                    /* try { // try from 006e08dc to 006e094b has its CatchHandler @ 006e0b9c */
      if ((uVar6 == 0) &&
         (uVar8 = (**(code **)(**local_3d8 + 0xa0))(*local_3d8,local_1b0), (uVar8 & 1) != 0)) {
        sVar7 = strlen((char *)local_1b0);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_3c0,(char *)local_1b0,sVar7);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
      }
      uVar8 = (**(code **)(*local_3d8[uVar6] + 0xa8))(local_3d8[uVar6],local_1b0);
      if ((uVar8 & 1) != 0) {
        sVar7 = strlen((char *)local_1b0);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_3c0,(char *)local_1b0,sVar7);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)((long)local_3d0 - (long)local_3d8 >> 3));
  }
                    /* try { // try from 006e0954 to 006e0973 has its CatchHandler @ 006e0b88 */
  FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(uVar9 + 8),false);
  FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(uVar9 + 8),1.0,1.0,1.0,1.0);
  pFVar10 = *(FontOverlayRenderer **)(uVar9 + 8);
                    /* try { // try from 006e0978 to 006e0987 has its CatchHandler @ 006e0b28 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar1 = (char *)((ulong)local_1b0 | 1);
  if ((local_1b0[0] & 1) != 0) {
    pcVar1 = local_1a0;
  }
                    /* try { // try from 006e099c to 006e09cb has its CatchHandler @ 006e0b10 */
  FontOverlayRenderer::xyprintf(pFVar10,0.03,0.94,0.02,0,pcVar1);
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  pFVar10 = *(FontOverlayRenderer **)(uVar9 + 8);
                    /* try { // try from 006e09e0 to 006e09ef has its CatchHandler @ 006e0b0c */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar1 = (char *)((ulong)local_1b0 | 1);
  if ((local_1b0[0] & 1) != 0) {
    pcVar1 = local_1a0;
  }
                    /* try { // try from 006e0a04 to 006e0a33 has its CatchHandler @ 006e0b08 */
  FontOverlayRenderer::xyprintf(pFVar10,0.3,0.94,0.02,1,pcVar1);
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (local_3d8 != (long **)0x0) {
    local_3d0 = local_3d8;
    operator_delete(local_3d8);
  }
  local_3c0 = &PTR__basic_ostringstream_00fd8ed0;
  local_3b8[0] = &PTR__basic_stringbuf_00fd8fa0;
  local_350[0] = &PTR__basic_ostringstream_00fd8ef8;
  if ((local_378 & 1) != 0) {
    operator_delete(local_368);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_3b8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_3c0);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_350);
  local_2b8 = &PTR__basic_ostringstream_00fd8ed0;
  local_2b0[0] = &PTR__basic_stringbuf_00fd8fa0;
  local_248[0] = &PTR__basic_ostringstream_00fd8ef8;
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_2b0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_2b8);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_248);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


