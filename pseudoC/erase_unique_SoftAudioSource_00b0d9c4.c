// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<SoftAudioSource*>
// Entry Point: 00b0d9c4
// Size: 324 bytes
// Signature: ulong __thiscall __erase_unique<SoftAudioSource*>(__hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>> * this, SoftAudioSource * * param_1)


/* unsigned long std::__ndk1::__hash_table<SoftAudioSource*, std::__ndk1::hash<SoftAudioSource*>,
   std::__ndk1::equal_to<SoftAudioSource*>, std::__ndk1::allocator<SoftAudioSource*>
   >::__erase_unique<SoftAudioSource*>(SoftAudioSource* const&) */

ulong __thiscall
std::__ndk1::
__hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
::__erase_unique<SoftAudioSource*>
          (__hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
           *this,SoftAudioSource **param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  SoftAudioSource *pSVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long **pplVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  void *local_40;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 8);
  if (uVar5 != 0) {
    pSVar6 = *param_1;
    uVar13 = NEON_cnt(uVar5,1);
    uVar7 = ((ulong)(uint)((int)pSVar6 << 3) + 8 ^ (ulong)pSVar6 >> 0x20) * -0x622015f714c7d297;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = (uVar7 ^ (ulong)pSVar6 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar9 = uVar7 & uVar5 - 1;
    }
    else {
      uVar9 = uVar7;
      if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar9 = uVar7 - uVar9 * uVar5;
      }
    }
    pplVar10 = *(long ***)(*(long *)this + uVar9 * 8);
    if ((pplVar10 != (long **)0x0) && (plVar3 = *pplVar10, plVar3 != (long *)0x0)) {
      do {
        uVar11 = plVar3[1];
        if (uVar11 == uVar7) {
          if ((SoftAudioSource *)plVar3[2] == pSVar6) {
            remove((__hash_const_iterator)this);
            if (local_40 != (void *)0x0) {
              operator_delete(local_40);
            }
            uVar5 = 1;
            goto LAB_00b0dac4;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar1 * uVar5;
          }
          if (uVar11 != uVar9) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  uVar5 = 0;
LAB_00b0dac4:
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


