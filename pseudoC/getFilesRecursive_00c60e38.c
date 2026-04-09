// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilesRecursive
// Entry Point: 00c60e38
// Size: 620 bytes
// Signature: undefined __cdecl getFilesRecursive(char * param_1, vector * param_2)


/* NativeFileUtil::getFilesRecursive(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&) */

void NativeFileUtil::getFilesRecursive(char *param_1,vector *param_2)

{
  char *pcVar1;
  basic_string *pbVar2;
  long lVar3;
  ulong uVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  ulong local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  basic_string *pbStack_88;
  basic_string *local_80;
  undefined8 uStack_78;
  basic_string *local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_70 = (basic_string *)0x0;
  pbStack_88 = (basic_string *)0x0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (basic_string *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
                    /* try { // try from 00c60e7c to 00c60e9f has its CatchHandler @ 00c610ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_a0);
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_a0);
  pbVar6 = (basic_string *)0x1;
  getFiles(param_1,(vector *)&pbStack_88,true);
  local_70 = pbStack_88;
  pbVar2 = pbStack_88;
  if (pbStack_88 != local_80) {
    do {
      if (local_70[6] == 2) {
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = (char *)0x0;
                    /* try { // try from 00c60f9c to 00c60fb3 has its CatchHandler @ 00c61110 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_d0,local_70);
        PathUtil::combinePath((PathUtil *)&local_a0,(basic_string *)&local_d0,pbVar6);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        pcVar1 = (char *)((ulong)&local_60 | 1);
        if ((local_60 & 1) != 0) {
          pcVar1 = local_50;
        }
                    /* try { // try from 00c60fd4 to 00c60fdb has its CatchHandler @ 00c610dc */
        getFilesRecursive(pcVar1,param_2);
        pcVar1 = local_50;
        uVar4 = local_60;
joined_r0x00c60fe0:
        if ((uVar4 & 1) != 0) {
          operator_delete(pcVar1);
        }
      }
      else if (local_70[6] == 1) {
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = (char *)0x0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = (char *)0x0;
                    /* try { // try from 00c60f08 to 00c60f1f has its CatchHandler @ 00c610f0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_60,local_70);
        PathUtil::combinePath((PathUtil *)&local_a0,(basic_string *)&local_60,pbVar6);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        local_b8 = 1;
        pbVar2 = *(basic_string **)(param_2 + 8);
        uStack_c8 = uStack_e0;
        local_d0 = local_e8;
        uStack_a8 = *(undefined8 *)(local_70 + 10);
        uStack_b0 = *(undefined8 *)(local_70 + 8);
        local_c0 = local_d8;
        if (pbVar2 == *(basic_string **)(param_2 + 0x10)) {
                    /* try { // try from 00c60fec to 00c60ff7 has its CatchHandler @ 00c610a4 */
          std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
          __push_back_slow_path<GsFileInfo_const&>
                    ((vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *)param_2,
                     (GsFileInfo *)&local_d0);
          pcVar1 = local_c0;
          uVar4 = local_d0;
        }
        else {
                    /* try { // try from 00c60f6c to 00c60f77 has its CatchHandler @ 00c610d0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar2);
          *(undefined8 *)(pbVar2 + 10) = uStack_a8;
          *(undefined8 *)(pbVar2 + 8) = uStack_b0;
          *(ulong *)(pbVar2 + 6) = CONCAT44(uStack_b4,local_b8);
          *(basic_string **)(param_2 + 8) = pbVar2 + 0xc;
          pcVar1 = local_c0;
          uVar4 = local_d0;
        }
        goto joined_r0x00c60fe0;
      }
      local_70 = local_70 + 0xc;
      pbVar2 = pbStack_88;
    } while (local_70 != local_80);
  }
  pbStack_88 = pbVar2;
  pbVar6 = local_70;
  if (pbVar2 != (basic_string *)0x0) {
    while (pbVar5 = pbVar6, pbVar5 != pbVar2) {
      pbVar6 = pbVar5 + -0xc;
      if ((*(byte *)pbVar6 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
    }
    local_80 = pbVar2;
    operator_delete(pbStack_88);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


