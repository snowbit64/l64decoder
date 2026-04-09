// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateIntoBufferedTransformation
// Entry Point: 00d1faf8
// Size: 324 bytes
// Signature: undefined __cdecl GenerateIntoBufferedTransformation(BufferedTransformation * param_1, basic_string * param_2, ulong param_3)


/* CryptoPP::RandomPool::GenerateIntoBufferedTransformation(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long) */

void CryptoPP::RandomPool::GenerateIntoBufferedTransformation
               (BufferedTransformation *param_1,basic_string *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  time_t tVar4;
  ulong in_x3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (in_x3 != 0) {
    if (param_1[0x90] == (BufferedTransformation)0x0) {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x38))
                (*(long **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),0x20,&DAT_0211f5e0);
    }
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    ppuVar9 = &PTR_GetCurrentTimerValue_0100c858;
    lVar3 = Timer::GetCurrentTimerValue();
    **(long **)(param_1 + 0x38) = **(long **)(param_1 + 0x38) + lVar3;
    tVar4 = time((time_t *)0x0);
    *(long *)(*(long *)(param_1 + 0x38) + 8) = *(long *)(*(long *)(param_1 + 0x38) + 8) + tVar4;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 8) + 0x28))
                ((long *)(*(long *)(param_1 + 0x88) + 8),*(undefined8 *)(param_1 + 0x38),0,
                 *(undefined8 *)(param_1 + 0x38));
      uVar1 = in_x3;
      if (0xf < in_x3) {
        uVar1 = 0x10;
      }
      (**(code **)(*(long *)param_2 + 0x130))
                (param_2,param_3,*(undefined8 *)(param_1 + 0x38),uVar1,0,1,in_x6,in_x7,uVar6,uVar7,
                 uVar8,ppuVar9,uVar10,uVar11,uVar12);
      in_x3 = in_x3 - uVar1;
    } while (in_x3 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


