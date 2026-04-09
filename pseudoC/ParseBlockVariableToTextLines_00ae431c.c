// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseBlockVariableToTextLines
// Entry Point: 00ae431c
// Size: 708 bytes
// Signature: undefined __cdecl ParseBlockVariableToTextLines(char * param_1, bool param_2, SpvReflectBlockVariable * param_3, vector * param_4)


/* ParseBlockVariableToTextLines(char const*, bool, SpvReflectBlockVariable const&,
   std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine> >*) */

void ParseBlockVariableToTextLines
               (char *param_1,bool param_2,SpvReflectBlockVariable *param_3,vector *param_4)

{
  TextLine *pTVar1;
  long lVar2;
  ulong local_320;
  undefined8 uStack_318;
  void *local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
                    /* try { // try from 00ae43a4 to 00ae43cf has its CatchHandler @ 00ae461c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_1c0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_190);
  pTVar1 = *(TextLine **)(param_4 + 8);
  local_158 = *(undefined8 *)(param_3 + 0x18);
  local_130 = 1;
  if (pTVar1 == *(TextLine **)(param_4 + 0x10)) {
                    /* try { // try from 00ae4404 to 00ae440f has its CatchHandler @ 00ae461c */
    std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
    __push_back_slow_path<TextLine_const&>
              ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_4,(TextLine *)&local_1c0);
  }
  else {
                    /* try { // try from 00ae43ec to 00ae43f7 has its CatchHandler @ 00ae45f8 */
    TextLine::TextLine(pTVar1,(TextLine *)&local_1c0);
    *(TextLine **)(param_4 + 8) = pTVar1 + 0x158;
  }
  local_290 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  local_310 = (void *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_210 = 0;
  local_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_280 = 0;
  local_288 = 0;
  uStack_270 = 0;
  local_278 = 0;
  uStack_260 = 0;
  local_268 = 0;
  uStack_250 = 0;
  local_258 = 0;
  uStack_240 = 0;
  local_248 = 0;
  uStack_230 = 0;
  local_238 = 0;
  uStack_220 = 0;
  local_228 = 0;
  TextLine::operator=((TextLine *)&local_1c0,(TextLine *)&local_320);
  TextLine::~TextLine((TextLine *)&local_320);
  local_320 = local_320 & 0xffffffffffff0000;
                    /* try { // try from 00ae4480 to 00ae4497 has its CatchHandler @ 00ae4604 */
  ParseBlockMembersToTextLines
            (param_1,2,param_2,(basic_string *)&local_320,*(uint *)(param_3 + 0x148),
             *(SpvReflectBlockVariable **)(param_3 + 0x150),(vector *)&local_128);
  if ((local_320 & 1) != 0) {
    operator_delete(local_310);
  }
  pTVar1 = *(TextLine **)(param_4 + 8);
  local_130 = 0x10;
  if (pTVar1 == *(TextLine **)(param_4 + 0x10)) {
                    /* try { // try from 00ae44d4 to 00ae455f has its CatchHandler @ 00ae461c */
    std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
    __push_back_slow_path<TextLine_const&>
              ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_4,(TextLine *)&local_1c0);
  }
  else {
                    /* try { // try from 00ae44bc to 00ae44c7 has its CatchHandler @ 00ae45ec */
    TextLine::TextLine(pTVar1,(TextLine *)&local_1c0);
    *(TextLine **)(param_4 + 8) = pTVar1 + 0x158;
  }
  local_290 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  local_310 = (void *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_210 = 0;
  local_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_280 = 0;
  local_288 = 0;
  uStack_270 = 0;
  local_278 = 0;
  uStack_260 = 0;
  local_268 = 0;
  uStack_250 = 0;
  local_258 = 0;
  uStack_240 = 0;
  local_248 = 0;
  uStack_230 = 0;
  local_238 = 0;
  uStack_220 = 0;
  local_228 = 0;
  TextLine::operator=((TextLine *)&local_1c0,(TextLine *)&local_320);
  TextLine::~TextLine((TextLine *)&local_320);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_1c0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_178);
  pTVar1 = *(TextLine **)(param_4 + 8);
  local_160 = 0;
  local_158 = *(undefined8 *)(param_3 + 0x18);
  local_130 = 2;
  if (pTVar1 == *(TextLine **)(param_4 + 0x10)) {
                    /* try { // try from 00ae4598 to 00ae45a3 has its CatchHandler @ 00ae461c */
    std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
    __push_back_slow_path<TextLine_const&>
              ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)param_4,(TextLine *)&local_1c0);
  }
  else {
                    /* try { // try from 00ae4580 to 00ae458b has its CatchHandler @ 00ae45e0 */
    TextLine::TextLine(pTVar1,(TextLine *)&local_1c0);
    *(TextLine **)(param_4 + 8) = pTVar1 + 0x158;
  }
  TextLine::~TextLine((TextLine *)&local_1c0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


