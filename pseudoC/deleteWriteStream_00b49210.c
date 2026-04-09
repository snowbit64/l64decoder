// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteWriteStream
// Entry Point: 00b49210
// Size: 48 bytes
// Signature: undefined __thiscall deleteWriteStream(ENetNetworkManager * this, GsBitStream * param_1)


/* ENetNetworkManager::deleteWriteStream(GsBitStream*) */

void __thiscall ENetNetworkManager::deleteWriteStream(ENetNetworkManager *this,GsBitStream *param_1)

{
  if (param_1 != (GsBitStream *)0x0) {
    GsBitStream::~GsBitStream(param_1);
    operator_delete(param_1);
    return;
  }
  return;
}


