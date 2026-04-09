// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressedFile
// Entry Point: 00b314a0
// Size: 104 bytes
// Signature: undefined __thiscall CompressedFile(CompressedFile * this, FILE_ITEM * param_1, CompressedFileArchive * param_2)


/* CompressedFile::CompressedFile(CompressedFileArchive::FILE_ITEM*, CompressedFileArchive*) */

void __thiscall
CompressedFile::CompressedFile
          (CompressedFile *this,FILE_ITEM *param_1,CompressedFileArchive *param_2)

{
  undefined4 uVar1;
  
  File::File((File *)this);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR__CompressedFile_00fe9580;
  memcpy(this + 8,param_1,0x200);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(CompressedFileArchive **)(this + 0x208) = param_2;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x220) = uVar1;
  *(undefined4 *)(this + 0x224) = 0;
  return;
}


