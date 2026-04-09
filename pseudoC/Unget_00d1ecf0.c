// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unget
// Entry Point: 00d1ecf0
// Size: 180 bytes
// Signature: undefined __thiscall Unget(ByteQueue * this, uchar * param_1, ulong param_2)


/* CryptoPP::ByteQueue::Unget(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::ByteQueue::Unget(ByteQueue *this,uchar *param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  undefined8 *puVar2;
  uchar *__dest;
  undefined8 uVar3;
  long lVar4;
  ulong __n_00;
  
  lVar4 = *(long *)(this + 0x20);
  uVar1 = *(ulong *)(lVar4 + 0x28);
  __n = uVar1;
  if (param_2 <= uVar1) {
    __n = param_2;
  }
  __n_00 = param_2 - __n;
  *(ulong *)(lVar4 + 0x28) = uVar1 - __n;
  memcpy((void *)(*(long *)(lVar4 + 0x20) + (uVar1 - __n)),param_1 + __n_00,__n);
  if (__n_00 != 0) {
    puVar2 = (undefined8 *)operator_new(0x38);
    puVar2[2] = 0xffffffffffffffff;
    puVar2[3] = __n_00;
                    /* try { // try from 00d1ed4c to 00d1ed53 has its CatchHandler @ 00d1eda4 */
    __dest = (uchar *)UnalignedAllocate(__n_00);
    uVar3 = *(undefined8 *)(this + 0x20);
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[4] = __dest;
    *(undefined8 **)(this + 0x20) = puVar2;
    *puVar2 = uVar3;
    if (param_1 != (uchar *)0x0) {
      if (__dest == param_1) {
        lVar4 = 0;
      }
      else {
        memcpy(__dest,param_1,__n_00);
        lVar4 = puVar2[6];
      }
      puVar2[6] = lVar4 + __n_00;
    }
  }
  return;
}


