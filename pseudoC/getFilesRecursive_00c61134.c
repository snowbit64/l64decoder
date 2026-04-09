// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilesRecursive
// Entry Point: 00c61134
// Size: 716 bytes
// Signature: undefined __cdecl getFilesRecursive(char * param_1, vector * param_2, basic_string * param_3)


/* NativeFileUtil::getFilesRecursive(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void NativeFileUtil::getFilesRecursive(char *param_1,vector *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  long lVar2;
  basic_string *pbVar3;
  char *pcVar4;
  ulong *puVar5;
  basic_string *pbVar6;
  byte local_f0;
  void *local_e0;
  byte local_d8;
  undefined uStack_d7;
  undefined6 uStack_d6;
  undefined8 uStack_d0;
  char *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  basic_string *pbStack_78;
  basic_string *local_70;
  undefined8 uStack_68;
  basic_string *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = (basic_string *)0x0;
  pbStack_78 = (basic_string *)0x0;
  local_80 = (void *)0x0;
  uStack_68 = 0;
  local_70 = (basic_string *)0x0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00c61180 to 00c611a3 has its CatchHandler @ 00c61404 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_90);
  puVar5 = (ulong *)0x1;
  getFiles(param_1,(vector *)&pbStack_78,true);
  local_60 = pbStack_78;
  pbVar1 = pbStack_78;
  if (pbStack_78 != local_70) {
    do {
      if (local_60[6] == 2) {
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = (char *)0x0;
                    /* try { // try from 00c6129c to 00c612b3 has its CatchHandler @ 00c614c4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_c0,local_60);
        PathUtil::combinePath
                  ((PathUtil *)&local_90,(basic_string *)&local_c0,(basic_string *)puVar5);
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        pcVar4 = (char *)((ulong)&local_d8 | 1);
        if ((local_d8 & 1) != 0) {
          pcVar4 = local_c8;
        }
                    /* try { // try from 00c612d8 to 00c612df has its CatchHandler @ 00c61434 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_f0);
                    /* try { // try from 00c612e0 to 00c612ef has its CatchHandler @ 00c61480 */
        PathUtil::combinePath((PathUtil *)param_3,(basic_string *)&local_f0,(basic_string *)puVar5);
                    /* try { // try from 00c612f0 to 00c612ff has its CatchHandler @ 00c6144c */
        puVar5 = &local_c0;
        getFilesRecursive(pcVar4,param_2,(basic_string *)puVar5);
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
        pcVar4 = local_c8;
        if ((local_d8 & 1) != 0) {
LAB_00c611cc:
          operator_delete(pcVar4);
        }
      }
      else if (local_60[6] == 1) {
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = (char *)0x0;
                    /* try { // try from 00c61204 to 00c6120b has its CatchHandler @ 00c61444 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_f0);
                    /* try { // try from 00c6120c to 00c6121b has its CatchHandler @ 00c614a4 */
        PathUtil::combinePath((PathUtil *)param_3,(basic_string *)&local_f0,(basic_string *)puVar5);
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        local_c0 = CONCAT62(uStack_d6,CONCAT11(uStack_d7,local_d8));
        local_d8 = 0;
        uStack_d7 = 0;
        uStack_b8 = uStack_d0;
        local_b0 = local_c8;
        if ((local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
        local_a8 = 1;
        pbVar1 = *(basic_string **)(param_2 + 8);
        uStack_98 = *(undefined8 *)(local_60 + 10);
        uStack_a0 = *(undefined8 *)(local_60 + 8);
        if (pbVar1 == *(basic_string **)(param_2 + 0x10)) {
                    /* try { // try from 00c61344 to 00c6134f has its CatchHandler @ 00c61400 */
          std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
          __push_back_slow_path<GsFileInfo_const&>
                    ((vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *)param_2,
                     (GsFileInfo *)&local_c0);
        }
        else {
                    /* try { // try from 00c6126c to 00c61277 has its CatchHandler @ 00c61428 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar1);
          *(undefined8 *)(pbVar1 + 10) = uStack_98;
          *(undefined8 *)(pbVar1 + 8) = uStack_a0;
          *(ulong *)(pbVar1 + 6) = CONCAT44(uStack_a4,local_a8);
          *(basic_string **)(param_2 + 8) = pbVar1 + 0xc;
        }
        pcVar4 = local_b0;
        if ((local_c0 & 1) != 0) goto LAB_00c611cc;
      }
      local_60 = local_60 + 0xc;
      pbVar1 = pbStack_78;
    } while (local_60 != local_70);
  }
  pbStack_78 = pbVar1;
  pbVar6 = local_60;
  if (pbVar1 != (basic_string *)0x0) {
    while (pbVar3 = pbVar6, pbVar3 != pbVar1) {
      pbVar6 = pbVar3 + -0xc;
      if ((*(byte *)pbVar6 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
    }
    local_70 = pbVar1;
    operator_delete(pbStack_78);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


