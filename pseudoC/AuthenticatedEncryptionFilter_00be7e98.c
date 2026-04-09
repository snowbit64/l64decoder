// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedEncryptionFilter
// Entry Point: 00be7e98
// Size: 68 bytes
// Signature: undefined __thiscall ~AuthenticatedEncryptionFilter(AuthenticatedEncryptionFilter * this)


/* CryptoPP::AuthenticatedEncryptionFilter::~AuthenticatedEncryptionFilter() */

void __thiscall
CryptoPP::AuthenticatedEncryptionFilter::~AuthenticatedEncryptionFilter
          (AuthenticatedEncryptionFilter *this)

{
  *(undefined ***)this = &PTR__AuthenticatedEncryptionFilter_01006c80;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedEncryptionFilter_01006e90;
  *(undefined ***)(this + 0x90) = &PTR__AuthenticatedEncryptionFilter_01006ec0;
  HashFilter::~HashFilter((HashFilter *)(this + 0xd8));
  StreamTransformationFilter::~StreamTransformationFilter((StreamTransformationFilter *)this);
  return;
}


