// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BufferedFileWriter
// Entry Point: 0091fb44
// Size: 36 bytes
// Signature: undefined __thiscall ~BufferedFileWriter(BufferedFileWriter * this)


/* BufferedFileWriter::~BufferedFileWriter() */

void __thiscall BufferedFileWriter::~BufferedFileWriter(BufferedFileWriter *this)

{
  ~BufferedFileWriter(this);
  operator_delete(this);
  return;
}


