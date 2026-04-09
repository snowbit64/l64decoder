// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PeekWord16
// Entry Point: 00c7b0b0
// Size: 132 bytes
// Signature: undefined __thiscall PeekWord16(BufferedTransformation * this, ushort * param_1, ByteOrder param_2)


/* CryptoPP::BufferedTransformation::PeekWord16(unsigned short&, CryptoPP::ByteOrder) const */

void __thiscall
CryptoPP::BufferedTransformation::PeekWord16
          (BufferedTransformation *this,ushort *param_1,ByteOrder param_2)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  undefined2 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  (**(code **)(*(long *)this + 0xc0))(this,&local_3c,2);
  uVar1 = local_3c & 0xff;
  bVar3 = local_3c._1_1_;
  if (param_2 != 0) {
    uVar1 = (ushort)local_3c._1_1_;
    bVar3 = (byte)local_3c;
  }
  *param_1 = uVar1 | (ushort)bVar3 << 8;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


