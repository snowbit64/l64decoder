// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilePathsRecursive
// Entry Point: 00c61750
// Size: 592 bytes
// Signature: undefined __cdecl getFilePathsRecursive(char * param_1, vector * param_2, basic_string * param_3)


/* WARNING: Type propagation algorithm not settling */
/* NativeFileUtil::getFilePathsRecursive(char const*,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void NativeFileUtil::getFilePathsRecursive(char *param_1,vector *param_2,basic_string *param_3)

{
  char *pcVar1;
  ulong *puVar2;
  long lVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  void *pvVar6;
  ulong *puVar7;
  basic_string *pbVar8;
  byte local_d0;
  void *local_c0;
  basic_string local_b8 [4];
  char *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  basic_string *pbStack_88;
  basic_string *local_80;
  undefined8 uStack_78;
  basic_string *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
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
                    /* try { // try from 00c61798 to 00c617bb has its CatchHandler @ 00c619a0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_a0);
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_a0);
  puVar7 = (ulong *)0x1;
  getFiles(param_1,(vector *)&pbStack_88,true);
  local_70 = pbStack_88;
  pbVar5 = pbStack_88;
  if (pbStack_88 != local_80) {
    do {
      if (local_70[6] == 2) {
        local_60 = 0;
        uStack_58 = 0;
        local_50 = (void *)0x0;
                    /* try { // try from 00c61850 to 00c61867 has its CatchHandler @ 00c61a28 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_60,local_70);
        PathUtil::combinePath
                  ((PathUtil *)&local_a0,(basic_string *)&local_60,(basic_string *)puVar7);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        pcVar1 = (char *)((ulong)local_b8 | 1);
        if (((byte)local_b8[0] & 1) != 0) {
          pcVar1 = local_a8;
        }
                    /* try { // try from 00c6188c to 00c61893 has its CatchHandler @ 00c619d8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_d0);
                    /* try { // try from 00c61894 to 00c618a3 has its CatchHandler @ 00c619fc */
        PathUtil::combinePath((PathUtil *)param_3,(basic_string *)&local_d0,(basic_string *)puVar7);
                    /* try { // try from 00c618a4 to 00c618b3 has its CatchHandler @ 00c619e4 */
        puVar7 = &local_60;
        getFilePathsRecursive(pcVar1,param_2,(basic_string *)puVar7);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        pvVar6 = local_c0;
        if ((local_d0 & 1) != 0) {
LAB_00c618ec:
          operator_delete(pvVar6);
        }
LAB_00c618f0:
        if (((byte)local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      else if (local_70[6] == 1) {
                    /* try { // try from 00c61804 to 00c6180b has its CatchHandler @ 00c619dc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_b8);
                    /* try { // try from 00c6180c to 00c6181b has its CatchHandler @ 00c61a14 */
        PathUtil::combinePath((PathUtil *)param_3,local_b8,(basic_string *)puVar7);
        puVar2 = *(ulong **)(param_2 + 8);
        if (puVar2 < *(ulong **)(param_2 + 0x10)) {
          puVar2[2] = (ulong)local_50;
          puVar2[1] = uStack_58;
          *puVar2 = local_60;
          uStack_58 = 0;
          local_50 = (void *)0x0;
          local_60 = 0;
          *(ulong **)(param_2 + 8) = puVar2 + 3;
        }
        else {
                    /* try { // try from 00c618d4 to 00c618df has its CatchHandler @ 00c619c4 */
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)param_2,(basic_string *)&local_60);
          pvVar6 = local_50;
          if ((local_60 & 1) != 0) goto LAB_00c618ec;
        }
        goto LAB_00c618f0;
      }
      local_70 = local_70 + 0xc;
      pbVar5 = pbStack_88;
    } while (local_70 != local_80);
  }
  pbStack_88 = pbVar5;
  pbVar8 = local_70;
  if (pbVar5 != (basic_string *)0x0) {
    while (pbVar4 = pbVar8, pbVar4 != pbVar5) {
      pbVar8 = pbVar4 + -0xc;
      if ((*(byte *)pbVar8 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    local_80 = pbVar5;
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


