// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidHTTPSRequest
// Entry Point: 00b380c8
// Size: 164 bytes
// Signature: undefined __thiscall ~AndroidHTTPSRequest(AndroidHTTPSRequest * this)


/* AndroidHTTPSRequest::~AndroidHTTPSRequest() */

void __thiscall AndroidHTTPSRequest::~AndroidHTTPSRequest(AndroidHTTPSRequest *this)

{
  AndroidHTTPSRequest AVar1;
  
  *(undefined ***)this = &PTR__AndroidHTTPSRequest_00fe9ad0;
  if (((byte)this[0x80] & 1) == 0) {
    AVar1 = this[0x68];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    AVar1 = this[0x68];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    AVar1 = this[0x50];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    AVar1 = this[0x38];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    AVar1 = this[0x20];
  }
  if (((byte)AVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x30));
  return;
}


