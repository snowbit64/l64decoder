// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMultiTapDelay
// Entry Point: 00b13350
// Size: 260 bytes
// Signature: undefined __thiscall createMultiTapDelay(FDNReverb * this, MultiTapDelay * param_1, float param_2, uint param_3)


/* FDNReverb::createMultiTapDelay(FDNReverb::MultiTapDelay&, float, unsigned int) */

void __thiscall
FDNReverb::createMultiTapDelay(FDNReverb *this,MultiTapDelay *param_1,float param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  void *__s;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar5 = (int)((param_2 + 0.001) * *(float *)this);
  if (iVar5 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = iVar5 - 1U | iVar5 - 1U >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
  }
  __s = operator_new__((ulong)uVar6 << 2);
  *(void **)param_1 = __s;
  *(int *)(param_1 + 8) = iVar5;
  *(uint *)(param_1 + 0xc) = uVar6 - 1;
  memset(__s,0,(ulong)uVar6 << 2);
  *(uint *)(param_1 + 0x10) = param_3;
  local_4c = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  uVar3 = (ulong)param_3;
  uVar4 = *(long *)(param_1 + 0x20) - lVar1 >> 2;
  if (uVar4 < uVar3) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(param_1 + 0x18),
               uVar3 - uVar4,&local_4c);
  }
  else if (uVar3 < uVar4) {
    *(ulong *)(param_1 + 0x20) = lVar1 + uVar3 * 4;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


