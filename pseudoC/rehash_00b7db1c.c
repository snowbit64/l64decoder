// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __rehash
// Entry Point: 00b7db1c
// Size: 384 bytes
// Signature: undefined __thiscall __rehash(__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>> * this, ulong param_1)


/* std::__ndk1::__hash_table<unsigned int, std::__ndk1::hash<unsigned int>,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::allocator<unsigned int> >::__rehash(unsigned
   long) */

void __thiscall
std::__ndk1::
__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
::__rehash(__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    pplVar5 = *(long ***)(this + 0x10);
    if (pplVar5 != (long **)0x0) {
      plVar7 = pplVar5[1];
      uVar12 = NEON_cnt(param_1,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar4 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar4 < 2) {
        plVar7 = (long *)((ulong)plVar7 & param_1 - 1);
      }
      else if (param_1 <= plVar7) {
        uVar1 = 0;
        if (param_1 != 0) {
          uVar1 = (ulong)plVar7 / param_1;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * param_1);
      }
      *(__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
        **)(*(long *)this + (long)plVar7 * 8) = this + 0x10;
      if (*pplVar5 != (long *)0x0) {
        pplVar6 = (long **)*pplVar5;
        do {
          plVar8 = pplVar6[1];
          if (uVar4 < 2) {
            plVar8 = (long *)((ulong)plVar8 & param_1 - 1);
          }
          else if (param_1 <= plVar8) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = (ulong)plVar8 / param_1;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * param_1);
          }
          if (plVar8 != plVar7) {
            pplVar10 = pplVar6;
            if (*(long *)(*(long *)this + (long)plVar8 * 8) == 0) {
              *(long ***)(*(long *)this + (long)plVar8 * 8) = pplVar5;
              plVar7 = plVar8;
            }
            else {
              do {
                pplVar9 = pplVar10;
                pplVar10 = (long **)*pplVar9;
                if (pplVar10 == (long **)0x0) break;
              } while (*(int *)(pplVar6 + 2) == *(int *)(pplVar10 + 2));
              *pplVar5 = (long *)pplVar10;
              *pplVar9 = **(long ***)(*(long *)this + (long)plVar8 * 8);
              **(long ***)(*(long *)this + (long)plVar8 * 8) = (long *)pplVar6;
              pplVar6 = pplVar5;
            }
          }
          pplVar10 = (long **)*pplVar6;
          pplVar5 = pplVar6;
          pplVar6 = pplVar10;
        } while (pplVar10 != (long **)0x0);
      }
    }
  }
  return;
}


