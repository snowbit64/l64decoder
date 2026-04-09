// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilePathsRecursive
// Entry Point: 00c614e8
// Size: 516 bytes
// Signature: undefined __cdecl getFilePathsRecursive(char * param_1, vector * param_2)


/* WARNING: Type propagation algorithm not settling */
/* NativeFileUtil::getFilePathsRecursive(char const*,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&) */

void NativeFileUtil::getFilePathsRecursive(char *param_1,vector *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  basic_string *pbStack_78;
  basic_string *local_70;
  undefined8 uStack_68;
  basic_string *local_60;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_60 = (basic_string *)0x0;
  pbStack_78 = (basic_string *)0x0;
  local_80 = (void *)0x0;
  uStack_68 = 0;
  local_70 = (basic_string *)0x0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00c61528 to 00c6154b has its CatchHandler @ 00c616ec */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_90);
  pbVar6 = (basic_string *)0x1;
  getFiles(param_1,(vector *)&pbStack_78,true);
  local_60 = pbStack_78;
  pbVar5 = pbStack_78;
  if (pbStack_78 != local_70) {
    do {
      if (local_60[6] == 2) {
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (void *)0x0;
                    /* try { // try from 00c61600 to 00c61617 has its CatchHandler @ 00c61728 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_50,local_60);
        PathUtil::combinePath((PathUtil *)&local_90,(basic_string *)&local_50,pbVar6);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        pcVar1 = (char *)((ulong)&local_a8 | 1);
        if (((byte)local_a8 & 1) != 0) {
          pcVar1 = local_98;
        }
                    /* try { // try from 00c61638 to 00c6163f has its CatchHandler @ 00c61714 */
        getFilePathsRecursive(pcVar1,param_2);
LAB_00c61640:
        if (((byte)local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
      }
      else if (local_60[6] == 1) {
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (void *)0x0;
                    /* try { // try from 00c615b4 to 00c615cb has its CatchHandler @ 00c6172c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_50,local_60);
        PathUtil::combinePath((PathUtil *)&local_90,(basic_string *)&local_50,pbVar6);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        puVar2 = *(undefined8 **)(param_2 + 8);
        if (*(undefined8 **)(param_2 + 0x10) <= puVar2) {
                    /* try { // try from 00c615e8 to 00c615f3 has its CatchHandler @ 00c61710 */
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)param_2,(basic_string *)&local_a8);
          goto LAB_00c61640;
        }
        puVar2[2] = local_98;
        puVar2[1] = uStack_a0;
        *puVar2 = CONCAT71(local_a8._1_7_,(byte)local_a8);
        *(undefined8 **)(param_2 + 8) = puVar2 + 3;
      }
      local_60 = local_60 + 0xc;
      pbVar5 = pbStack_78;
    } while (local_60 != local_70);
  }
  pbStack_78 = pbVar5;
  pbVar6 = local_60;
  if (pbVar5 != (basic_string *)0x0) {
    while (pbVar4 = pbVar6, pbVar4 != pbVar5) {
      pbVar6 = pbVar4 + -0xc;
      if ((*(byte *)pbVar6 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    local_70 = pbVar5;
    operator_delete(pbStack_78);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


