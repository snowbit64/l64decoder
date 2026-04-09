// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fetch
// Entry Point: 00b315a0
// Size: 208 bytes
// Signature: undefined fetch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompressedFile::fetch() */

void CompressedFile::fetch(void)

{
  uint uVar1;
  uint uVar2;
  long in_x0;
  long *plVar3;
  uchar *puVar4;
  uchar *puVar5;
  
  plVar3 = (long *)CompressedFileArchive::getNativeFileForCurrentThread();
  (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(in_x0 + 8));
  uVar1 = *(uint *)(in_x0 + 0x18);
  puVar4 = (uchar *)operator_new__((ulong)uVar1);
  (**(code **)(*plVar3 + 0x28))(plVar3,puVar4,(ulong)uVar1);
  uVar1 = *(uint *)(in_x0 + 0x10);
  if ((uVar1 & 1) == 0) {
    *(uchar **)(in_x0 + 0x218) = puVar4;
    *(uchar **)(in_x0 + 0x210) = puVar4;
    return;
  }
  uVar2 = *(uint *)(in_x0 + 0x14);
  puVar5 = (uchar *)operator_new__((ulong)uVar2);
  if ((uVar1 >> 1 & 1) == 0) {
    LZMACompressionUtil::decompress(puVar4,*(uint *)(in_x0 + 0x18),puVar5,uVar2);
  }
  else {
    ZLIBCompressionUtil::decompress(puVar4,*(uint *)(in_x0 + 0x18),puVar5,uVar2);
  }
  *(uchar **)(in_x0 + 0x218) = puVar5;
  *(uchar **)(in_x0 + 0x210) = puVar5;
  operator_delete__(puVar4);
  return;
}


