// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BufferedFileWriter
// Entry Point: 0091f7e8
// Size: 168 bytes
// Signature: undefined __thiscall ~BufferedFileWriter(BufferedFileWriter * this)


/* BufferedFileWriter::~BufferedFileWriter() */

void __thiscall BufferedFileWriter::~BufferedFileWriter(BufferedFileWriter *this)

{
  int iVar1;
  ulong uVar2;
  
  *(undefined ***)this = &PTR__BufferedFileWriter_00fdfc30;
                    /* try { // try from 0091f814 to 0091f837 has its CatchHandler @ 0091f890 */
  uVar2 = (**(code **)(**(long **)(this + 8) + 0x10))();
  if ((((uVar2 & 1) != 0) && (*(int *)(this + 0x18) != 0)) &&
     (iVar1 = (**(code **)(**(long **)(this + 8) + 0x30))
                        (*(long **)(this + 8),*(undefined8 *)(this + 0x20)), 0 < iVar1)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + iVar1;
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - iVar1;
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if ((this[0x10] != (BufferedFileWriter)0x0) && (*(long **)(this + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  File::~File((File *)this);
  return;
}


