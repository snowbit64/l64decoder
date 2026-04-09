// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFile
// Entry Point: 00b3679c
// Size: 408 bytes
// Signature: undefined __thiscall addFile(ZipArchiveWriter * this, basic_string * param_1, basic_string * param_2, COMPRESSION_LEVEL param_3)


/* ZipArchiveWriter::addFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   ZipArchiveWriter::COMPRESSION_LEVEL) */

bool __thiscall
ZipArchiveWriter::addFile
          (ZipArchiveWriter *this,basic_string *param_1,basic_string *param_2,
          COMPRESSION_LEVEL param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ACCESS_MODE AVar8;
  long lVar9;
  NativeFile aNStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(param_2 + 4);
  uStack_78 = 0x100000000;
  local_80 = 0;
  if ((*(byte *)param_2 & 1) == 0) {
    lVar9 = (long)param_2 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0x7e000000000;
  local_58 = 0;
  iVar3 = zipOpenNewFileInZip3
                    (*(undefined8 *)this,lVar9,&local_80,0,0,0,0,0,(uint)(param_3 != 0) << 3,param_3
                     ,0,0xf,9,0,0,0);
  bVar2 = false;
  if (iVar3 == 0) {
    NativeFile::NativeFile(aNStack_a8);
                    /* try { // try from 00b3685c to 00b36887 has its CatchHandler @ 00b36938 */
    pvVar6 = operator_new__(0x2000);
    AVar8 = (ACCESS_MODE)*(undefined8 *)(param_1 + 4);
    if ((*(byte *)param_1 & 1) == 0) {
      AVar8 = (int)param_1 + 1;
    }
    uVar7 = NativeFile::open((char *)aNStack_a8,AVar8,false);
    if ((uVar7 & 1) == 0) {
      bVar2 = true;
    }
    else {
                    /* try { // try from 00b3688c to 00b36893 has its CatchHandler @ 00b36934 */
      iVar4 = NativeFile::getSize();
      iVar3 = 0;
      do {
        bVar2 = iVar3 == iVar4;
        if (bVar2) break;
                    /* try { // try from 00b368a8 to 00b368b7 has its CatchHandler @ 00b36940 */
        iVar5 = NativeFile::read(aNStack_a8,pvVar6,0x2000);
        iVar3 = iVar5 + iVar3;
        if (iVar5 < 1) {
          bVar2 = iVar3 == iVar4;
          break;
        }
                    /* try { // try from 00b368cc to 00b368d3 has its CatchHandler @ 00b3693c */
        iVar5 = zipWriteInFileInZip(*(undefined8 *)this,pvVar6,iVar5);
      } while (-1 < iVar5);
    }
    operator_delete__(pvVar6);
    NativeFile::~NativeFile(aNStack_a8);
  }
  zipCloseFileInZip(*(undefined8 *)this);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


