// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __put_character_sequence<char,std::__ndk1::char_traits<char>>
// Entry Point: 006d1bf0
// Size: 296 bytes
// Signature: basic_ostream * __cdecl __put_character_sequence<char,std::__ndk1::char_traits<char>>(basic_ostream * param_1, char * param_2, ulong param_3)


/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char>
   >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*, unsigned long)
    */

basic_ostream *
std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
          (basic_ostream *param_1,char *param_2,ulong param_3)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [16];
  id aiStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 006d1c24 to 006d1c2f has its CatchHandler @ 006d1d3c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_70,param_1);
  if (local_70[0] != (sentry)0x0) {
    pbVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    uVar3 = *(uint *)(pbVar1 + 8);
    if (*(int *)(pbVar1 + 0x90) == -1) {
                    /* try { // try from 006d1c58 to 006d1c63 has its CatchHandler @ 006d1d2c */
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 006d1c64 to 006d1c83 has its CatchHandler @ 006d1d1c */
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_60);
      uVar5 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      std::__ndk1::locale::~locale((locale *)aiStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar5 & 0xff;
    }
    pcVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      pcVar2 = param_2;
    }
                    /* try { // try from 006d1cac to 006d1cbb has its CatchHandler @ 006d1d2c */
    lVar7 = FUN_006d1d74(uVar8,param_2,pcVar2,param_2 + param_3,pbVar1);
    if (lVar7 == 0) {
                    /* try { // try from 006d1cd8 to 006d1cdb has its CatchHandler @ 006d1d18 */
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


