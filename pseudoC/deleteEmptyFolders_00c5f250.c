// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteEmptyFolders
// Entry Point: 00c5f250
// Size: 676 bytes
// Signature: undefined __cdecl deleteEmptyFolders(FileIterator * param_1)


/* NativeFileUtil::deleteEmptyFolders(NativeFileUtil::FileIterator&) */

void NativeFileUtil::deleteEmptyFolders(FileIterator *param_1)

{
  char *pcVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  basic_string *pbVar5;
  basic_string *in_x2;
  basic_string *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  byte *local_d8;
  byte *local_d0;
  undefined8 uStack_c8;
  byte *local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 uStack_88;
  byte *local_80;
  byte local_70 [16];
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar6 = *(basic_string **)(param_1 + 0x20);
  pbVar5 = *(basic_string **)(param_1 + 0x30);
  if (pbVar5 != pbVar6) {
    pcVar7 = (char *)((ulong)local_70 | 1);
    do {
      if (pbVar5[6] == 2) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
                    /* try { // try from 00c5f2d4 to 00c5f2eb has its CatchHandler @ 00c5f534 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_b0,pbVar5);
        PathUtil::combinePath((PathUtil *)param_1,(basic_string *)&local_b0,in_x2);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        local_80 = (byte *)0x0;
        pcVar1 = pcVar7;
        if ((local_70[0] & 1) != 0) {
          pcVar1 = local_60;
        }
        uStack_a8 = 0;
        local_b0 = 0;
        local_98 = (byte *)0x0;
        local_a0 = (void *)0x0;
        uStack_88 = 0;
        local_90 = (byte *)0x0;
                    /* try { // try from 00c5f31c to 00c5f33f has its CatchHandler @ 00c5f548 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_b0);
        PathUtil::removeBackReferencesInPlace((basic_string *)&local_b0);
        in_x2 = (basic_string *)0x1;
        getFiles(pcVar1,(vector *)&local_98,true);
        local_80 = local_98;
        if (local_98 == local_90) {
          pcVar1 = pcVar7;
          if ((local_70[0] & 1) != 0) {
            pcVar1 = local_60;
          }
                    /* try { // try from 00c5f3cc to 00c5f3d3 has its CatchHandler @ 00c5f504 */
          deleteFolder(pcVar1,false);
        }
        else {
                    /* try { // try from 00c5f350 to 00c5f357 has its CatchHandler @ 00c5f504 */
          deleteEmptyFolders((FileIterator *)&local_b0);
          local_c0 = (byte *)0x0;
          pcVar1 = pcVar7;
          if ((local_70[0] & 1) != 0) {
            pcVar1 = local_60;
          }
          uStack_e8 = 0;
          local_f0 = 0;
          local_d8 = (byte *)0x0;
          local_e0 = (void *)0x0;
          uStack_c8 = 0;
          local_d0 = (byte *)0x0;
                    /* try { // try from 00c5f378 to 00c5f39b has its CatchHandler @ 00c5f50c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_f0);
          PathUtil::removeBackReferencesInPlace((basic_string *)&local_f0);
          in_x2 = (basic_string *)0x1;
          getFiles(pcVar1,(vector *)&local_d8,true);
          local_c0 = local_d8;
          pbVar4 = local_d8;
          if (local_d8 == local_d0) {
            pcVar1 = pcVar7;
            if ((local_70[0] & 1) != 0) {
              pcVar1 = local_60;
            }
                    /* try { // try from 00c5f3e8 to 00c5f3ef has its CatchHandler @ 00c5f4f4 */
            deleteFolder(pcVar1,false);
            pbVar4 = local_d8;
          }
          local_d8 = pbVar4;
          pbVar8 = local_d0;
          if (pbVar4 != (byte *)0x0) {
            while (pbVar3 = pbVar8, pbVar3 != pbVar4) {
              pbVar8 = pbVar3 + -0x30;
              if ((*pbVar8 & 1) != 0) {
                operator_delete(*(void **)(pbVar3 + -0x20));
              }
            }
            local_d0 = pbVar4;
            operator_delete(local_d8);
          }
          if ((local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
        }
        pbVar4 = local_98;
        pbVar8 = local_90;
        if (local_98 != (byte *)0x0) {
          while (pbVar3 = pbVar8, pbVar3 != pbVar4) {
            pbVar8 = pbVar3 + -0x30;
            if ((*pbVar8 & 1) != 0) {
              operator_delete(*(void **)(pbVar3 + -0x20));
            }
          }
          local_90 = pbVar4;
          operator_delete(local_98);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        pbVar5 = *(basic_string **)(param_1 + 0x30);
        pbVar6 = *(basic_string **)(param_1 + 0x20);
      }
      pbVar5 = pbVar5 + 0xc;
      *(basic_string **)(param_1 + 0x30) = pbVar5;
    } while (pbVar5 != pbVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


