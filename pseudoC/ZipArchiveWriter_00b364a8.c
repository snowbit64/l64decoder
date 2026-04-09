// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ZipArchiveWriter
// Entry Point: 00b364a8
// Size: 96 bytes
// Signature: undefined __thiscall ~ZipArchiveWriter(ZipArchiveWriter * this)


/* ZipArchiveWriter::~ZipArchiveWriter() */

void __thiscall ZipArchiveWriter::~ZipArchiveWriter(ZipArchiveWriter *this)

{
  int iVar1;
  
                    /* try { // try from 00b364c0 to 00b364c7 has its CatchHandler @ 00b36508 */
  if ((*(long *)this != 0) && (iVar1 = zipClose(*(long *)this,0), iVar1 == 0)) {
    *(undefined8 *)this = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


