// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00d1f2f0
// Size: 28 bytes
// Signature: undefined __cdecl IsolatedInitialize(NameValuePairs * param_1)


/* CryptoPP::ByteQueue::Walker::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void CryptoPP::ByteQueue::Walker::IsolatedInitialize(NameValuePairs *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


