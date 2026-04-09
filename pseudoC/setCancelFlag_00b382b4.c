// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCancelFlag
// Entry Point: 00b382b4
// Size: 8 bytes
// Signature: undefined __thiscall setCancelFlag(AndroidHTTPSRequest * this, bool * param_1)


/* AndroidHTTPSRequest::setCancelFlag(bool volatile*) */

void __thiscall AndroidHTTPSRequest::setCancelFlag(AndroidHTTPSRequest *this,bool *param_1)

{
  *(bool **)(this + 0x18) = param_1;
  return;
}


