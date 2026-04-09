// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDirectoryFlat
// Entry Point: 00b36574
// Size: 480 bytes
// Signature: undefined __thiscall addDirectoryFlat(ZipArchiveWriter * this, basic_string * param_1, COMPRESSION_LEVEL param_2)


/* WARNING: Type propagation algorithm not settling */
/* ZipArchiveWriter::addDirectoryFlat(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   ZipArchiveWriter::COMPRESSION_LEVEL) */

undefined4 __thiscall
ZipArchiveWriter::addDirectoryFlat
          (ZipArchiveWriter *this,basic_string *param_1,COMPRESSION_LEVEL param_2)

{
  char *pcVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  basic_string *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte local_a0;
  void *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  basic_string local_70 [4];
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70);
                    /* try { // try from 00b365b4 to 00b365c7 has its CatchHandler @ 00b36758 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  push_back((char)&stack0xffffffffffffffb0 + -0x20);
  PathUtil::makeUnifiedPathInPlace(local_70);
  if (*(long *)this == 0) {
    uVar8 = 0;
  }
  else {
    local_88 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_78 = 0;
    pcVar1 = (char *)((ulong)local_70 | 1);
    if (((byte)local_70[0]._0_1_ & 1) != 0) {
      pcVar1 = local_60;
    }
                    /* try { // try from 00b365f0 to 00b365fb has its CatchHandler @ 00b36754 */
    pbVar5 = (basic_string *)0x1;
    NativeFileUtil::getFiles(pcVar1,(vector *)&local_88,true);
    pbVar6 = local_80;
    if (local_80 != local_88) {
      pbVar6 = local_88;
      pbVar10 = local_80;
      uVar4 = 1;
      uVar12 = 0;
      do {
        uVar11 = uVar4;
        if (*(int *)(pbVar6 + uVar12 * 0x30 + 0x18) == 1) {
                    /* try { // try from 00b36658 to 00b36663 has its CatchHandler @ 00b36778 */
          std::__ndk1::operator+
                    ((__ndk1 *)local_70,(basic_string_conflict *)(pbVar6 + uVar12 * 0x30),
                     (basic_string_conflict *)pbVar5);
          pbVar5 = (basic_string *)(local_88 + uVar12 * 0x30);
                    /* try { // try from 00b36670 to 00b3667f has its CatchHandler @ 00b36760 */
          uVar4 = addFile(this,(basic_string *)&local_a0,pbVar5,param_2);
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          pbVar6 = local_88;
          pbVar10 = local_80;
          if ((uVar4 & 1) == 0) {
            uVar8 = 0;
            goto joined_r0x00b366c4;
          }
        }
        uVar7 = ((long)pbVar10 - (long)pbVar6 >> 4) * -0x5555555555555555;
        uVar4 = (ulong)((int)uVar11 + 1);
        uVar12 = uVar11;
      } while (uVar11 <= uVar7 && uVar7 - uVar11 != 0);
    }
    uVar8 = 1;
joined_r0x00b366c4:
    pbVar10 = pbVar6;
    pbVar9 = local_80;
    if (pbVar6 != (byte *)0x0) {
      while (pbVar3 = pbVar9, pbVar3 != pbVar6) {
        pbVar9 = pbVar3 + -0x30;
        pbVar10 = local_88;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x20));
          pbVar10 = local_88;
        }
      }
      local_80 = pbVar6;
      operator_delete(pbVar10);
    }
  }
  if (((byte)local_70[0]._0_1_ & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


