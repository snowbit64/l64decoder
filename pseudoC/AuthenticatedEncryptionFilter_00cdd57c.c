// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedEncryptionFilter
// Entry Point: 00cdd57c
// Size: 84 bytes
// Signature: undefined __thiscall ~AuthenticatedEncryptionFilter(AuthenticatedEncryptionFilter * this)


/* non-virtual thunk to CryptoPP::AuthenticatedEncryptionFilter::~AuthenticatedEncryptionFilter() */

void __thiscall
CryptoPP::AuthenticatedEncryptionFilter::~AuthenticatedEncryptionFilter
          (AuthenticatedEncryptionFilter *this)

{
  undefined8 *this_00;
  
  *(undefined ***)(this + -0x88) = &PTR__AuthenticatedEncryptionFilter_01006e90;
  *(undefined ***)this = &PTR__AuthenticatedEncryptionFilter_01006ec0;
  this_00 = (undefined8 *)(this + -0x90);
  *this_00 = &PTR__AuthenticatedEncryptionFilter_01006c80;
  HashFilter::~HashFilter((HashFilter *)(this + 0x48));
  StreamTransformationFilter::~StreamTransformationFilter((StreamTransformationFilter *)this_00);
  operator_delete(this_00);
  return;
}


