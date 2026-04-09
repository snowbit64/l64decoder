// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008bde60
// Size: 576 bytes
// Signature: undefined __thiscall __append(vector<SoundPlayer::AmbientSample,std::__ndk1::allocator<SoundPlayer::AmbientSample>> * this, ulong param_1)


/* std::__ndk1::vector<SoundPlayer::AmbientSample,
   std::__ndk1::allocator<SoundPlayer::AmbientSample> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<SoundPlayer::AmbientSample,std::__ndk1::allocator<SoundPlayer::AmbientSample>>::
__append(vector<SoundPlayer::AmbientSample,std::__ndk1::allocator<SoundPlayer::AmbientSample>> *this
        ,ulong param_1)

{
  size_t sVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *__s;
  void *__s_00;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  __s = *(byte **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * 0x4ec4ec4ec4ec4ec5) < param_1) {
    pbVar9 = *(byte **)this;
    lVar5 = (long)__s - (long)pbVar9 >> 3;
    uVar2 = lVar5 * 0x4ec4ec4ec4ec4ec5 + param_1;
    if (0x276276276276276 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - (long)pbVar9 >> 3;
    uVar7 = lVar4 * -0x6276276276276276;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5)) {
      uVar2 = 0x276276276276276;
    }
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x276276276276276 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar2 * 0x68);
    }
    __s_00 = (void *)((long)pvVar3 + lVar5 * 8);
    pvVar3 = (void *)((long)pvVar3 + uVar2 * 0x68);
    sVar1 = ((param_1 * 0x68 - 0x68) / 0x68) * 0x68 + 0x68;
    memset(__s_00,0,sVar1);
    lVar5 = (long)__s_00 + sVar1;
    if (__s == pbVar9) {
      *(void **)this = __s_00;
      *(long *)(this + 8) = lVar5;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        uVar11 = *(undefined8 *)(__s + -0x60);
        uVar10 = *(undefined8 *)(__s + -0x68);
        *(undefined8 *)((long)__s_00 + -0x58) = *(undefined8 *)(__s + -0x58);
        pbVar6 = __s + -0x68;
        *(undefined8 *)((long)__s_00 + -0x60) = uVar11;
        *(undefined8 *)((long)__s_00 + -0x68) = uVar10;
        uVar14 = *(undefined8 *)(__s + -0x28);
        uVar13 = *(undefined8 *)(__s + -0x30);
        uVar10 = *(undefined8 *)(__s + -0x20);
        *(undefined8 *)(__s + -0x60) = 0;
        *(undefined8 *)(__s + -0x58) = 0;
        *(undefined8 *)(__s + -0x68) = 0;
        uVar12 = *(undefined8 *)(__s + -0xf);
        uVar11 = *(undefined8 *)(__s + -0x17);
        uVar16 = *(undefined8 *)(__s + -0x38);
        uVar15 = *(undefined8 *)(__s + -0x40);
        *(undefined8 *)((long)__s_00 + -0x18) = *(undefined8 *)(__s + -0x18);
        *(undefined8 *)((long)__s_00 + -0x20) = uVar10;
        *(undefined8 *)((long)__s_00 + -0xf) = uVar12;
        *(undefined8 *)((long)__s_00 + -0x17) = uVar11;
        pvVar8 = (void *)((long)__s_00 + -0x68);
        uVar11 = *(undefined8 *)(__s + -0x48);
        uVar10 = *(undefined8 *)(__s + -0x50);
        *(undefined8 *)((long)__s_00 + -0x28) = uVar14;
        *(undefined8 *)((long)__s_00 + -0x30) = uVar13;
        *(undefined8 *)((long)__s_00 + -0x48) = uVar11;
        *(undefined8 *)((long)__s_00 + -0x50) = uVar10;
        *(undefined8 *)((long)__s_00 + -0x38) = uVar16;
        *(undefined8 *)((long)__s_00 + -0x40) = uVar15;
        __s = pbVar6;
        __s_00 = pvVar8;
      } while (pbVar6 != pbVar9);
      __s = *(byte **)this;
      pbVar9 = *(byte **)(this + 8);
      *(void **)this = pvVar8;
      *(long *)(this + 8) = lVar5;
      *(void **)(this + 0x10) = pvVar3;
      while (pbVar6 = pbVar9, pbVar6 != __s) {
        pbVar9 = pbVar6 + -0x68;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -0x58));
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
      sVar1 = ((param_1 * 0x68 - 0x68) / 0x68) * 0x68 + 0x68;
      memset(__s,0,sVar1);
      __s = __s + sVar1;
    }
    *(byte **)(this + 8) = __s;
  }
  return;
}


