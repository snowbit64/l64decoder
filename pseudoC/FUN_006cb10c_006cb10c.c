// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cb10c
// Entry Point: 006cb10c
// Size: 692 bytes
// Signature: undefined FUN_006cb10c(void)


void FUN_006cb10c(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  ResourceManager *this;
  size_t sVar4;
  ulong uVar5;
  basic_ostream *pbVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  undefined **local_178;
  undefined **local_170 [8];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_190 = (void *)0x0;
  local_188 = (void *)0x0;
  local_180 = 0;
                    /* try { // try from 006cb144 to 006cb14f has its CatchHandler @ 006cb3fc */
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::getResourceList(this,(vector *)&local_190);
  local_178 = (undefined **)0xfd8f40;
  local_108[0] = (undefined **)0xfd8f68;
                    /* try { // try from 006cb174 to 006cb17f has its CatchHandler @ 006cb3e8 */
  std::__ndk1::ios_base::init(local_108);
  local_80 = 0;
  local_78 = 0xffffffff;
  local_178 = &PTR__basic_ostringstream_00fd8ed0;
  local_108[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006cb1a4 to 006cb1ab has its CatchHandler @ 006cb3c8 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_110 = 0x10;
  local_170[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
                    /* try { // try from 006cb1d4 to 006cb1e7 has its CatchHandler @ 006cb3c4 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_178,"Resource List\n",0xe);
  if (local_188 != local_190) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)((long)local_190 + uVar8 * 8);
      pcVar1 = (char *)(lVar7 + 0x31);
      if ((*(byte *)(lVar7 + 0x30) & 1) != 0) {
        pcVar1 = *(char **)(lVar7 + 0x40);
      }
      sVar4 = strlen(pcVar1);
                    /* try { // try from 006cb250 to 006cb2db has its CatchHandler @ 006cb404 */
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178,pcVar1,sVar4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178," (",2);
      uVar5 = Resource::isLoaded();
      bVar3 = (uVar5 & 1) == 0;
      pcVar1 = "loaded, ";
      if (bVar3) {
        pcVar1 = "";
      }
      uVar5 = 8;
      if (bVar3) {
        uVar5 = 0;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178,pcVar1,uVar5);
      bVar3 = *(int *)(*(long *)((long)local_190 + uVar8 * 8) + 0x18) == 3;
      pcVar1 = "active, ";
      if (!bVar3) {
        pcVar1 = "";
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178,pcVar1,(ulong)bVar3 << 3);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_178," ",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          *(uint *)(*(long *)((long)local_190 + uVar8 * 8) + 8));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar6," refs)\n",7);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)((long)local_188 - (long)local_190 >> 3));
  }
                    /* try { // try from 006cb2f0 to 006cb2fb has its CatchHandler @ 006cb3c0 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((*(byte *)param_2 & 1) != 0) {
    operator_delete((void *)param_2[2]);
  }
  local_178 = &PTR__basic_ostringstream_00fd8ed0;
  local_108[0] = &PTR__basic_ostringstream_00fd8ef8;
  param_2[1] = uStack_1a0;
  *param_2 = local_1a8;
  param_2[2] = local_198;
  local_170[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_170);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if (local_190 != (void *)0x0) {
    local_188 = local_190;
    operator_delete(local_190);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


