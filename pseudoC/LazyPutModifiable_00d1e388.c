// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LazyPutModifiable
// Entry Point: 00d1e388
// Size: 96 bytes
// Signature: undefined __thiscall LazyPutModifiable(ByteQueue * this, uchar * param_1, ulong param_2)


/* CryptoPP::ByteQueue::LazyPutModifiable(unsigned char*, unsigned long) */

void __thiscall CryptoPP::ByteQueue::LazyPutModifiable(ByteQueue *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if (lVar1 != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (**(code **)(*(long *)this + 0x38))(this,*(undefined8 *)(this + 0x30),lVar1,0,1);
  }
  *(uchar **)(this + 0x30) = param_1;
  *(ulong *)(this + 0x38) = param_2;
  this[0x40] = (ByteQueue)0x1;
  return;
}


