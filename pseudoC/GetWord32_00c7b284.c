// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetWord32
// Entry Point: 00c7b284
// Size: 212 bytes
// Signature: undefined __thiscall GetWord32(BufferedTransformation * this, uint * param_1, ByteOrder param_2)


/* CryptoPP::BufferedTransformation::GetWord32(unsigned int&, CryptoPP::ByteOrder) */

void __thiscall
CryptoPP::BufferedTransformation::GetWord32
          (BufferedTransformation *this,uint *param_1,ByteOrder param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = 0;
  uVar3 = (**(code **)(*(long *)this + 0xc0))(this,&local_4c,4);
  if (param_2 == 0) {
    uVar4 = local_4c & 0xff000000 | (uint)local_4c._2_1_ << 0x10;
    puVar5 = &local_4c;
    bVar1 = local_4c._1_1_;
  }
  else {
    uVar4 = local_4c << 0x18 | (uint)local_4c._1_1_ << 0x10;
    puVar5 = (undefined4 *)((ulong)&local_4c | 3);
    bVar1 = local_4c._2_1_;
  }
  lVar6 = *(long *)this;
  *param_1 = uVar4 | (uint)bVar1 << 8 | (uint)*(byte *)puVar5;
  (**(code **)(lVar6 + 200))(this,uVar3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


