// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b0e0e8
// Size: 752 bytes
// Signature: undefined __thiscall init(SoftAudioBuffer * this, AudioBufferDesc * param_1, SoftAudioDevice * param_2, Soloud * param_3)


/* SoftAudioBuffer::init(AudioBufferDesc const&, SoftAudioDevice*, SoLoud::Soloud*) */

void __thiscall
SoftAudioBuffer::init
          (SoftAudioBuffer *this,AudioBufferDesc *param_1,SoftAudioDevice *param_2,Soloud *param_3)

{
  uint uVar1;
  SoftAudioBuffer SVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  char *__dest;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_80;
  int iStack_7c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *(SoftAudioDevice **)(this + 0x40) = param_2;
  *(Soloud **)(this + 0x48) = param_3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x58) = uVar9;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x28),(basic_string *)(param_1 + 0x28));
  SVar2 = *(SoftAudioBuffer *)(param_1 + 4);
  *(undefined4 *)(this + 0x80) = 0;
  this[0xc] = SVar2;
  uVar12 = *(uint *)param_1;
  if (uVar12 == 7) {
    uVar12 = *(uint *)(param_1 + 0x48);
    __dest = (char *)operator_new__((ulong)uVar12);
    *(char **)(this + 0x60) = __dest;
    memcpy(__dest,*(void **)(param_1 + 0x40),(ulong)uVar12);
    uVar7 = createDecoders(this,__dest,uVar12,4);
    if ((uVar7 & 1) == 0) {
      uVar9 = 0;
      goto LAB_00b0e27c;
    }
    Mutex::enterCriticalSection();
                    /* try { // try from 00b0e1a8 to 00b0e1ab has its CatchHandler @ 00b0e3e0 */
    uVar6 = stb_vorbis_stream_length_in_samples(**(undefined8 **)(this + 0x68));
    *(undefined4 *)(this + 0x18) = uVar6;
                    /* try { // try from 00b0e1b8 to 00b0e1bf has its CatchHandler @ 00b0e3dc */
    stb_vorbis_get_info(&local_80,**(undefined8 **)(this + 0x68));
                    /* try { // try from 00b0e1c4 to 00b0e1cb has its CatchHandler @ 00b0e3d8 */
    Mutex::leaveCriticalSection();
    uVar6 = 2;
    *(undefined4 *)(this + 0x10) = local_80;
    *(undefined4 *)(this + 8) = 2;
    if (iStack_7c == 1) {
LAB_00b0e1f4:
      *(int *)(this + 0x1c) = iStack_7c;
      *(undefined4 *)(this + 0x14) = uVar6;
    }
    else if (iStack_7c == 2) {
      uVar6 = 4;
      *(undefined4 *)(this + 8) = 3;
      goto LAB_00b0e1f4;
    }
    uVar12 = *(uint *)(param_1 + 0x48);
    *(uint *)(this + 0x20) = uVar12;
    SoftAudioDevice::notifyBufferAllocated(*(SoftAudioDevice **)(this + 0x40),uVar12);
LAB_00b0e268:
    uVar12 = *(uint *)(this + 0x20);
  }
  else {
    *(uint *)(this + 8) = uVar12;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
    if (uVar12 < 6) {
      uVar15 = *(uint *)(&DAT_00524828 + (long)(int)uVar12 * 4);
      uVar14 = *(uint *)(&DAT_00524840 + (long)(int)uVar12 * 4);
    }
    else {
      uVar14 = 1;
      uVar15 = 2;
    }
    *(uint *)(this + 0x14) = uVar15;
    *(uint *)(this + 0x1c) = uVar14;
    if (*(long *)(this + 0x58) != 0) goto LAB_00b0e268;
    uVar1 = *(uint *)(param_1 + 0x48);
    uVar4 = 0;
    if (uVar15 != 0) {
      uVar4 = uVar1 / uVar15;
    }
    *(uint *)(this + 0x18) = uVar4;
    pvVar8 = operator_new__((ulong)(uVar14 * uVar4) << 2);
    *(void **)(this + 0x50) = pvVar8;
    if (uVar12 < 6) {
      puVar10 = *(undefined4 **)(param_1 + 0x40);
      uVar12 = 1 << (ulong)(uVar12 & 0x1f);
      if ((uVar12 & 3) == 0) {
        if ((uVar12 & 0xc) == 0) {
          if (uVar15 <= uVar1) {
            uVar12 = 0;
            do {
              iVar13 = 0;
              puVar11 = puVar10;
              uVar7 = (ulong)uVar14;
              do {
                iVar3 = uVar4 * iVar13;
                iVar13 = iVar13 + 1;
                uVar7 = uVar7 - 1;
                puVar10 = puVar11 + 1;
                *(undefined4 *)((long)pvVar8 + (ulong)(uVar12 + iVar3) * 4) = *puVar11;
                puVar11 = puVar10;
              } while (uVar7 != 0);
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar4);
          }
        }
        else if (uVar15 <= uVar1) {
          uVar12 = 0;
          do {
            iVar13 = 0;
            puVar11 = puVar10;
            uVar7 = (ulong)uVar14;
            do {
              puVar10 = (undefined4 *)((long)puVar11 + 2);
              uVar7 = uVar7 - 1;
              iVar3 = uVar4 * iVar13;
              iVar13 = iVar13 + 1;
              *(float *)((long)pvVar8 + (ulong)(uVar12 + iVar3) * 4) =
                   (float)(int)*(short *)puVar11 * 3.051758e-05;
              puVar11 = puVar10;
            } while (uVar7 != 0);
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar4);
        }
      }
      else if (uVar15 <= uVar1) {
        uVar12 = 0;
        do {
          iVar13 = 0;
          puVar11 = puVar10;
          uVar7 = (ulong)uVar14;
          do {
            puVar10 = (undefined4 *)((long)puVar11 + 1);
            uVar7 = uVar7 - 1;
            iVar3 = uVar4 * iVar13;
            iVar13 = iVar13 + 1;
            *(float *)((long)pvVar8 + (ulong)(uVar12 + iVar3) * 4) =
                 (float)(*(byte *)puVar11 - 0x80) * 0.0078125;
            puVar11 = puVar10;
          } while (uVar7 != 0);
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar4);
      }
    }
    uVar12 = uVar14 * uVar4 * 4;
    *(uint *)(this + 0x20) = uVar12;
  }
  if (uVar12 != 0) {
    SoftAudioDevice::notifyBufferAllocated(*(SoftAudioDevice **)(this + 0x40),uVar12);
  }
  uVar9 = 1;
LAB_00b0e27c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


