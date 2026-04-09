// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamTransformationFilter
// Entry Point: 00cdd2b8
// Size: 36 bytes
// Signature: undefined __thiscall ~StreamTransformationFilter(StreamTransformationFilter * this)


/* CryptoPP::StreamTransformationFilter::~StreamTransformationFilter() */

void __thiscall
CryptoPP::StreamTransformationFilter::~StreamTransformationFilter(StreamTransformationFilter *this)

{
  ~StreamTransformationFilter(this);
  operator_delete(this);
  return;
}


