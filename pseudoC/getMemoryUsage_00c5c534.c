// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemoryUsage
// Entry Point: 00c5c534
// Size: 1224 bytes
// Signature: undefined __cdecl getMemoryUsage(ulonglong * param_1, ulonglong * param_2)


/* WARNING: Type propagation algorithm not settling */
/* EnvUtil::getMemoryUsage(unsigned long long&, unsigned long long&) */

void EnvUtil::getMemoryUsage(ulonglong *param_1,ulonglong *param_2)

{
  long lVar1;
  basic_istream *pbVar2;
  basic_istream<char,std::__ndk1::char_traits<char>> *this;
  long lStack_3b8;
  ulonglong local_3b0;
  ulong local_3a8;
  undefined8 uStack_3a0;
  void *local_398;
  ulong local_390;
  undefined8 uStack_388;
  void *local_380;
  ulong local_378;
  undefined8 uStack_370;
  void *local_368;
  ulong local_360;
  undefined8 uStack_358;
  void *local_350;
  ulong local_348;
  undefined8 uStack_340;
  void *local_338;
  ulong local_330;
  undefined8 uStack_328;
  void *local_320;
  ulong local_318;
  undefined8 uStack_310;
  void *local_308;
  ulong local_300;
  undefined8 uStack_2f8;
  void *local_2f0;
  ulong local_2e8;
  undefined8 uStack_2e0;
  void *local_2d8;
  ulong local_2d0;
  undefined8 uStack_2c8;
  void *local_2c0;
  ulong local_2b8;
  undefined8 uStack_2b0;
  void *local_2a8;
  ulong local_2a0;
  undefined8 uStack_298;
  void *local_290;
  ulong local_288;
  undefined8 uStack_280;
  void *local_278;
  ulong local_270;
  undefined8 uStack_268;
  void *local_260;
  ulong local_258;
  undefined8 uStack_250;
  void *local_248;
  ulong local_240;
  undefined8 uStack_238;
  void *local_230;
  ulong local_228;
  undefined8 uStack_220;
  void *local_218;
  ulong local_210;
  undefined8 uStack_208;
  void *local_200;
  ulong local_1f8;
  undefined8 uStack_1f0;
  void *local_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  void *local_1d0;
  ulong local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined **local_198;
  undefined8 local_190;
  basic_filebuf<char,std::__ndk1::char_traits<char>> abStack_188 [120];
  FILE *local_110;
  undefined4 local_f0;
  undefined **local_e0 [17];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  local_e0[0] = (undefined **)0xfee958;
  local_198 = (undefined **)0xfee930;
  *param_2 = 0;
  local_190 = 0;
                    /* try { // try from 00c5c58c to 00c5c597 has its CatchHandler @ 00c5ca28 */
  std::__ndk1::ios_base::init(local_e0);
  local_58 = 0;
  local_50 = 0xffffffff;
  local_198 = &PTR__basic_ifstream_00fee8c0;
  local_e0[0] = &PTR__basic_ifstream_00fee8e8;
                    /* try { // try from 00c5c5bc to 00c5c5c3 has its CatchHandler @ 00c5ca0c */
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if ((local_110 == (FILE *)0x0) &&
     (local_110 = fopen("/proc/self/stat","re"), local_110 != (FILE *)0x0)) {
    local_f0 = 8;
  }
  else {
                    /* try { // try from 00c5c5e4 to 00c5c5e7 has its CatchHandler @ 00c5c9fc */
    std::__ndk1::ios_base::clear((int)&local_198 + (int)local_198[-3]);
  }
  local_1a8 = 0;
  local_1b0 = 0;
  local_1a0 = (void *)0x0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = (void *)0x0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = (void *)0x0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = (void *)0x0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = (void *)0x0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = (void *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = (void *)0x0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = (void *)0x0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = (void *)0x0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = (void *)0x0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = (void *)0x0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = (void *)0x0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = (void *)0x0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_2f0 = (void *)0x0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = (void *)0x0;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = (void *)0x0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = (void *)0x0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = (void *)0x0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = (void *)0x0;
  local_390 = 0;
  uStack_388 = 0;
  local_380 = (void *)0x0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = (void *)0x0;
                    /* try { // try from 00c5c6c4 to 00c5c787 has its CatchHandler @ 00c5ca3c */
  pbVar2 = std::__ndk1::operator>>((basic_istream *)&local_198,(basic_string *)&local_1b0);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_1c8);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_1e0);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_1f8);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_210);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_228);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_240);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_258);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_270);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_288);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_2a0);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_2b8);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_2d0);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_2e8);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_300);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_318);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_330);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_348);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_360);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_378);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_390);
  pbVar2 = std::__ndk1::operator>>(pbVar2,(basic_string *)&local_3a8);
  this = (basic_istream<char,std::__ndk1::char_traits<char>> *)
         std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
                   ((basic_istream<char,std::__ndk1::char_traits<char>> *)pbVar2,&local_3b0);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>(this,&lStack_3b8);
  *param_1 = local_3b0;
  if ((local_3a8 & 1) != 0) {
    operator_delete(local_398);
  }
  if ((local_390 & 1) != 0) {
    operator_delete(local_380);
  }
  if ((local_378 & 1) != 0) {
    operator_delete(local_368);
  }
  if ((local_360 & 1) != 0) {
    operator_delete(local_350);
  }
  if ((local_348 & 1) != 0) {
    operator_delete(local_338);
  }
  if ((local_330 & 1) != 0) {
    operator_delete(local_320);
  }
  if ((local_318 & 1) != 0) {
    operator_delete(local_308);
  }
  if ((local_300 & 1) != 0) {
    operator_delete(local_2f0);
  }
  if ((local_2e8 & 1) != 0) {
    operator_delete(local_2d8);
  }
  if ((local_2d0 & 1) != 0) {
    operator_delete(local_2c0);
  }
  if ((local_2b8 & 1) != 0) {
    operator_delete(local_2a8);
  }
  if ((local_2a0 & 1) != 0) {
    operator_delete(local_290);
  }
  if ((local_288 & 1) != 0) {
    operator_delete(local_278);
  }
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  local_198 = &PTR__basic_ifstream_00fee8c0;
  local_e0[0] = &PTR__basic_ifstream_00fee8e8;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf(abStack_188);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_198);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_e0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


