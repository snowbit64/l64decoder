// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCompressedImage
// Entry Point: 00bf6204
// Size: 136 bytes
// Signature: undefined __thiscall createCompressedImage(CompiledShaderArchive * this, uchar * param_1, uint param_2, ArchiveDataBlock * param_3)


/* CompiledShaderArchive::createCompressedImage(unsigned char const*, unsigned int,
   CompiledShaderArchive::ArchiveDataBlock&) */

CompiledShaderArchive * __thiscall
CompiledShaderArchive::createCompressedImage
          (CompiledShaderArchive *this,uchar *param_1,uint param_2,ArchiveDataBlock *param_3)

{
  void *__dest;
  
  *(undefined8 *)param_3 = 0;
  *(uint *)(param_3 + 8) = 0;
  param_3[0xc] = (ArchiveDataBlock)0x0;
  if (param_2 != 0) {
    this = (CompiledShaderArchive *)
           LZMACompressionUtil::compressIfSmaller
                     (param_1,param_2,(uchar **)param_3,(uint *)(param_3 + 8));
    if (((ulong)this & 1) == 0) {
      __dest = operator_new__((ulong)param_2);
      *(void **)param_3 = __dest;
      this = (CompiledShaderArchive *)memcpy(__dest,param_1,(ulong)param_2);
      *(uint *)(param_3 + 8) = param_2;
    }
    else {
      param_3[0xd] = (ArchiveDataBlock)0x0;
      *(uint *)(param_3 + 0xe) = param_2;
      param_3[0xc] = (ArchiveDataBlock)((char)param_3[0xc] + '\x01');
    }
  }
  return this;
}


