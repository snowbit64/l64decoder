// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddRangeToSkip
// Entry Point: 00cd6ed0
// Size: 364 bytes
// Signature: undefined __thiscall AddRangeToSkip(MeterFilter * this, uint param_1, ulong param_2, ulong param_3, bool param_4)


/* CryptoPP::MeterFilter::AddRangeToSkip(unsigned int, unsigned long, unsigned long, bool) */

void __thiscall
CryptoPP::MeterFilter::AddRangeToSkip
          (MeterFilter *this,uint param_1,ulong param_2,ulong param_3,bool param_4)

{
  long lVar1;
  undefined auVar2 [16];
  long lVar3;
  __deque_iterator _Var4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 0x58);
  uVar9 = 0;
  if (*(long *)(this + 0x60) - lVar6 != 0) {
    uVar9 = (*(long *)(this + 0x60) - lVar6 >> 3) * 0xaa - 1;
  }
  uVar8 = *(long *)(this + 0x78) + *(long *)(this + 0x70);
  if (uVar9 == uVar8) {
    std::__ndk1::
    deque<CryptoPP::MeterFilter::MessageRange,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange>>
    ::__add_back_capacity();
    lVar6 = *(long *)(this + 0x58);
    uVar8 = *(long *)(this + 0x70) + *(long *)(this + 0x78);
  }
  puVar7 = (uint *)(*(long *)(lVar6 + (uVar8 / 0xaa) * 8) + (uVar8 % 0xaa) * 0x18);
  *puVar7 = param_1;
  *(ulong *)(puVar7 + 2) = param_2;
  *(ulong *)(puVar7 + 4) = param_3;
  lVar6 = *(long *)(this + 0x78) + 1;
  *(long *)(this + 0x78) = lVar6;
  if (param_4) {
    uVar9 = *(ulong *)(this + 0x70);
    lVar1 = *(long *)(this + 0x58);
    if (*(long *)(this + 0x60) == lVar1) {
      _Var4 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9 + lVar6;
      uVar8 = SUB168(auVar2 * ZEXT816(0xc0c0c0c0c0c0c0c1),8) >> 4 & 0xffffffffffffff8;
    }
    else {
      uVar8 = ((uVar9 + lVar6) / 0xaa) * 8;
      _Var4 = (int)*(undefined8 *)(lVar1 + (uVar9 / 0xaa) * 8) + (int)(uVar9 % 0xaa) * 0x18;
    }
    std::__ndk1::
    __sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
              ((int)lVar1 + (int)(uVar9 / 0xaa << 3),_Var4,(__less *)(lVar1 + uVar8));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


