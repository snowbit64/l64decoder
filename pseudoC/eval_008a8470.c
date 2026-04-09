// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __eval
// Entry Point: 008a8470
// Size: 524 bytes
// Signature: undefined __cdecl __eval(integral_constant param_1)


/* std::__ndk1::__independent_bits_engine<std::__ndk1::mersenne_twister_engine<unsigned long, 32ul,
   624ul, 397ul, 31ul, 2567483615ul, 11ul, 4294967295ul, 7ul, 2636928640ul, 15ul, 4022730752ul,
   18ul, 1812433253ul>, unsigned int>::__eval(std::__ndk1::integral_constant<bool, true>) */

int std::__ndk1::
    __independent_bits_engine<std::__ndk1::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,unsigned_int>
    ::__eval(integral_constant param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  plVar1 = (long *)(ulong)param_1;
  lVar5 = *plVar1;
  if (plVar1[4] == 0) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    uVar7 = 0;
    uVar8 = *(ulong *)(lVar5 + 0x1380);
    do {
      do {
        uVar2 = uVar8 + 0x18d;
        lVar6 = uVar8 * 8;
        uVar8 = (uVar8 + 1) % 0x270;
        uVar3 = *(ulong *)(lVar5 + uVar8 * 8);
        *(ulong *)(lVar5 + lVar6) =
             (uVar3 & 1) * 0x9908b0df ^ *(ulong *)(lVar5 + (uVar2 % 0x270) * 8) ^
             (uVar3 & 0x7ffffffe | *(ulong *)(lVar5 + lVar6) & 0xffffffff80000000) >> 1;
        uVar2 = plVar1[5];
        uVar3 = *(ulong *)(lVar5 + *(long *)(lVar5 + 0x1380) * 8);
        *(ulong *)(lVar5 + 0x1380) = uVar8;
        uVar3 = uVar3 >> 0xb & 0xffffffff ^ uVar3;
        uVar3 = ((uint)uVar3 & 0x13a58ad) << 7 ^ uVar3;
        uVar3 = (ulong)(uint)((int)uVar3 << 0xf) & 0xefc60000 ^ uVar3;
        uVar3 = uVar3 ^ uVar3 >> 0x12;
      } while (uVar2 <= uVar3);
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 << (ulong)((uint)plVar1[2] & 0x1f);
      uVar2 = plVar1[4];
      if (0x1f < (ulong)plVar1[2]) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + (*(uint *)(plVar1 + 7) & (uint)uVar3);
    } while (uVar7 < uVar2);
    lVar5 = *plVar1;
  }
  if (uVar2 < (ulong)plVar1[3]) {
    uVar7 = *(ulong *)(lVar5 + 0x1380);
    do {
      do {
        uVar8 = uVar7 + 0x18d;
        lVar6 = uVar7 * 8;
        uVar7 = (uVar7 + 1) % 0x270;
        uVar3 = *(ulong *)(lVar5 + uVar7 * 8);
        *(ulong *)(lVar5 + lVar6) =
             (uVar3 & 1) * 0x9908b0df ^ *(ulong *)(lVar5 + (uVar8 % 0x270) * 8) ^
             (uVar3 & 0x7ffffffe | *(ulong *)(lVar5 + lVar6) & 0xffffffff80000000) >> 1;
        uVar8 = *(ulong *)(lVar5 + *(long *)(lVar5 + 0x1380) * 8);
        *(ulong *)(lVar5 + 0x1380) = uVar7;
        uVar8 = uVar8 >> 0xb & 0xffffffff ^ uVar8;
        uVar8 = ((uint)uVar8 & 0x13a58ad) << 7 ^ uVar8;
        uVar8 = (ulong)(uint)((int)uVar8 << 0xf) & 0xefc60000 ^ uVar8;
        uVar8 = uVar8 ^ uVar8 >> 0x12;
      } while ((ulong)plVar1[6] <= uVar8);
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 << (ulong)((int)plVar1[2] + 1U & 0x1f);
      if (0x1e < (ulong)plVar1[2]) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + (*(uint *)(plVar1 + 8) & (uint)uVar8);
    } while (uVar2 < (ulong)plVar1[3]);
  }
  return iVar4;
}


