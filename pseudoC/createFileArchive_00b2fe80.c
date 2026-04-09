// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createFileArchive
// Entry Point: 00b2fe80
// Size: 1056 bytes
// Signature: undefined __thiscall createFileArchive(ArchiveFileLoader * this, char * param_1, uint * param_2)


/* ArchiveFileLoader::createFileArchive(char const*, unsigned int&) */

long * __thiscall
ArchiveFileLoader::createFileArchive(ArchiveFileLoader *this,char *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  size_t sVar7;
  ulong uVar8;
  long *this_00;
  ulong *puVar9;
  char *pcVar10;
  void *__dest;
  undefined8 local_a8;
  size_t local_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  *param_2 = 0;
  sVar7 = strlen(param_1);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    pcVar10 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00b2ff04;
  }
  else {
    uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pcVar10 = (char *)operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = sVar7;
    local_60 = pcVar10;
LAB_00b2ff04:
    memcpy(pcVar10,param_1,sVar7);
  }
  pcVar10[sVar7] = '\0';
                    /* try { // try from 00b2ff18 to 00b2ff2b has its CatchHandler @ 00b302f4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_70);
  pcVar10 = (char *)((ulong)&local_70 | 1);
  bVar6 = (local_70 & 1) != 0;
  uVar4 = (uint)((byte)local_70 >> 1);
  if (bVar6) {
    uVar4 = (uint)local_68;
  }
  uVar2 = uVar4 - 1;
  pcVar1 = pcVar10;
  if (bVar6) {
    pcVar1 = local_60;
  }
  uVar3 = uVar4 - 3;
  uVar4 = uVar4 - 2;
  pcVar1[uVar2] = 'r';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar3] = 'g';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar4] = 'a';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
                    /* try { // try from 00b2ff9c to 00b2ffa7 has its CatchHandler @ 00b302f8 */
  uVar8 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar1);
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 00b2ffac to 00b2ffb3 has its CatchHandler @ 00b302f0 */
    this_00 = (long *)operator_new(0x88);
    pcVar1 = pcVar10;
    if ((local_70 & 1) != 0) {
      pcVar1 = local_60;
    }
                    /* try { // try from 00b2ffc8 to 00b2fff7 has its CatchHandler @ 00b302d8 */
    CryptoFileArchive::CryptoFileArchive
              ((CryptoFileArchive *)this_00,pcVar1,0x14b281c430d0d6b6,0x29f53cb92f28ac14,0x80,
               (uchar *)"2W957B]2X782622c3c7$2dA26a0ffa23");
                    /* try { // try from 00b30000 to 00b30007 has its CatchHandler @ 00b302f0 */
    uVar8 = (**(code **)(*this_00 + 0x10))(this_00);
    if ((uVar8 & 1) != 0) goto LAB_00b3024c;
    (**(code **)(*this_00 + 8))(this_00);
  }
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar2] = 'p';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar4] = 'i';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar3] = 'z';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
                    /* try { // try from 00b30074 to 00b3007f has its CatchHandler @ 00b302f8 */
  uVar8 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar1);
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 00b30084 to 00b3008b has its CatchHandler @ 00b302ec */
    this_00 = (long *)operator_new(0x80e0);
    pcVar1 = pcVar10;
    if ((local_70 & 1) != 0) {
      pcVar1 = local_60;
    }
                    /* try { // try from 00b300a0 to 00b300a7 has its CatchHandler @ 00b302d0 */
    ZIPFileArchive::ZIPFileArchive((ZIPFileArchive *)this_00,pcVar1,true);
                    /* try { // try from 00b300b0 to 00b300b7 has its CatchHandler @ 00b302ec */
    uVar8 = (**(code **)(*this_00 + 0x10))(this_00);
    if ((uVar8 & 1) != 0) goto LAB_00b3024c;
    (**(code **)(*this_00 + 8))(this_00);
  }
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar2] = 'k';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar4] = 'a';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  pcVar1[uVar3] = 'p';
  pcVar1 = pcVar10;
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
                    /* try { // try from 00b30124 to 00b3012f has its CatchHandler @ 00b302f8 */
  uVar8 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar1);
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 00b30134 to 00b3013b has its CatchHandler @ 00b302e8 */
    this_00 = (long *)operator_new(0xf0);
    if ((local_70 & 1) != 0) {
      pcVar10 = local_60;
    }
    sVar7 = strlen(param_1);
    if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00b30294 to 00b3029b has its CatchHandler @ 00b302d4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      __dest = (void *)((ulong)&local_a8 | 1);
      local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00b301a4;
    }
    else {
      uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b3018c to 00b30193 has its CatchHandler @ 00b302d4 */
      __dest = operator_new(uVar8);
      local_a8 = uVar8 | 1;
      local_a0 = sVar7;
      local_98 = __dest;
LAB_00b301a4:
      memcpy(__dest,param_1,sVar7);
    }
    *(undefined *)((long)__dest + sVar7) = 0;
                    /* try { // try from 00b301b8 to 00b301c7 has its CatchHandler @ 00b302b8 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a8);
    local_80 = (char *)puVar9[2];
    uStack_88 = puVar9[1];
    local_90 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pcVar1 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pcVar1 = local_80;
    }
                    /* try { // try from 00b301f8 to 00b30203 has its CatchHandler @ 00b302a0 */
    CompressedFileArchive::CompressedFileArchive((CompressedFileArchive *)this_00,pcVar10,pcVar1);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
                    /* try { // try from 00b3022c to 00b30233 has its CatchHandler @ 00b302e8 */
    uVar8 = (**(code **)(*this_00 + 0x10))(this_00);
    if ((uVar8 & 1) != 0) goto LAB_00b3024c;
    (**(code **)(*this_00 + 8))(this_00);
  }
  this_00 = (long *)0x0;
LAB_00b3024c:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


