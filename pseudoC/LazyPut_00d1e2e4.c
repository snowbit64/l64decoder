// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LazyPut
// Entry Point: 00d1e2e4
// Size: 164 bytes
// Signature: undefined __thiscall LazyPut(ByteQueue * this, uchar * param_1, ulong param_2)


/* CryptoPP::ByteQueue::LazyPut(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::ByteQueue::LazyPut(ByteQueue *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if (lVar1 != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (**(code **)(*(long *)this + 0x38))(this,*(undefined8 *)(this + 0x30),lVar1,0,1);
  }
  if ((uchar *)(*(long *)(*(long *)(this + 0x28) + 0x20) + *(long *)(*(long *)(this + 0x28) + 0x30))
      != param_1) {
    *(uchar **)(this + 0x30) = param_1;
    *(ulong *)(this + 0x38) = param_2;
    this[0x40] = (ByteQueue)0x0;
    return;
  }
  (**(code **)(*(long *)this + 0x38))(this,param_1,param_2,0,1);
  return;
}


