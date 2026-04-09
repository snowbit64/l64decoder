// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008bdbdc
// Size: 644 bytes
// Signature: undefined __thiscall __append(vector<SoundPlayer::AmbientElement,std::__ndk1::allocator<SoundPlayer::AmbientElement>> * this, ulong param_1)


/* std::__ndk1::vector<SoundPlayer::AmbientElement,
   std::__ndk1::allocator<SoundPlayer::AmbientElement> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<SoundPlayer::AmbientElement,std::__ndk1::allocator<SoundPlayer::AmbientElement>>
::__append(vector<SoundPlayer::AmbientElement,std::__ndk1::allocator<SoundPlayer::AmbientElement>>
           *this,ulong param_1)

{
  size_t sVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  void *__s;
  void *__s_00;
  void *pvVar10;
  byte *pbVar11;
  void *pvVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  __s = *(void **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * -0x71c71c71c71c71c7) < param_1) {
    pvVar12 = *(void **)this;
    lVar6 = (long)__s - (long)pvVar12 >> 3;
    uVar2 = lVar6 * -0x71c71c71c71c71c7 + param_1;
    if (0x38e38e38e38e38e < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - (long)pvVar12 >> 3;
    uVar9 = lVar4 * 0x1c71c71c71c71c72;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar2 = 0x38e38e38e38e38e;
    }
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar2 * 0x48);
    }
    __s_00 = (void *)((long)pvVar3 + lVar6 * 8);
    pvVar3 = (void *)((long)pvVar3 + uVar2 * 0x48);
    sVar1 = ((param_1 * 0x48 - 0x48) / 0x48) * 0x48 + 0x48;
    memset(__s_00,0,sVar1);
    lVar6 = (long)__s_00 + sVar1;
    if (__s == pvVar12) {
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar6;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        uVar7 = *(undefined8 *)((long)__s + -0x38);
        uVar15 = *(undefined8 *)((long)__s + -0x40);
        uVar14 = *(undefined8 *)((long)__s + -0x48);
        *(undefined8 *)((long)__s_00 + -0x28) = 0;
        *(undefined8 *)((long)__s_00 + -0x20) = 0;
        *(undefined8 *)((long)__s_00 + -0x38) = uVar7;
        *(undefined8 *)((long)__s_00 + -0x40) = uVar15;
        *(undefined8 *)((long)__s_00 + -0x48) = uVar14;
        uVar7 = *(undefined8 *)((long)__s + -0x28);
        *(undefined8 *)((long)__s_00 + -0x30) = *(undefined8 *)((long)__s + -0x30);
        *(undefined8 *)((long)__s_00 + -0x28) = uVar7;
        *(undefined8 *)((long)__s_00 + -0x20) = *(undefined8 *)((long)__s + -0x20);
        pvVar8 = (void *)((long)__s + -0x48);
        *(undefined8 *)((long)__s + -0x30) = 0;
        *(undefined8 *)((long)__s + -0x28) = 0;
        *(undefined8 *)((long)__s + -0x20) = 0;
        uVar14 = *(undefined8 *)((long)__s + -0x10);
        uVar7 = *(undefined8 *)((long)__s + -0x18);
        pvVar10 = (void *)((long)__s_00 + -0x48);
        *(undefined8 *)((long)__s_00 + -8) = *(undefined8 *)((long)__s + -8);
        *(undefined8 *)((long)__s_00 + -0x10) = uVar14;
        *(undefined8 *)((long)__s_00 + -0x18) = uVar7;
        __s = pvVar8;
        __s_00 = pvVar10;
      } while (pvVar8 != pvVar12);
      __s = *(void **)this;
      pvVar12 = *(void **)(this + 8);
      *(void **)this = pvVar10;
      *(long *)(this + 8) = lVar6;
      *(void **)(this + 0x10) = pvVar3;
      while (pvVar3 = pvVar12, pvVar3 != __s) {
        pbVar11 = *(byte **)((long)pvVar3 + -0x30);
        pvVar12 = (void *)((long)pvVar3 + -0x48);
        if (pbVar11 != (byte *)0x0) {
          pbVar5 = *(byte **)((long)pvVar3 + -0x28);
          pbVar13 = pbVar11;
          if (pbVar5 != pbVar11) {
            do {
              pbVar13 = pbVar5 + -0x68;
              if ((*pbVar13 & 1) != 0) {
                operator_delete(*(void **)(pbVar5 + -0x58));
              }
              pbVar5 = pbVar13;
            } while (pbVar13 != pbVar11);
            pbVar13 = *(byte **)((long)pvVar3 + -0x30);
          }
          *(byte **)((long)pvVar3 + -0x28) = pbVar11;
          operator_delete(pbVar13);
        }
      }
    }
    if (__s != (void *)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      sVar1 = ((param_1 * 0x48 - 0x48) / 0x48) * 0x48 + 0x48;
      memset(__s,0,sVar1);
      __s = (void *)((long)__s + sVar1);
    }
    *(void **)(this + 8) = __s;
  }
  return;
}


