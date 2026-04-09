// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ZipArchiveWriter
// Entry Point: 00b361d8
// Size: 600 bytes
// Signature: undefined __thiscall ZipArchiveWriter(ZipArchiveWriter * this, char * param_1)


/* ZipArchiveWriter::ZipArchiveWriter(char const*) */

void __thiscall ZipArchiveWriter::ZipArchiveWriter(ZipArchiveWriter *this,char *param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  size_t __n;
  ulong uVar4;
  char *pcVar5;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  bVar2 = DAT_02118948;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if ((bVar2 & 1) == 0) {
    s_def = gs_open_file_func;
    DAT_021188d0 = gs_read_file_func;
    DAT_021188d8 = gs_write_file_func;
    DAT_021188e0 = gs_tell_file_func;
    DAT_021188e8 = gs_seek_file_func;
    DAT_021188f0 = gs_close_file_func;
    DAT_021188f8 = gs_error_file_func;
    DAT_02118900 = 0;
    s_defMem = gs_open_memfile_func;
    DAT_02118910 = gs_read_memfile_func;
    DAT_02118918 = gs_write_memfile_func;
    DAT_02118920 = gs_tell_memfile_func;
    DAT_02118928 = gs_seek_memfile_func;
    DAT_02118930 = gs_close_memfile_func;
    DAT_02118938 = gs_error_memfile_func;
    DAT_02118940 = (ZipArchiveWriter *)0x0;
    DAT_02118948 = 1;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_1 == (char *)0x0) {
    DAT_02118940 = this;
    uVar3 = zipOpen2(0,0,&PTR_s_GIANTS_SOFTWARE_010437d0);
    *(undefined8 *)this = uVar3;
    goto LAB_00b363f8;
  }
                    /* try { // try from 00b362d4 to 00b36347 has its CatchHandler @ 00b3646c */
  uVar3 = zipOpen2(param_1,0,&PTR_s_GIANTS_SOFTWARE_010437d0,&s_def);
  *(undefined8 *)this = uVar3;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b36424 to 00b3642b has its CatchHandler @ 00b36468 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar5 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b36370;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b36358 to 00b3635f has its CatchHandler @ 00b36468 */
    pcVar5 = (char *)operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = pcVar5;
LAB_00b36370:
    memcpy(pcVar5,param_1,__n);
  }
  pcVar5[__n] = '\0';
  pcVar5 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar5 = local_60;
  }
                    /* try { // try from 00b3639c to 00b3639f has its CatchHandler @ 00b3647c */
  uVar4 = PathUtil::isAbsolutePath(pcVar5);
  if ((uVar4 & 1) == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
                    /* try { // try from 00b363ac to 00b363cb has its CatchHandler @ 00b36430 */
    PathUtil::getAppBasePath((basic_string *)&local_88);
    PathUtil::makeUnifiedPathInPlace((basic_string *)&local_88);
    PathUtil::buildAbsolutePath((basic_string *)&local_88,param_1,(basic_string *)&local_70);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
                    /* try { // try from 00b363dc to 00b363e7 has its CatchHandler @ 00b3647c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8),(basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00b363f8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


