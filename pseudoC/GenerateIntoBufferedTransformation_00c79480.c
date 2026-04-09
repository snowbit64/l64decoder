// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateIntoBufferedTransformation
// Entry Point: 00c79480
// Size: 288 bytes
// Signature: undefined __thiscall GenerateIntoBufferedTransformation(RandomNumberGenerator * this, BufferedTransformation * param_1, basic_string * param_2, ulong param_3)


/* CryptoPP::RandomNumberGenerator::GenerateIntoBufferedTransformation(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long) */

void __thiscall
CryptoPP::RandomNumberGenerator::GenerateIntoBufferedTransformation
          (RandomNumberGenerator *this,BufferedTransformation *param_1,basic_string *param_2,
          ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined auStack_179 [258];
  undefined local_77;
  ulong local_70;
  ulong uStack_68;
  undefined *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_60 = auStack_179 + 1;
  local_58 = *(long *)(lVar2 + 0x28);
  local_77 = 1;
  uStack_68 = 0x100;
  local_70 = 0xffffffffffffffff;
  if (param_3 == 0) {
    uVar3 = 0x100;
  }
  else {
    do {
      uVar3 = param_3;
      if (uStack_68 <= param_3) {
        uVar3 = uStack_68;
      }
                    /* try { // try from 00c794f4 to 00c79523 has its CatchHandler @ 00c795a0 */
      (**(code **)(*(long *)this + 0x50))(this,local_60,uVar3);
      (**(code **)(*(long *)param_1 + 0x130))(param_1,param_2,local_60,uVar3,0,1);
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
    uVar3 = local_70;
    if (uStack_68 <= local_70) {
      uVar3 = uStack_68;
    }
    if ((auStack_179 + 1 != local_60) || (uVar3 == 0)) goto LAB_00c79570;
  }
  do {
    uVar1 = uVar3 - 1;
    auStack_179[uVar3] = 0;
    uVar3 = uVar1;
  } while (uVar1 != 0);
LAB_00c79570:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


