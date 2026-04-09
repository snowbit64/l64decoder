// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFiles
// Entry Point: 00c5edb8
// Size: 624 bytes
// Signature: undefined __cdecl getFiles(char * param_1, vector * param_2, bool param_3)


/* NativeFileUtil::getFiles(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&, bool) */

void NativeFileUtil::getFiles(char *param_1,vector *param_2,bool param_3)

{
  basic_string *pbVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  size_t __n;
  DIR *__dirp;
  dirent *pdVar5;
  ulong *puVar6;
  char *pcVar7;
  ulong uVar8;
  byte local_168 [16];
  void *local_158;
  ulong local_150;
  ulong uStack_148;
  char *local_140;
  undefined auStack_138 [48];
  __off_t local_108;
  __time_t local_e0;
  ulong local_b8;
  long lStack_b0;
  void *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  __off_t _Stack_98;
  __time_t local_90;
  undefined8 local_88;
  size_t local_80;
  char *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar7 = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c5ee4c;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar7 = (char *)operator_new(uVar8);
    local_88 = uVar8 | 1;
    local_80 = __n;
    local_78 = pcVar7;
  }
  memcpy(pcVar7,param_1,__n);
LAB_00c5ee4c:
  pcVar7[__n] = '\0';
                    /* try { // try from 00c5ee50 to 00c5ee5b has its CatchHandler @ 00c5f028 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_88);
  pcVar7 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar7 = local_78;
  }
  __dirp = opendir(pcVar7);
  if (__dirp != (DIR *)0x0) {
                    /* try { // try from 00c5eea4 to 00c5eeab has its CatchHandler @ 00c5f094 */
    while (pdVar5 = readdir(__dirp), pdVar5 != (dirent *)0x0) {
      iVar4 = strcmp(pdVar5->d_name,".");
      if ((iVar4 != 0) && (iVar4 = strcmp(pdVar5->d_name,".."), iVar4 != 0)) {
        local_b8 = 0;
        lStack_b0 = 0;
        local_a8 = (void *)0x0;
                    /* try { // try from 00c5eedc to 00c5eee7 has its CatchHandler @ 00c5f064 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_b8);
                    /* try { // try from 00c5eee8 to 00c5eefb has its CatchHandler @ 00c5f060 */
        std::__ndk1::operator+("/",(basic_string *)&local_b8);
                    /* try { // try from 00c5eefc to 00c5ef0b has its CatchHandler @ 00c5f048 */
        puVar6 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::insert((ulong)local_168,(char *)0x0);
        local_140 = (char *)puVar6[2];
        uStack_148 = puVar6[1];
        local_150 = *puVar6;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        if ((local_168[0] & 1) != 0) {
          operator_delete(local_158);
        }
        pcVar3 = local_140;
        uVar8 = local_150;
        pcVar7 = (char *)((ulong)&local_150 | 1);
        if ((local_150 & 1) != 0) {
          pcVar7 = local_140;
        }
        stat(pcVar7,(stat *)auStack_138);
        pbVar1 = *(basic_string **)(param_2 + 8);
        local_a0 = 1;
        if ((auStack_138._16_4_ & 0xf000) == 0x4000) {
          local_a0 = 2;
        }
        _Stack_98 = local_108;
        local_90 = local_e0;
        if (pbVar1 == *(basic_string **)(param_2 + 0x10)) {
                    /* try { // try from 00c5efa4 to 00c5efaf has its CatchHandler @ 00c5f02c */
          std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
          __push_back_slow_path<GsFileInfo_const&>
                    ((vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *)param_2,
                     (GsFileInfo *)&local_b8);
        }
        else {
                    /* try { // try from 00c5ef7c to 00c5ef87 has its CatchHandler @ 00c5f034 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar1);
          *(__time_t *)(pbVar1 + 10) = local_90;
          *(__off_t *)(pbVar1 + 8) = _Stack_98;
          *(ulong *)(pbVar1 + 6) = CONCAT44(uStack_9c,local_a0);
          *(basic_string **)(param_2 + 8) = pbVar1 + 0xc;
        }
        if ((uVar8 & 1) != 0) {
          operator_delete(pcVar3);
        }
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
      }
    }
    closedir(__dirp);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


