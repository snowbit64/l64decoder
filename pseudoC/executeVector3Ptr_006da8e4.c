// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeVector3Ptr
// Entry Point: 006da8e4
// Size: 588 bytes
// Signature: undefined __thiscall executeVector3Ptr(ConsoleCommand * this, vector * param_1, basic_string * param_2)


/* ConsoleCommand::executeVector3Ptr(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ConsoleCommand::executeVector3Ptr(ConsoleCommand *this,vector *param_1,basic_string *param_2)

{
  char *pcVar1;
  ConsoleCommand *pCVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  basic_ostream *pbVar7;
  float *pfVar8;
  double dVar9;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined **local_170;
  undefined **local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar4 = *(long *)param_1;
  pfVar8 = *(float **)(this + 0x40);
  if (3 < (ulong)((*(long *)(param_1 + 8) - lVar4 >> 3) * -0x5555555555555555)) {
    pcVar1 = (char *)(lVar4 + 0x19);
    if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x28);
    }
    dVar9 = atof(pcVar1);
    *pfVar8 = (float)dVar9;
    pcVar1 = (char *)(lVar4 + 0x31);
    if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x40);
    }
    dVar9 = atof(pcVar1);
    pfVar8[1] = (float)dVar9;
    pcVar1 = (char *)(lVar4 + 0x49);
    if ((*(byte *)(lVar4 + 0x48) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x58);
    }
    dVar9 = atof(pcVar1);
    pfVar8[2] = (float)dVar9;
  }
  local_170 = (undefined **)0xfd8f40;
  local_100[0] = (undefined **)0xfd8f68;
                    /* try { // try from 006da9c0 to 006da9cb has its CatchHandler @ 006dab50 */
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006da9f0 to 006da9f7 has its CatchHandler @ 006dab34 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  uStack_120 = 0;
  local_128 = 0;
  local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  bVar6 = ((byte)this[8] & 1) != 0;
  pCVar2 = this + 9;
  if (bVar6) {
    pCVar2 = *(ConsoleCommand **)(this + 0x18);
  }
  uVar3 = (ulong)((byte)this[8] >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(this + 0x10);
  }
  local_108 = 0x10;
                    /* try { // try from 006daa38 to 006daa87 has its CatchHandler @ 006dab64 */
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_170,(char *)pCVar2,uVar3);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7," = ",3);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,*pfVar8);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7," ",1);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,pfVar8[1]);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7," ",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,pfVar8[2]);
                    /* try { // try from 006daa88 to 006daa93 has its CatchHandler @ 006dab30 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((*(byte *)param_2 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 4));
  }
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
  *(undefined8 *)(param_2 + 2) = uStack_180;
  *(undefined8 *)param_2 = local_188;
  *(undefined8 *)(param_2 + 4) = local_178;
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


