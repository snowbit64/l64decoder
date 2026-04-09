// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeIntVarPtr
// Entry Point: 006da3bc
// Size: 584 bytes
// Signature: undefined __thiscall executeIntVarPtr(ConsoleCommand * this, vector * param_1, basic_string * param_2)


/* ConsoleCommand::executeIntVarPtr(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ConsoleCommand::executeIntVarPtr(ConsoleCommand *this,vector *param_1,basic_string *param_2)

{
  char *__nptr;
  ulong uVar1;
  long lVar2;
  long lVar3;
  ConsoleCommand *pCVar4;
  int iVar5;
  basic_ostream *pbVar6;
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
  iVar5 = **(int **)(this + 0x40);
                    /* try { // try from 006da420 to 006da42b has its CatchHandler @ 006da624 */
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006da450 to 006da457 has its CatchHandler @ 006da608 */
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
    iVar5 = atoi(__nptr);
    if ((iVar5 < *(int *)(this + 0x4c)) || (*(int *)(this + 0x50) < iVar5)) {
                    /* try { // try from 006da4dc to 006da55b has its CatchHandler @ 006da638 */
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_170,"Out of range. ]",0xf);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          *(int *)(this + 0x4c));
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,",",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          *(int *)(this + 0x50));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"[\n",2);
    }
    else {
      **(int **)(this + 0x40) = iVar5;
    }
  }
  uVar1 = (ulong)((byte)this[8] >> 1);
  pCVar4 = this + 9;
  if (((byte)this[8] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x10);
    pCVar4 = *(ConsoleCommand **)(this + 0x18);
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_170,(char *)pCVar4,uVar1);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar6," = ",3);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,iVar5);
                    /* try { // try from 006da55c to 006da567 has its CatchHandler @ 006da604 */
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


