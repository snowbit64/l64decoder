// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OpenPGPDecode
// Entry Point: 00cfa184
// Size: 196 bytes
// Signature: undefined __thiscall OpenPGPDecode(Integer * this, BufferedTransformation * param_1)


/* CryptoPP::Integer::OpenPGPDecode(CryptoPP::BufferedTransformation&) */

void __thiscall CryptoPP::Integer::OpenPGPDecode(Integer *this,BufferedTransformation *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  OpenPGPDecodeErr *this_00;
  ulong uVar4;
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = BufferedTransformation::GetWord16(param_1,local_3c,1);
  if (lVar2 == 2) {
    uVar3 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
    uVar4 = (ulong)local_3c[0] + 7 >> 3;
    if (uVar4 <= uVar3) {
      Decode(this,param_1,uVar4,0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  this_00 = (OpenPGPDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfa228 to 00cfa22b has its CatchHandler @ 00cfa248 */
  OpenPGPDecodeErr::OpenPGPDecodeErr(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&OpenPGPDecodeErr::typeinfo,Exception::~Exception);
}


