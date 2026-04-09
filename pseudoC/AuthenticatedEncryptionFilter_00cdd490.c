// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedEncryptionFilter
// Entry Point: 00cdd490
// Size: 76 bytes
// Signature: undefined __thiscall ~AuthenticatedEncryptionFilter(AuthenticatedEncryptionFilter * this)


/* non-virtual thunk to CryptoPP::AuthenticatedEncryptionFilter::~AuthenticatedEncryptionFilter() */

void __thiscall
CryptoPP::AuthenticatedEncryptionFilter::~AuthenticatedEncryptionFilter
          (AuthenticatedEncryptionFilter *this)

{
  *(undefined ***)this = &PTR__AuthenticatedEncryptionFilter_01006e90;
  *(undefined ***)(this + 0x88) = &PTR__AuthenticatedEncryptionFilter_01006ec0;
  *(undefined ***)(this + -8) = &PTR__AuthenticatedEncryptionFilter_01006c80;
  HashFilter::~HashFilter((HashFilter *)(this + 0xd0));
  StreamTransformationFilter::~StreamTransformationFilter((StreamTransformationFilter *)(this + -8))
  ;
  return;
}


