// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LocalFileListChannel
// Entry Point: 008bef44
// Size: 36 bytes
// Signature: undefined __thiscall ~LocalFileListChannel(LocalFileListChannel * this)


/* LocalFileListChannel::~LocalFileListChannel() */

void __thiscall LocalFileListChannel::~LocalFileListChannel(LocalFileListChannel *this)

{
  ~LocalFileListChannel(this);
  operator_delete(this);
  return;
}


