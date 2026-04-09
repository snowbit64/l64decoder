// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PeekWord32
// Entry Point: 00c7b134
// Size: 180 bytes
// Signature: undefined __thiscall PeekWord32(BufferedTransformation * this, uint * param_1, ByteOrder param_2)


/* CryptoPP::BufferedTransformation::PeekWord32(unsigned int&, CryptoPP::ByteOrder) const */

void __thiscall
CryptoPP::BufferedTransformation::PeekWord32
          (BufferedTransformation *this,uint *param_1,ByteOrder param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  (**(code **)(*(long *)this + 0xc0))(this,&local_3c,4);
  if (param_2 == 0) {
    uVar3 = local_3c & 0xff000000 | (uint)local_3c._2_1_ << 0x10;
    puVar4 = &local_3c;
    bVar1 = local_3c._1_1_;
  }
  else {
    uVar3 = local_3c << 0x18 | (uint)local_3c._1_1_ << 0x10;
    puVar4 = (undefined4 *)((ulong)&local_3c | 3);
    bVar1 = local_3c._2_1_;
  }
  *param_1 = uVar3 | (uint)bVar1 << 8 | (uint)*(byte *)puVar4;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


