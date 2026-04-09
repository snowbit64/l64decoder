// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 006d8fb8
// Size: 396 bytes
// Signature: undefined __thiscall __append(vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>> * this, ulong param_1)


/* std::__ndk1::vector<Console::HistoryEntry, std::__ndk1::allocator<Console::HistoryEntry>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>>::__append
          (vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>> *this,
          ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *__s;
  long lVar7;
  void *__s_00;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  __s = *(byte **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 5) < param_1) {
    pbVar9 = *(byte **)this;
    lVar7 = (long)__s - (long)pbVar9 >> 5;
    uVar1 = lVar7 + param_1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = *(long *)(this + 0x10) - (long)pbVar9;
    uVar5 = (long)uVar4 >> 4;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 << 5);
    }
    __s_00 = (void *)((long)pvVar3 + lVar7 * 0x20);
    pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x20);
    memset(__s_00,0,param_1 * 0x20);
    pvVar2 = (void *)((long)__s_00 + param_1 * 0x20);
    if (__s == pbVar9) {
      *(void **)this = __s_00;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        uVar11 = *(undefined8 *)(__s + -0x18);
        uVar10 = *(undefined8 *)(__s + -0x20);
        *(undefined8 *)((long)__s_00 + -0x10) = *(undefined8 *)(__s + -0x10);
        pbVar6 = __s + -0x20;
        *(undefined8 *)((long)__s_00 + -0x18) = uVar11;
        *(undefined8 *)((long)__s_00 + -0x20) = uVar10;
        pvVar8 = (void *)((long)__s_00 + -0x20);
        *(undefined8 *)(__s + -0x18) = 0;
        *(undefined8 *)(__s + -0x10) = 0;
        *(undefined8 *)(__s + -0x20) = 0;
        *(undefined4 *)((long)__s_00 + -8) = *(undefined4 *)(__s + -8);
        __s = pbVar6;
        __s_00 = pvVar8;
      } while (pbVar6 != pbVar9);
      __s = *(byte **)this;
      pbVar9 = *(byte **)(this + 8);
      *(void **)this = pvVar8;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = pvVar3;
      while (pbVar6 = pbVar9, pbVar6 != __s) {
        pbVar9 = pbVar6 + -0x20;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -0x10));
        }
      }
    }
    if (__s != (byte *)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      memset(__s,0,param_1 * 0x20);
      __s = __s + param_1 * 0x20;
    }
    *(byte **)(this + 8) = __s;
  }
  return;
}


