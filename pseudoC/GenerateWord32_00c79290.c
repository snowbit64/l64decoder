// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateWord32
// Entry Point: 00c79290
// Size: 216 bytes
// Signature: undefined __thiscall GenerateWord32(RandomNumberGenerator * this, uint param_1, uint param_2)


/* CryptoPP::RandomNumberGenerator::GenerateWord32(unsigned int, unsigned int) */

int __thiscall
CryptoPP::RandomNumberGenerator::GenerateWord32
          (RandomNumberGenerator *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar3 = param_2 - param_1;
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0x20;
    do {
      uVar2 = uVar6 + uVar5 >> 1;
      uVar1 = uVar2;
      if (uVar3 >> (ulong)(uVar2 & 0x1f) != 0) {
        uVar1 = uVar5;
        uVar6 = uVar2;
      }
      uVar5 = uVar1;
    } while (1 < uVar1 - uVar6);
    uVar6 = 0xffffffff;
    if (uVar1 < 0x20) {
      uVar6 = ~(-1 << (ulong)(uVar1 & 0x1f));
    }
  }
  do {
    (**(code **)(*(long *)this + 0x50))(this,&local_4c,4);
    local_4c = local_4c & uVar6;
  } while (uVar3 < local_4c);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_4c + param_1;
}


