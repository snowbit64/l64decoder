// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERLengthDecode
// Entry Point: 00ccc338
// Size: 304 bytes
// Signature: undefined __cdecl BERLengthDecode(BufferedTransformation * param_1, ulong * param_2, bool * param_3)


/* CryptoPP::BERLengthDecode(CryptoPP::BufferedTransformation&, unsigned long&, bool&) */

void CryptoPP::BERLengthDecode(BufferedTransformation *param_1,ulong *param_2,bool *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  BERDecodeErr *this;
  uint uVar4;
  byte local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_4c);
  if (uVar2 != 0) {
    if (-1 < (char)local_4c[0]) {
      uVar2 = 1;
      *param_2 = (ulong)local_4c[0];
      *param_3 = true;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00ccc43c;
    }
    uVar4 = local_4c[0] & 0x7f;
    if ((local_4c[0] & 0x7f) == 0) {
      uVar2 = 1;
      *param_3 = false;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00ccc43c;
    }
    uVar2 = 0;
    *param_2 = 0;
    *param_3 = true;
    do {
      if (uVar2 >> 0x38 != 0) {
        this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc44c to 00ccc44f has its CatchHandler @ 00ccc468 */
        BERDecodeErr::BERDecodeErr(this);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
      }
      lVar3 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_4c);
      if (lVar3 == 0) break;
      uVar4 = uVar4 - 1;
      uVar2 = (ulong)local_4c[0] | *param_2 << 8;
      *param_2 = uVar2;
    } while (uVar4 != 0);
    uVar2 = (ulong)(lVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00ccc43c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


