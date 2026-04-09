// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeFloatVarPtr
// Entry Point: 006da64c
// Size: 592 bytes
// Signature: undefined __thiscall executeFloatVarPtr(ConsoleCommand * this, vector * param_1, basic_string * param_2)


/* ConsoleCommand::executeFloatVarPtr(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ConsoleCommand::executeFloatVarPtr(ConsoleCommand *this,vector *param_1,basic_string *param_2)

{
  char *__nptr;
  ulong uVar1;
  long lVar2;
  long lVar3;
  ConsoleCommand *pCVar4;
  basic_ostream *pbVar5;
  double dVar6;
  float fVar7;
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_170 = (undefined **)0xfd8f40;
  local_100[0] = (undefined **)0xfd8f68;
  fVar7 = **(float **)(this + 0x40);
                    /* try { // try from 006da6b4 to 006da6bf has its CatchHandler @ 006da8bc */
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006da6e4 to 006da6eb has its CatchHandler @ 006da8a0 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  lVar2 = *(long *)param_1;
  local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  if (1 < (ulong)((*(long *)(param_1 + 8) - lVar2 >> 3) * -0x5555555555555555)) {
    __nptr = (char *)(lVar2 + 0x19);
    if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
      __nptr = *(char **)(lVar2 + 0x28);
    }
    dVar6 = atof(__nptr);
    fVar7 = (float)dVar6;
    if ((fVar7 < *(float *)(this + 0x54)) || (*(float *)(this + 0x58) < fVar7)) {
                    /* try { // try from 006da770 to 006da7ef has its CatchHandler @ 006da8d0 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_170,"Out of range. ]",0xf);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(float *)(this + 0x54));
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,",",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(float *)(this + 0x58));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"[\n",2);
    }
    else {
      **(float **)(this + 0x40) = fVar7;
    }
  }
  uVar1 = (ulong)((byte)this[8] >> 1);
  pCVar4 = this + 9;
  if (((byte)this[8] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x10);
    pCVar4 = *(ConsoleCommand **)(this + 0x18);
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_170,(char *)pCVar4,uVar1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," = ",3);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,fVar7);
                    /* try { // try from 006da7f0 to 006da7fb has its CatchHandler @ 006da89c */
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
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


