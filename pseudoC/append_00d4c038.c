// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00d4c038
// Size: 556 bytes
// Signature: undefined __thiscall __append(vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>> * this, ulong param_1)


/* std::__ndk1::vector<std::__ndk1::set<long, std::__ndk1::less<long>, std::__ndk1::allocator<long>
   >, std::__ndk1::allocator<std::__ndk1::set<long, std::__ndk1::less<long>,
   std::__ndk1::allocator<long> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>>
::__append(vector<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>,std::__ndk1::allocator<std::__ndk1::set<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *p_Var3;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *p_Var4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - lVar10 >> 3) * -0x5555555555555555) < param_1) {
    lVar10 = (lVar10 - *(long *)this) / 0x18;
    uVar1 = lVar10 + param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar1 * 0x18);
    }
    lVar6 = param_1 * 0x18;
    pvVar7 = (void *)((long)pvVar5 + lVar10 * 0x18);
    pvVar2 = (void *)((long)pvVar7 + lVar6);
    puVar8 = (undefined8 *)((long)pvVar7 + 8);
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      lVar6 = lVar6 + -0x18;
      puVar8[-1] = puVar8;
      puVar8 = puVar8 + 3;
    } while (lVar6 != 0);
    p_Var3 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)this;
    p_Var4 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)(this + 8);
    pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x18);
    if (p_Var4 == p_Var3) {
      *(void **)this = pvVar7;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = pvVar5;
    }
    else {
      lVar10 = 0;
      do {
        while( true ) {
          lVar6 = lVar10;
          *(undefined8 *)((long)pvVar7 + lVar6 + -0x18) = *(undefined8 *)(p_Var4 + lVar6 + -0x18);
          lVar10 = *(long *)(p_Var4 + lVar6 + -0x10);
          *(long *)((long)pvVar7 + lVar6 + -0x10) = lVar10;
          lVar11 = *(long *)(p_Var4 + lVar6 + -8);
          *(long *)((long)pvVar7 + lVar6 + -8) = lVar11;
          if (lVar11 != 0) break;
          *(long *)((long)pvVar7 + lVar6 + -0x18) = (long)pvVar7 + lVar6 + -0x10;
          lVar10 = lVar6 + -0x18;
          if (p_Var4 + lVar6 + -0x18 == p_Var3) goto LAB_00d4c1fc;
        }
        *(long *)(lVar10 + 0x10) = (long)pvVar7 + lVar6 + -0x10;
        *(undefined8 *)(p_Var4 + lVar6 + -0x10) = 0;
        *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)
         (p_Var4 + lVar6 + -0x18) = p_Var4 + lVar6 + -0x10;
        *(undefined8 *)(p_Var4 + lVar6 + -8) = 0;
        lVar10 = lVar6 + -0x18;
      } while (p_Var4 + lVar6 + -0x18 != p_Var3);
LAB_00d4c1fc:
      *(void **)(this + 0x10) = pvVar5;
      p_Var3 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)this;
      p_Var4 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)(this + 8);
      *(long *)this = (long)pvVar7 + lVar6 + -0x18;
      *(void **)(this + 8) = pvVar2;
      while (p_Var4 != p_Var3) {
        __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
                  (p_Var4 + -0x18,*(__tree_node **)(p_Var4 + -0x10));
        p_Var4 = p_Var4 + -0x18;
      }
    }
    if (p_Var3 != (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0) {
      operator_delete(p_Var3);
      return;
    }
  }
  else {
    if (param_1 == 0) {
      *(long *)(this + 8) = lVar10;
      return;
    }
    lVar6 = param_1 * 0x18;
    puVar8 = (undefined8 *)(lVar10 + 8);
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      lVar6 = lVar6 + -0x18;
      puVar8[-1] = puVar8;
      puVar8 = puVar8 + 3;
    } while (lVar6 != 0);
    *(ulong *)(this + 8) = lVar10 + param_1 * 0x18;
  }
  return;
}


