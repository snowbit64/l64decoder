// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFile
// Entry Point: 00b36954
// Size: 352 bytes
// Signature: undefined __thiscall addFile(ZipArchiveWriter * this, MemoryBufferedFile * param_1, basic_string * param_2, COMPRESSION_LEVEL param_3)


/* ZipArchiveWriter::addFile(MemoryBufferedFile const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   ZipArchiveWriter::COMPRESSION_LEVEL) */

undefined4 __thiscall
ZipArchiveWriter::addFile
          (ZipArchiveWriter *this,MemoryBufferedFile *param_1,basic_string *param_2,
          COMPRESSION_LEVEL param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(param_2 + 4);
  uStack_88 = 0x100000000;
  local_90 = 0;
  if ((*(byte *)param_2 & 1) == 0) {
    lVar7 = (long)param_2 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0x7e000000000;
  local_68 = 0;
  iVar5 = zipOpenNewFileInZip3
                    (*(undefined8 *)this,lVar7,&local_90,0,0,0,0,0,(uint)(param_3 != 0) << 3,param_3
                     ,0,0xf,9,0,0,0);
  uVar8 = 0;
  if (iVar5 == 0) {
    lVar7 = *(long *)(param_1 + 8);
    uVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if ((uVar6 & 1) == 0) {
LAB_00b36a74:
      uVar8 = 1;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x1c);
      uVar9 = 0;
      uVar1 = uVar3;
      if (0x1fff < uVar3) {
        uVar1 = 0x2000;
      }
      do {
        if (uVar3 - uVar9 == 0) goto LAB_00b36a74;
        uVar2 = uVar3 - uVar9;
        if (uVar9 + uVar1 <= uVar3) {
          uVar2 = uVar1;
        }
        if ((int)uVar2 < 1) break;
        iVar5 = zipWriteInFileInZip(*(undefined8 *)this,lVar7 + (ulong)uVar9,uVar2);
        uVar9 = uVar2 + uVar9;
      } while (-1 < iVar5);
      uVar8 = 0;
    }
  }
  zipCloseFileInZip(*(undefined8 *)this);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


